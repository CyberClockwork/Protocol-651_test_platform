#include "widget.h"
#include "ui_widget.h"
#include <QByteArray>
#include <QDateTime>
#include <QDebug>
#include "message.h"

struct messageheader MessageHeader ;

Widget::Widget(QWidget *parent) : QWidget(parent) , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Server");

    ui->PortLE->setText("30301");
    ui->ReceivePTE->appendPlainText("Version 1.10208");
    ui->siteID_LE->setText("1234567891");
    ui->centerID->setText("00");
    ui->password_LE->setText("1234");
    ui->serialNUM->setText("0000");

    tcpServer = new QTcpServer(this);
    tcpSocket = new QTcpSocket(this);

    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(newConnection_Slot()));
}


Widget::~Widget()
{
    delete ui;
}


void Widget::newConnection_Slot()    //新连接已建立 -> 等待接收数据
{
    tcpSocket=tcpServer->nextPendingConnection();
    ui->ReceivePTE->appendPlainText("new connection");
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));
}


void Widget::readyRead_Slot()    //显示接收到的数据，判断是否回执
{
    QByteArray TCPreceive =tcpSocket->readAll();
    ui->ReceivePTE->appendPlainText(TCPreceive.toHex());

    ui->centerID->setText(QString(TCPreceive.mid(2,1).toHex()));
    ui->siteID_LE->setText(QString(TCPreceive.mid(3,5).toHex()));
    ui->password_LE->setText(QString(TCPreceive.mid(8,2).toHex()));
    ui->FunctionCode->setText(QString(TCPreceive.mid(10,1).toHex()));
    ui->serialNUM->setText(QString(TCPreceive.mid(14,2).toHex()));

    if(TCPreceive.at(10) < 0x30 || 0x36 < TCPreceive.at(10)) //无需接收响应的报文
        return;

    MessageInit(&MessageHeader);
    QByteArray EchoMessage;
    EchoMessage.append((char*)&MessageHeader,sizeof (MessageHeader));  //转成连续的报文数组
    EchoMessage.append(0x05);

    QByteArray CRCbuf =QByteArray::number(ModbusCRC16(EchoMessage),16); //CRC校验
    QByteArray MessageEcho = EchoMessage.toHex();
    MessageEcho.append(CRCbuf);
    tcpSocket->write(QByteArray::fromHex(MessageEcho));
    ui->ReceivePTE->appendPlainText("Echoed");
}


void Widget::MessageInit(messageheader *messageheader)
{
    QByteArray siteID = ui->siteID_LE->text().toLocal8Bit();
    QByteArray centerID = ui->centerID->text().toLocal8Bit();
    QByteArray Password = ui->password_LE->text().toLocal8Bit();
    QByteArray FunctionCode = ui->FunctionCode->text().toLocal8Bit();
    QByteArray Length = QString("8008").toLocal8Bit();
    QByteArray SerialNum = ui->serialNUM->text().toLocal8Bit();
    QByteArray CurrentTime = QDateTime::currentDateTime().toString("yyMMddhhmmss").toLocal8Bit();

    memset(messageheader->soh,0x7E,2);
    memcpy(messageheader->site_id,QByteArray::fromHex(siteID).data(),5);
    messageheader->center_id = *QByteArray::fromHex(centerID).data();
    memcpy(messageheader->password,QByteArray::fromHex(Password).data(),2);
    messageheader->function_code = *QByteArray::fromHex(FunctionCode).data();
    memcpy(messageheader->length,QByteArray::fromHex(Length).data(),2);
    messageheader->StartSymbol = 0x02;
    memcpy(messageheader->serial,QByteArray::fromHex(SerialNum).data(),2);
    memcpy(messageheader->send_time,QByteArray::fromHex(CurrentTime).data(),6);
}


void Widget::on_OpenServerPB_clicked()
{
    tcpServer->listen(QHostAddress::Any,ui->PortLE->text().toUInt());
    ui->ReceivePTE->appendPlainText("listening");
}


void Widget::on_CloseServerPB_clicked()
{
    tcpServer->close();
    ui->ReceivePTE->appendPlainText("Disconnected");
}


void Widget::on_SendPB_clicked()
{
    bool OKcheck;
    MessageInit(&MessageHeader);

    switch (ui->FunctionCode->text().toInt(&OKcheck,16)) //计算正文长度
    {
    case 0x38:
        MessageHeader.length[0] = 0x80;
        MessageHeader.length[1] = ui->ElementIdentity->text().length()+21;
        break;
    case 0x3A:
        MessageHeader.length[0] = 0x80;
        MessageHeader.length[1] = ui->ElementIdentity->text().length()+8;
        break;
    case 0x40:
        MessageHeader.length[0] = 0x80;
        MessageHeader.length[1] = ui->ChangeConfig->text().length()+8;
        break;
    case 0x41:
        MessageHeader.length[0] = 0x80;
        MessageHeader.length[1] = ui->ReadConfig->text().length()+8;
        break;
    case 0x42:
        MessageHeader.length[0] = 0x80;
        MessageHeader.length[1] = ui->RunningParameter->text().length()+8;
        break;
    default:
        break;
    }

    QByteArray TotalMessage;
    TotalMessage.append((char*)&MessageHeader,sizeof (MessageHeader));  //转成连续的报文数组

    switch (ui->FunctionCode->text().toInt(&OKcheck,16)) //添加正文内容
    {
    case 0x38:
        TotalMessage.append(QByteArray::fromHex(ui->TimeBegin->text().toLocal8Bit()));
        TotalMessage.append(QByteArray::fromHex(ui->TimeEnd->text().toLocal8Bit()));
        TotalMessage.append(QByteArray::fromHex(ui->TimeInterval->text().toLocal8Bit()));
        TotalMessage.append(QByteArray::fromHex(ui->ElementIdentity->text().toLocal8Bit()));
        break;
    case 0x3A:
        TotalMessage.append(QByteArray::fromHex(ui->ElementIdentity->text().toLocal8Bit()));
        break;
    case 0x40:
        TotalMessage.append(QByteArray::fromHex(ui->ChangeConfig->text().toLocal8Bit()));
        break;
    case 0x41:
        TotalMessage.append(QByteArray::fromHex(ui->ReadConfig->text().toLocal8Bit()));
        break;
    case 0x42:
        TotalMessage.append(QByteArray::fromHex(ui->RunningParameter->text().toLocal8Bit()));
        break;
    default:
        break;
    }

    TotalMessage.append(0x05);
    QByteArray CRCbuf =QByteArray::number(ModbusCRC16(TotalMessage),16);
    QByteArray MessageSend = TotalMessage.toHex();
    MessageSend.append(CRCbuf);

    ui->MessageDisplay->appendPlainText(MessageSend);

    tcpSocket->write(QByteArray::fromHex(MessageSend));
    ui->ReceivePTE->appendPlainText("message sent");
}
