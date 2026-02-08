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
    QLineEdit *SendLE;
    QLabel *label_2;
    QLineEdit *IPaddressLE;
    QPlainTextEdit *ReceivePTE;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *OpenServerPB_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *CloseServerPB_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *SendPB_2;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *PortLE_2;
    QLabel *label_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        SendLE = new QLineEdit(Widget);
        SendLE->setObjectName(QString::fromUtf8("SendLE"));
        SendLE->setGeometry(QRect(140, 430, 481, 61));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 295, 141, 31));
        IPaddressLE = new QLineEdit(Widget);
        IPaddressLE->setObjectName(QString::fromUtf8("IPaddressLE"));
        IPaddressLE->setGeometry(QRect(140, 330, 181, 41));
        ReceivePTE = new QPlainTextEdit(Widget);
        ReceivePTE->setObjectName(QString::fromUtf8("ReceivePTE"));
        ReceivePTE->setGeometry(QRect(140, 90, 451, 151));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 540, 601, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        OpenServerPB_2 = new QPushButton(layoutWidget);
        OpenServerPB_2->setObjectName(QString::fromUtf8("OpenServerPB_2"));

        horizontalLayout_2->addWidget(OpenServerPB_2);

        horizontalSpacer_3 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        CloseServerPB_2 = new QPushButton(layoutWidget);
        CloseServerPB_2->setObjectName(QString::fromUtf8("CloseServerPB_2"));

        horizontalLayout_2->addWidget(CloseServerPB_2);

        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        SendPB_2 = new QPushButton(layoutWidget);
        SendPB_2->setObjectName(QString::fromUtf8("SendPB_2"));

        horizontalLayout_2->addWidget(SendPB_2);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 50, 54, 12));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 400, 54, 12));
        PortLE_2 = new QLineEdit(Widget);
        PortLE_2->setObjectName(QString::fromUtf8("PortLE_2"));
        PortLE_2->setGeometry(QRect(490, 330, 181, 41));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(420, 295, 141, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "IP", nullptr));
        OpenServerPB_2->setText(QCoreApplication::translate("Widget", "Open Server", nullptr));
        CloseServerPB_2->setText(QCoreApplication::translate("Widget", "Close Server", nullptr));
        SendPB_2->setText(QCoreApplication::translate("Widget", "send", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Receive", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Send", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Port Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
