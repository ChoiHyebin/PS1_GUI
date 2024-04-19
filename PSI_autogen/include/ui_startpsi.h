/********************************************************************************
** Form generated from reading UI file 'startpsi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTPSI_H
#define UI_STARTPSI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartPSI
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

    void setupUi(QWidget *StartPSI)
    {
        if (StartPSI->objectName().isEmpty())
            StartPSI->setObjectName(QString::fromUtf8("StartPSI"));
        StartPSI->resize(797, 529);
        StartPSI->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        pushButton = new QPushButton(StartPSI);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 70, 191, 71));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#494949;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        pushButton_3 = new QPushButton(StartPSI);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 70, 191, 71));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#494949;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        pushButton_5 = new QPushButton(StartPSI);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(300, 230, 191, 71));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#494949;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        pushButton_6 = new QPushButton(StartPSI);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(560, 230, 191, 71));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#494949;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        pushButton_8 = new QPushButton(StartPSI);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(300, 390, 191, 71));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#494949;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        pushButton_7 = new QPushButton(StartPSI);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 390, 191, 71));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#494949;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        pushButton_9 = new QPushButton(StartPSI);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(560, 390, 191, 71));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#494949;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        pushButton_2 = new QPushButton(StartPSI);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 70, 191, 71));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#494949;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        pushButton_4 = new QPushButton(StartPSI);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 230, 191, 71));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#494949;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));

        retranslateUi(StartPSI);

        QMetaObject::connectSlotsByName(StartPSI);
    } // setupUi

    void retranslateUi(QWidget *StartPSI)
    {
        StartPSI->setWindowTitle(QCoreApplication::translate("StartPSI", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("StartPSI", "View Mode 1", nullptr));
        pushButton_3->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_8->setText(QString());
        pushButton_7->setText(QString());
        pushButton_9->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("StartPSI", "View Mode 2", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StartPSI: public Ui_StartPSI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTPSI_H
