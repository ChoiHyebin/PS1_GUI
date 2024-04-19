/********************************************************************************
** Form generated from reading UI file 'dialog4.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG4_H
#define UI_DIALOG4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog4
{
public:
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_2;

    void setupUi(QDialog *Dialog4)
    {
        if (Dialog4->objectName().isEmpty())
            Dialog4->setObjectName(QString::fromUtf8("Dialog4"));
        Dialog4->resize(400, 300);
        Dialog4->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        gridLayout = new QGridLayout(Dialog4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        doubleSpinBox = new QDoubleSpinBox(Dialog4);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        QFont font;
        font.setPointSize(12);
        doubleSpinBox->setFont(font);
        doubleSpinBox->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(doubleSpinBox, 0, 1, 1, 1);

        label_3 = new QLabel(Dialog4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(14);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(Dialog4);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setFont(font);
        doubleSpinBox_3->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(doubleSpinBox_3, 2, 1, 1, 1);

        label = new QLabel(Dialog4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(Dialog4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";\n"
"background-color:#494949;"));

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);

        label_2 = new QLabel(Dialog4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(Dialog4);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setFont(font);
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(doubleSpinBox_2, 1, 1, 1, 1);


        retranslateUi(Dialog4);

        QMetaObject::connectSlotsByName(Dialog4);
    } // setupUi

    void retranslateUi(QDialog *Dialog4)
    {
        Dialog4->setWindowTitle(QCoreApplication::translate("Dialog4", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog4", "Z", nullptr));
        label->setText(QCoreApplication::translate("Dialog4", "X", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog4", "OK", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog4", "Y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog4: public Ui_Dialog4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG4_H
