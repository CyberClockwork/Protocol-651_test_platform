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
    QLabel *label;
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
    QLabel *label_8;
    QLineEdit *Length;
    QLabel *label_9;
    QLineEdit *serialNUM;
    QPlainTextEdit *MessageDisplay;
    QLabel *label_11;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1133, 673);
        ReceivePTE = new QPlainTextEdit(Widget);
        ReceivePTE->setObjectName(QString::fromUtf8("ReceivePTE"));
        ReceivePTE->setGeometry(QRect(440, 150, 661, 191));
        PortLE = new QLineEdit(Widget);
        PortLE->setObjectName(QString::fromUtf8("PortLE"));
        PortLE->setGeometry(QRect(560, 390, 181, 41));
        SendLE = new QLineEdit(Widget);
        SendLE->setObjectName(QString::fromUtf8("SendLE"));
        SendLE->setGeometry(QRect(560, 490, 481, 61));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 110, 121, 21));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 355, 141, 31));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 460, 54, 12));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(490, 600, 601, 25));
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
        formLayoutWidget->setGeometry(QRect(30, 110, 351, 181));
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

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        Length = new QLineEdit(formLayoutWidget);
        Length->setObjectName(QString::fromUtf8("Length"));

        formLayout->setWidget(4, QFormLayout::FieldRole, Length);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        serialNUM = new QLineEdit(formLayoutWidget);
        serialNUM->setObjectName(QString::fromUtf8("serialNUM"));

        formLayout->setWidget(5, QFormLayout::FieldRole, serialNUM);

        MessageDisplay = new QPlainTextEdit(Widget);
        MessageDisplay->setObjectName(QString::fromUtf8("MessageDisplay"));
        MessageDisplay->setGeometry(QRect(190, 20, 911, 61));
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(60, 30, 121, 41));
        QFont font1;
        font1.setPointSize(18);
        label_11->setFont(font1);

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
        label_4->setText(QCoreApplication::translate("Widget", "\351\201\245\346\265\213\347\253\231\345\234\260\345\235\200", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\270\255\345\277\203\347\253\231\345\234\260\345\235\200", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\345\212\237\350\203\275\347\240\201", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\351\225\277\345\272\246", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "\346\265\201\346\260\264\345\217\267", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "\346\212\245\346\226\207\345\206\205\345\256\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
