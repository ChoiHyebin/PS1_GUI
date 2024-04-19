/********************************************************************************
** Form generated from reading UI file 'widgetsection.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETSECTION_H
#define UI_WIDGETSECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetSection
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_3;
    QPushButton *pushButton;

    void setupUi(QWidget *WidgetSection)
    {
        if (WidgetSection->objectName().isEmpty())
            WidgetSection->setObjectName(QString::fromUtf8("WidgetSection"));
        WidgetSection->resize(400, 300);
        WidgetSection->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        gridLayout = new QGridLayout(WidgetSection);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WidgetSection);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(WidgetSection);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        QFont font1;
        font1.setPointSize(12);
        doubleSpinBox->setFont(font1);
        doubleSpinBox->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(doubleSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(WidgetSection);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(WidgetSection);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setFont(font1);
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(doubleSpinBox_2, 1, 1, 1, 1);

        label_3 = new QLabel(WidgetSection);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(WidgetSection);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setFont(font1);
        doubleSpinBox_3->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";"));

        gridLayout->addWidget(doubleSpinBox_3, 2, 1, 1, 1);

        pushButton = new QPushButton(WidgetSection);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("font-family:\"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234 regular\";\n"
"background-color:#494949;"));

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);


        retranslateUi(WidgetSection);

        QMetaObject::connectSlotsByName(WidgetSection);
    } // setupUi

    void retranslateUi(QWidget *WidgetSection)
    {
        WidgetSection->setWindowTitle(QCoreApplication::translate("WidgetSection", "Form", nullptr));
        label->setText(QCoreApplication::translate("WidgetSection", "X", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetSection", "Y", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetSection", "Z", nullptr));
        pushButton->setText(QCoreApplication::translate("WidgetSection", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetSection: public Ui_WidgetSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETSECTION_H
