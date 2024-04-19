/********************************************************************************
** Form generated from reading UI file 'subbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBBUTTON_H
#define UI_SUBBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SubButton
{
public:
    QGridLayout *gridLayout;
    QFrame *line;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_10;
    QLabel *label_7;
    QLabel *label_4;
    QLineEdit *lineEdit_7;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *SubButton)
    {
        if (SubButton->objectName().isEmpty())
            SubButton->setObjectName(QString::fromUtf8("SubButton"));
        SubButton->resize(410, 305);
        SubButton->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        gridLayout = new QGridLayout(SubButton);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line = new QFrame(SubButton);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8("border:1px solid #494949;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 8);

        pushButton = new QPushButton(SubButton);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setPointSize(10);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:#494949;"));

        gridLayout->addWidget(pushButton, 3, 7, 1, 1);

        pushButton_3 = new QPushButton(SubButton);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:#494949;"));

        gridLayout->addWidget(pushButton_3, 5, 7, 1, 1);

        lineEdit_10 = new QLineEdit(SubButton);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setFont(font);
        lineEdit_10->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_10, 6, 1, 1, 2);

        label_7 = new QLabel(SubButton);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 2, 3, 1, 2);

        label_4 = new QLabel(SubButton);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        lineEdit_7 = new QLineEdit(SubButton);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setFont(font);
        lineEdit_7->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_7, 5, 1, 1, 2);

        label_6 = new QLabel(SubButton);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 1, 1, 2);

        lineEdit_3 = new QLineEdit(SubButton);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_3, 3, 5, 1, 2);

        lineEdit_6 = new QLineEdit(SubButton);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setFont(font);
        lineEdit_6->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_6, 4, 5, 1, 2);

        label_3 = new QLabel(SubButton);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_5 = new QLabel(SubButton);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        pushButton_4 = new QPushButton(SubButton);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color:#494949;"));

        gridLayout->addWidget(pushButton_4, 6, 7, 1, 1);

        label_2 = new QLabel(SubButton);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        lineEdit_9 = new QLineEdit(SubButton);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setFont(font);
        lineEdit_9->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_9, 5, 5, 1, 2);

        pushButton_2 = new QPushButton(SubButton);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:#494949;"));

        gridLayout->addWidget(pushButton_2, 4, 7, 1, 1);

        lineEdit_12 = new QLineEdit(SubButton);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setFont(font);
        lineEdit_12->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_12, 6, 5, 1, 2);

        lineEdit_8 = new QLineEdit(SubButton);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setFont(font);
        lineEdit_8->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_8, 5, 3, 1, 2);

        lineEdit = new QLineEdit(SubButton);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit, 3, 1, 1, 2);

        label = new QLabel(SubButton);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 1, 1, 6);

        lineEdit_4 = new QLineEdit(SubButton);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setFont(font);
        lineEdit_4->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_4, 4, 1, 1, 2);

        lineEdit_5 = new QLineEdit(SubButton);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setFont(font);
        lineEdit_5->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_5, 4, 3, 1, 2);

        label_8 = new QLabel(SubButton);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 2, 5, 1, 2);

        lineEdit_11 = new QLineEdit(SubButton);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setFont(font);
        lineEdit_11->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_11, 6, 3, 1, 2);

        lineEdit_2 = new QLineEdit(SubButton);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_2, 3, 3, 1, 2);


        retranslateUi(SubButton);

        QMetaObject::connectSlotsByName(SubButton);
    } // setupUi

    void retranslateUi(QDialog *SubButton)
    {
        SubButton->setWindowTitle(QCoreApplication::translate("SubButton", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("SubButton", "OK", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SubButton", "OK", nullptr));
        label_7->setText(QCoreApplication::translate("SubButton", "        y        ", nullptr));
        label_4->setText(QCoreApplication::translate("SubButton", "Sacle", nullptr));
        label_6->setText(QCoreApplication::translate("SubButton", "        x        ", nullptr));
        label_3->setText(QCoreApplication::translate("SubButton", "Euler", nullptr));
        label_5->setText(QCoreApplication::translate("SubButton", "Boundary", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SubButton", "OK", nullptr));
        label_2->setText(QCoreApplication::translate("SubButton", "Position", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SubButton", "OK", nullptr));
        label->setText(QCoreApplication::translate("SubButton", "Direct Change", nullptr));
        label_8->setText(QCoreApplication::translate("SubButton", "        z        ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubButton: public Ui_SubButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBBUTTON_H
