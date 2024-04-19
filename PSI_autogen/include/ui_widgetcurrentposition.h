/********************************************************************************
** Form generated from reading UI file 'widgetcurrentposition.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETCURRENTPOSITION_H
#define UI_WIDGETCURRENTPOSITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetCurrentPosition
{
public:
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_8;
    QLabel *label_8;
    QLabel *currentattitude;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit;
    QLabel *label_13;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_3;
    QLabel *label_12;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_9;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_6;
    QLabel *currentattitude_2;
    QLabel *label_2;
    QLineEdit *lineEdit_12;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_10;
    QVBoxLayout *verticalLayout_2;
    QFrame *line;
    QLabel *label_14;

    void setupUi(QWidget *WidgetCurrentPosition)
    {
        if (WidgetCurrentPosition->objectName().isEmpty())
            WidgetCurrentPosition->setObjectName(QString::fromUtf8("WidgetCurrentPosition"));
        WidgetCurrentPosition->resize(403, 300);
        WidgetCurrentPosition->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        layoutWidget_2 = new QWidget(WidgetCurrentPosition);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 20, 2, 2));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout(WidgetCurrentPosition);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(WidgetCurrentPosition);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 8, 0, 1, 1);

        lineEdit_8 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setFont(font);
        lineEdit_8->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_8, 8, 2, 1, 1);

        label_8 = new QLabel(WidgetCurrentPosition);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout->addWidget(label_8, 4, 4, 1, 1);

        currentattitude = new QLabel(WidgetCurrentPosition);
        currentattitude->setObjectName(QString::fromUtf8("currentattitude"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        currentattitude->setFont(font1);
        currentattitude->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout->addWidget(currentattitude, 3, 1, 1, 3);

        lineEdit_5 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setFont(font);
        lineEdit_5->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_5, 5, 2, 1, 1);

        lineEdit = new QLineEdit(WidgetCurrentPosition);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit, 4, 1, 1, 1);

        label_13 = new QLabel(WidgetCurrentPosition);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        gridLayout->addWidget(label_13, 10, 0, 1, 1);

        lineEdit_17 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setFont(font);
        lineEdit_17->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_17, 10, 2, 1, 1);

        lineEdit_7 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setFont(font);
        lineEdit_7->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_7, 8, 1, 1, 1);

        lineEdit_4 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setFont(font);
        lineEdit_4->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_4, 5, 1, 1, 1);

        label = new QLabel(WidgetCurrentPosition);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setLineWidth(0);

        gridLayout->addWidget(label, 4, 0, 1, 1);

        lineEdit_16 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setFont(font);
        lineEdit_16->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_16, 10, 1, 1, 1);

        lineEdit_3 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_3, 4, 3, 1, 1);

        label_12 = new QLabel(WidgetCurrentPosition);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 6, 0, 1, 1);

        lineEdit_18 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setFont(font);
        lineEdit_18->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_18, 10, 3, 1, 1);

        lineEdit_14 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setFont(font);
        lineEdit_14->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_14, 6, 2, 1, 1);

        lineEdit_9 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setFont(font);
        lineEdit_9->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_9, 8, 3, 1, 1);

        label_5 = new QLabel(WidgetCurrentPosition);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        label_4 = new QLabel(WidgetCurrentPosition);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 9, 0, 1, 1);

        lineEdit_2 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_2, 4, 2, 1, 1);

        lineEdit_11 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setFont(font);
        lineEdit_11->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_11, 9, 2, 1, 1);

        lineEdit_13 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setFont(font);
        lineEdit_13->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_13, 6, 1, 1, 1);

        lineEdit_6 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setFont(font);
        lineEdit_6->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_6, 5, 3, 1, 1);

        currentattitude_2 = new QLabel(WidgetCurrentPosition);
        currentattitude_2->setObjectName(QString::fromUtf8("currentattitude_2"));
        currentattitude_2->setFont(font1);
        currentattitude_2->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout->addWidget(currentattitude_2, 7, 1, 1, 3);

        label_2 = new QLabel(WidgetCurrentPosition);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        lineEdit_12 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setFont(font);
        lineEdit_12->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_12, 9, 3, 1, 1);

        label_6 = new QLabel(WidgetCurrentPosition);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        label_7 = new QLabel(WidgetCurrentPosition);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 2, 3, 1, 1);

        lineEdit_15 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setFont(font);
        lineEdit_15->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_15, 6, 3, 1, 1);

        lineEdit_10 = new QLineEdit(WidgetCurrentPosition);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setFont(font);
        lineEdit_10->setStyleSheet(QString::fromUtf8("border:1px solid #AAAAAA;"));

        gridLayout->addWidget(lineEdit_10, 9, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        line = new QFrame(WidgetCurrentPosition);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8("border:1px solid #494949;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 5);

        label_14 = new QLabel(WidgetCurrentPosition);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout->addWidget(label_14, 0, 0, 1, 5);


        retranslateUi(WidgetCurrentPosition);

        QMetaObject::connectSlotsByName(WidgetCurrentPosition);
    } // setupUi

    void retranslateUi(QWidget *WidgetCurrentPosition)
    {
        WidgetCurrentPosition->setWindowTitle(QCoreApplication::translate("WidgetCurrentPosition", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetCurrentPosition", "Rotation", nullptr));
        label_8->setText(QCoreApplication::translate("WidgetCurrentPosition", "         . ", nullptr));
        currentattitude->setText(QCoreApplication::translate("WidgetCurrentPosition", "Object", nullptr));
        label_13->setText(QCoreApplication::translate("WidgetCurrentPosition", "Size", nullptr));
        label->setText(QCoreApplication::translate("WidgetCurrentPosition", "Rotation", nullptr));
        label_12->setText(QCoreApplication::translate("WidgetCurrentPosition", "Scale", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetCurrentPosition", "        x        ", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetCurrentPosition", "Translation", nullptr));
        currentattitude_2->setText(QCoreApplication::translate("WidgetCurrentPosition", "Boundary", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetCurrentPosition", "Translation", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetCurrentPosition", "        y        ", nullptr));
        label_7->setText(QCoreApplication::translate("WidgetCurrentPosition", "        z        ", nullptr));
        label_14->setText(QCoreApplication::translate("WidgetCurrentPosition", "Current Position", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetCurrentPosition: public Ui_WidgetCurrentPosition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETCURRENTPOSITION_H
