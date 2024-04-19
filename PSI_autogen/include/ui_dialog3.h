/********************************************************************************
** Form generated from reading UI file 'dialog3.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG3_H
#define UI_DIALOG3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog3
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog3)
    {
        if (Dialog3->objectName().isEmpty())
            Dialog3->setObjectName(QString::fromUtf8("Dialog3"));
        Dialog3->resize(345, 221);
        Dialog3->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        gridLayout = new QGridLayout(Dialog3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox = new QComboBox(Dialog3);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 bold\";"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(Dialog3);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setFont(font);
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 bold\";"));

        gridLayout->addWidget(comboBox_2, 0, 1, 1, 1);

        comboBox_3 = new QComboBox(Dialog3);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setFont(font);
        comboBox_3->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 bold\";"));

        gridLayout->addWidget(comboBox_3, 0, 2, 1, 1);

        comboBox_4 = new QComboBox(Dialog3);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setFont(font);
        comboBox_4->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 bold\";"));

        gridLayout->addWidget(comboBox_4, 0, 3, 1, 1);

        pushButton = new QPushButton(Dialog3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 bold\";"));

        gridLayout->addWidget(pushButton, 0, 4, 1, 1);


        retranslateUi(Dialog3);

        QMetaObject::connectSlotsByName(Dialog3);
    } // setupUi

    void retranslateUi(QDialog *Dialog3)
    {
        Dialog3->setWindowTitle(QCoreApplication::translate("Dialog3", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialog3", "File", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("Dialog3", "Save", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("Dialog3", "Function", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("Dialog3", "Supplement", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Dialog3", "view1", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("Dialog3", "view2", nullptr));

        pushButton->setText(QCoreApplication::translate("Dialog3", "Section", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog3: public Ui_Dialog3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG3_H
