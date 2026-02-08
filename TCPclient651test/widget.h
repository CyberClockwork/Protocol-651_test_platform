#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QTcpSocket *tcpSocket;

private slots:
    void connected_Slot();    //声明槽函数
    void readyRead_Slot();

    void on_OpenServerPB_2_clicked();
    void on_SendPB_2_clicked();
    void on_CloseServerPB_2_clicked();
};
#endif // WIDGET_H
