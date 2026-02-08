#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowTitle("Client");
    ui->ReceivePTE->appendPlainText("Version 1.10210");
    ui->IPaddressLE->setText("223.94.54.188");
    ui->PortLE_2->setText("30301");

    tcpSocket= new QTcpSocket(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::connected_Slot()    //连接槽函数
{
    ui->ReceivePTE->appendPlainText("connect success");
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));
}

void Widget::readyRead_Slot()    //读取数据槽函数
{
    QByteArray ReceiveBuf = tcpSocket->readAll().toHex();
    ui->ReceivePTE->appendPlainText("Receive :");
    ui->ReceivePTE->appendPlainText(ReceiveBuf);
}


void Widget::on_OpenServerPB_2_clicked()
{
    tcpSocket->connectToHost(ui->IPaddressLE->text(),ui->PortLE_2->text().toUInt());

    connect(tcpSocket,SIGNAL(connected()),this,SLOT(connected_Slot()));
}

void Widget::on_SendPB_2_clicked()
{
    tcpSocket->write(QByteArray::fromHex(ui->SendLE->text().toLocal8Bit()));
    ui->ReceivePTE->appendPlainText("send:");
    ui->ReceivePTE->appendPlainText(ui->SendLE->text());
}

void Widget::on_CloseServerPB_2_clicked()
{
    tcpSocket->close();
    ui->ReceivePTE->appendPlainText("Disconnected");
}
