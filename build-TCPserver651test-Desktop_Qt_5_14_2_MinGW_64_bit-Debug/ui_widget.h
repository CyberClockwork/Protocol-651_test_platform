/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPlainTextEdit *ReceivePTE;
    QLineEdit *PortLE;
    QLineEdit *SendLE;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *OpenServerPB;
    QSpacerItem *horizontalSpacer;
    QPushButton *CloseServerPB;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *SendPB;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        ReceivePTE = new QPlainTextEdit(Widget);
        ReceivePTE->setObjectName(QString::fromUtf8("ReceivePTE"));
        ReceivePTE->setGeometry(QRect(150, 60, 451, 151));
        PortLE = new QLineEdit(Widget);
        PortLE->setObjectName(QString::fromUtf8("PortLE"));
        PortLE->setGeometry(QRect(150, 300, 181, 41));
        SendLE = new QLineEdit(Widget);
        SendLE->setObjectName(QString::fromUtf8("SendLE"));
        SendLE->setGeometry(QRect(150, 400, 481, 61));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 54, 12));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 265, 141, 31));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 370, 54, 12));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 510, 601, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        OpenServerPB = new QPushButton(widget);
        OpenServerPB->setObjectName(QString::fromUtf8("OpenServerPB"));

        horizontalLayout->addWidget(OpenServerPB);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        CloseServerPB = new QPushButton(widget);
        CloseServerPB->setObjectName(QString::fromUtf8("CloseServerPB"));

        horizontalLayout->addWidget(CloseServerPB);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        SendPB = new QPushButton(widget);
        SendPB->setObjectName(QString::fromUtf8("SendPB"));

        horizontalLayout->addWidget(SendPB);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Receive", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Port Number", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Send", nullptr));
        OpenServerPB->setText(QCoreApplication::translate("Widget", "Open Server", nullptr));
        CloseServerPB->setText(QCoreApplication::translate("Widget", "Close Server", nullptr));
        SendPB->setText(QCoreApplication::translate("Widget", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
