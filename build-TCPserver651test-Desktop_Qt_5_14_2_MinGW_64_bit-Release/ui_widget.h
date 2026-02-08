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
#include <QtWidgets/QFormLayout>
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
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *OpenServerPB;
    QSpacerItem *horizontalSpacer;
    QPushButton *CloseServerPB;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *SendPB;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *siteID_LE;
    QLabel *label_5;
    QLineEdit *centerID;
    QLabel *label_6;
    QLineEdit *password_LE;
    QLabel *label_7;
    QLineEdit *FunctionCode;
    QLabel *label_9;
    QLineEdit *serialNUM;
    QPlainTextEdit *MessageDisplay;
    QLabel *label_11;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLineEdit *TimeBegin;
    QLabel *label_12;
    QLineEdit *TimeEnd;
    QLabel *label_13;
    QLineEdit *TimeInterval;
    QLabel *label_15;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_14;
    QLabel *label_16;
    QLineEdit *ChangeConfig;
    QLineEdit *ElementIdentity;
    QLabel *label_17;
    QLineEdit *ReadConfig;
    QLabel *label_18;
    QLineEdit *RunningParameter;
    QLabel *label_20;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1133, 673);
        ReceivePTE = new QPlainTextEdit(Widget);
        ReceivePTE->setObjectName(QString::fromUtf8("ReceivePTE"));
        ReceivePTE->setGeometry(QRect(440, 250, 661, 321));
        PortLE = new QLineEdit(Widget);
        PortLE->setObjectName(QString::fromUtf8("PortLE"));
        PortLE->setGeometry(QRect(40, 600, 181, 41));
        SendLE = new QLineEdit(Widget);
        SendLE->setObjectName(QString::fromUtf8("SendLE"));
        SendLE->setGeometry(QRect(230, 600, 171, 41));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 560, 141, 31));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 570, 54, 12));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(480, 600, 601, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        OpenServerPB = new QPushButton(layoutWidget);
        OpenServerPB->setObjectName(QString::fromUtf8("OpenServerPB"));

        horizontalLayout->addWidget(OpenServerPB);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        CloseServerPB = new QPushButton(layoutWidget);
        CloseServerPB->setObjectName(QString::fromUtf8("CloseServerPB"));

        horizontalLayout->addWidget(CloseServerPB);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        SendPB = new QPushButton(layoutWidget);
        SendPB->setObjectName(QString::fromUtf8("SendPB"));

        horizontalLayout->addWidget(SendPB);

        formLayoutWidget = new QWidget(Widget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 270, 351, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        siteID_LE = new QLineEdit(formLayoutWidget);
        siteID_LE->setObjectName(QString::fromUtf8("siteID_LE"));

        formLayout->setWidget(0, QFormLayout::FieldRole, siteID_LE);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        centerID = new QLineEdit(formLayoutWidget);
        centerID->setObjectName(QString::fromUtf8("centerID"));

        formLayout->setWidget(1, QFormLayout::FieldRole, centerID);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        password_LE = new QLineEdit(formLayoutWidget);
        password_LE->setObjectName(QString::fromUtf8("password_LE"));

        formLayout->setWidget(2, QFormLayout::FieldRole, password_LE);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        FunctionCode = new QLineEdit(formLayoutWidget);
        FunctionCode->setObjectName(QString::fromUtf8("FunctionCode"));

        formLayout->setWidget(3, QFormLayout::FieldRole, FunctionCode);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        serialNUM = new QLineEdit(formLayoutWidget);
        serialNUM->setObjectName(QString::fromUtf8("serialNUM"));

        formLayout->setWidget(4, QFormLayout::FieldRole, serialNUM);

        MessageDisplay = new QPlainTextEdit(Widget);
        MessageDisplay->setObjectName(QString::fromUtf8("MessageDisplay"));
        MessageDisplay->setGeometry(QRect(190, 20, 911, 61));
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(60, 30, 121, 41));
        QFont font;
        font.setPointSize(18);
        label_11->setFont(font);
        formLayoutWidget_2 = new QWidget(Widget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(40, 440, 351, 111));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        TimeBegin = new QLineEdit(formLayoutWidget_2);
        TimeBegin->setObjectName(QString::fromUtf8("TimeBegin"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, TimeBegin);

        label_12 = new QLabel(formLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_12);

        TimeEnd = new QLineEdit(formLayoutWidget_2);
        TimeEnd->setObjectName(QString::fromUtf8("TimeEnd"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, TimeEnd);

        label_13 = new QLabel(formLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_13);

        TimeInterval = new QLineEdit(formLayoutWidget_2);
        TimeInterval->setObjectName(QString::fromUtf8("TimeInterval"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, TimeInterval);

        label_15 = new QLabel(Widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(40, 420, 91, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_15->setFont(font1);
        formLayoutWidget_3 = new QWidget(Widget);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(30, 100, 1071, 131));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(formLayoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_14);

        label_16 = new QLabel(formLayoutWidget_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_16);

        ChangeConfig = new QLineEdit(formLayoutWidget_3);
        ChangeConfig->setObjectName(QString::fromUtf8("ChangeConfig"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, ChangeConfig);

        ElementIdentity = new QLineEdit(formLayoutWidget_3);
        ElementIdentity->setObjectName(QString::fromUtf8("ElementIdentity"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, ElementIdentity);

        label_17 = new QLabel(formLayoutWidget_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_17);

        ReadConfig = new QLineEdit(formLayoutWidget_3);
        ReadConfig->setObjectName(QString::fromUtf8("ReadConfig"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, ReadConfig);

        label_18 = new QLabel(formLayoutWidget_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_18);

        RunningParameter = new QLineEdit(formLayoutWidget_3);
        RunningParameter->setObjectName(QString::fromUtf8("RunningParameter"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, RunningParameter);

        label_20 = new QLabel(Widget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(30, 80, 91, 20));
        label_20->setFont(font1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Port Number", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Send", nullptr));
        OpenServerPB->setText(QCoreApplication::translate("Widget", "Open Server", nullptr));
        CloseServerPB->setText(QCoreApplication::translate("Widget", "Close Server", nullptr));
        SendPB->setText(QCoreApplication::translate("Widget", "send", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\351\201\245\346\265\213\347\253\231\345\234\260\345\235\200", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\270\255\345\277\203\347\253\231\345\234\260\345\235\200", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\345\212\237\350\203\275\347\240\201", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "\346\265\201\346\260\264\345\217\267", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "\346\212\245\346\226\207\345\206\205\345\256\271", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "\346\227\266\351\227\264\346\255\245\351\225\277\346\240\207\350\257\206", nullptr));
        TimeInterval->setText(QCoreApplication::translate("Widget", "0418000005", nullptr));
        label_15->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242\346\227\266\346\256\265\346\225\260\346\215\256", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "\350\246\201\347\264\240(38/3A)", nullptr));
        label_16->setText(QCoreApplication::translate("Widget", "\344\277\256\346\224\271\351\205\215\347\275\256(40)", nullptr));
        label_17->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\351\205\215\347\275\256(41)", nullptr));
        ReadConfig->setText(QCoreApplication::translate("Widget", "F1F1", nullptr));
        label_18->setText(QCoreApplication::translate("Widget", "\344\277\256\346\224\271\350\277\220\350\241\214\345\217\202\346\225\260(42)", nullptr));
        label_20->setText(QCoreApplication::translate("Widget", "\351\201\245\346\265\213\347\253\231\345\206\205\345\256\271\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
