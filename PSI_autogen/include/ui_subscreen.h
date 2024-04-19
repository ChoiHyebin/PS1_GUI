/********************************************************************************
** Form generated from reading UI file 'subscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSCREEN_H
#define UI_SUBSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubScreen
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *SubScreen)
    {
        if (SubScreen->objectName().isEmpty())
            SubScreen->setObjectName(QString::fromUtf8("SubScreen"));
        SubScreen->resize(436, 221);
        SubScreen->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        gridLayout = new QGridLayout(SubScreen);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(SubScreen);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 bold\";"));

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(SubScreen);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 bold\";"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton = new QPushButton(SubScreen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 bold\";"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);


        retranslateUi(SubScreen);

        QMetaObject::connectSlotsByName(SubScreen);
    } // setupUi

    void retranslateUi(QWidget *SubScreen)
    {
        SubScreen->setWindowTitle(QCoreApplication::translate("SubScreen", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SubScreen", "Launch", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SubScreen", "Function", nullptr));
        pushButton->setText(QCoreApplication::translate("SubScreen", "Section", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubScreen: public Ui_SubScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSCREEN_H
