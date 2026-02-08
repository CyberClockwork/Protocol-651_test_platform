#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

struct messageheader {  char soh[2];         //2字节，帧起始符SOH，"7E7E"
                        char site_id[5];     //5字节，遥测站
                        char center_id;      //1字节，中心站地址
                        char password[2];    //密码
                        char function_code;  //功能码
                        char length[2];   //上下行标识、数据长度（高 4 bit：0为上行，8为下行；低12bit为数据长度）
                        char StartSymbol;     //数据起始符
                        char serial[2];      //报文流水号
                        char send_time[6];   //报文发送的日期和时间 YYMMDDHHmmSS
                        //以上为固定内容（下行报文）
                        /*char LatePart[60];*/   };//后半部分

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;

private slots:
    void newConnection_Slot();    //添加的槽函数
    void readyRead_Slot();
    void MessageInit(messageheader *messageheader);


    void on_OpenServerPB_clicked();
    void on_CloseServerPB_clicked();
    void on_SendPB_clicked();
};



#endif // WIDGET_H
