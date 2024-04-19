/********************************************************************************
** Form generated from reading UI file 'mainscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCREEN_H
#define UI_MAINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qvtkopenglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainScreen
{
public:
    QLabel *label_6;
    QToolButton *toolButton_3;
    QToolButton *toolButton_6;
    QFrame *line;
    QToolButton *F3;
    QToolButton *toolButton_15;
    QToolButton *F1;
    QToolButton *F9;
    QVTKOpenGLWidget *CarStl;
    QToolButton *F2;
    QLabel *label_7;
    QToolButton *toolButton_7;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_2;
    QComboBox *comboBox;
    QToolButton *toolButton_4;
    QToolButton *F7;
    QToolButton *toolButton_11;
    QToolButton *toolButton_18;
    QToolButton *toolButton_17;
    QToolButton *toolButton_19;
    QToolButton *F5;
    QToolButton *toolButton_14;
    QToolButton *toolButton_5;
    QToolButton *toolButton_13;
    QSlider *Slider;
    QDoubleSpinBox *doubleSpinBox;
    QToolButton *F4;
    QVTKOpenGLWidget *openGLWidget_2;
    QToolButton *toolButton_12;
    QToolButton *toolButton_8;
    QToolButton *toolButton_2;
    QLabel *label_8;
    QToolButton *F10;
    QToolButton *F8;
    QLabel *label;
    QToolButton *toolButton_16;
    QToolButton *F6;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_3;

    void setupUi(QWidget *MainScreen)
    {
        if (MainScreen->objectName().isEmpty())
            MainScreen->setObjectName(QString::fromUtf8("MainScreen"));
        MainScreen->resize(1002, 1332);
        MainScreen->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_6 = new QLabel(MainScreen);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 980, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font.setPointSize(14);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));
        toolButton_3 = new QToolButton(MainScreen);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(326, 66, 55, 29));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font1.setPointSize(16);
        font1.setBold(true);
        toolButton_3->setFont(font1);
        toolButton_3->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:black;\n"
"	color:white;\n"
"}"));
        toolButton_6 = new QToolButton(MainScreen);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        toolButton_6->setGeometry(QRect(220, 170, 201, 80));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font2.setPointSize(14);
        font2.setBold(false);
        toolButton_6->setFont(font2);
        toolButton_6->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:#494949;\n"
"	color:white;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	background-color:#FF6B27;\n"
"	color:white;\n"
"}"));
        line = new QFrame(MainScreen);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(1, 156, 999, 16));
        line->setStyleSheet(QString::fromUtf8("border:1px solid #FF6B27;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        F3 = new QToolButton(MainScreen);
        F3->setObjectName(QString::fromUtf8("F3"));
        F3->setGeometry(QRect(220, 1250, 71, 71));
        F3->setFont(font);
        F3->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	background-color:#494949;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        toolButton_15 = new QToolButton(MainScreen);
        toolButton_15->setObjectName(QString::fromUtf8("toolButton_15"));
        toolButton_15->setGeometry(QRect(40, 1160, 201, 71));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_15->sizePolicy().hasHeightForWidth());
        toolButton_15->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font3.setPointSize(16);
        toolButton_15->setFont(font3);
        toolButton_15->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	color:black;\n"
"	border:none;\n"
"	background-color:qlineargradient(spread:reflect, x1:0.5, y1:0.5, x2:1, y2:0.5, stop:0 #B4B4B4, stop:1 #494949);\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:none;\n"
"	background-color:qlineargradient(spread:reflect, x1:0.5, y1:0, x2:1, y2:0, stop:0 #FF6B27, stop:0.920455 #494949);\n"
"	color:white;\n"
"}\n"
""));
        F1 = new QToolButton(MainScreen);
        F1->setObjectName(QString::fromUtf8("F1"));
        F1->setGeometry(QRect(40, 1250, 71, 71));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(F1->sizePolicy().hasHeightForWidth());
        F1->setSizePolicy(sizePolicy1);
        F1->setFont(font);
        F1->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	background-color:#494949;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        F9 = new QToolButton(MainScreen);
        F9->setObjectName(QString::fromUtf8("F9"));
        F9->setGeometry(QRect(810, 1250, 71, 71));
        F9->setFont(font);
        F9->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	background-color:#494949;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        CarStl = new QVTKOpenGLWidget(MainScreen);
        CarStl->setObjectName(QString::fromUtf8("CarStl"));
        CarStl->setGeometry(QRect(20, 260, 211, 181));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        CarStl->setFont(font4);
        F2 = new QToolButton(MainScreen);
        F2->setObjectName(QString::fromUtf8("F2"));
        F2->setGeometry(QRect(130, 1250, 71, 71));
        F2->setFont(font);
        F2->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	background-color:#494949;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        label_7 = new QLabel(MainScreen);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(670, 1030, 131, 31));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));
        toolButton_7 = new QToolButton(MainScreen);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        toolButton_7->setGeometry(QRect(420, 170, 201, 80));
        toolButton_7->setFont(font2);
        toolButton_7->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:#494949;\n"
"	color:white;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	background-color:#FF6B27;\n"
"	color:white;\n"
"}"));
        label_5 = new QLabel(MainScreen);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(720, 980, 161, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));
        doubleSpinBox_2 = new QDoubleSpinBox(MainScreen);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(830, 1100, 141, 61));
        doubleSpinBox_2->setFont(font);
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"color:white;\n"
"border:1px solid #494949;\n"
"background-color:black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"	width:30px;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"	width:30px\n"
"}"));
        doubleSpinBox_2->setMinimum(0.000000000000000);
        doubleSpinBox_2->setMaximum(1000000.000000000000000);
        comboBox = new QComboBox(MainScreen);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(753, 66, 121, 29));
        comboBox->setFont(font1);
        toolButton_4 = new QToolButton(MainScreen);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setGeometry(QRect(137, 66, 45, 29));
        toolButton_4->setFont(font1);
        toolButton_4->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:black;\n"
"	color:white;\n"
"}"));
        F7 = new QToolButton(MainScreen);
        F7->setObjectName(QString::fromUtf8("F7"));
        F7->setGeometry(QRect(620, 1250, 71, 71));
        F7->setFont(font);
        F7->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	background-color:#494949;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        toolButton_11 = new QToolButton(MainScreen);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));
        toolButton_11->setGeometry(QRect(40, 1020, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_11->sizePolicy().hasHeightForWidth());
        toolButton_11->setSizePolicy(sizePolicy);
        toolButton_11->setFont(font3);
        toolButton_11->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	color:black;\n"
"	border:none;\n"
"	background-color:qlineargradient(spread:reflect, x1:0.5, y1:0.5, x2:1, y2:0.5, stop:0 #B4B4B4, stop:1 #494949);\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:none;\n"
"	background-color:qlineargradient(spread:reflect, x1:0.5, y1:0, x2:1, y2:0, stop:0 #FF6B27, stop:0.920455 #494949);\n"
"	color:white;\n"
"}\n"
""));
        toolButton_18 = new QToolButton(MainScreen);
        toolButton_18->setObjectName(QString::fromUtf8("toolButton_18"));
        toolButton_18->setGeometry(QRect(240, 1090, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_18->sizePolicy().hasHeightForWidth());
        toolButton_18->setSizePolicy(sizePolicy);
        toolButton_18->setFont(font);
        toolButton_18->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	border:none;\n"
"	background-color: #494949;\n"
"	color:white;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:none;\n"
"	background-color: #FF6B27;\n"
"	color:white;\n"
"}\n"
""));
        toolButton_17 = new QToolButton(MainScreen);
        toolButton_17->setObjectName(QString::fromUtf8("toolButton_17"));
        toolButton_17->setGeometry(QRect(440, 1020, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_17->sizePolicy().hasHeightForWidth());
        toolButton_17->setSizePolicy(sizePolicy);
        toolButton_17->setFont(font);
        toolButton_17->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	border:none;\n"
"	background-color: #494949;\n"
"	color:white;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:none;\n"
"	background-color: #FF6B27;\n"
"	color:white;\n"
"}\n"
""));
        toolButton_19 = new QToolButton(MainScreen);
        toolButton_19->setObjectName(QString::fromUtf8("toolButton_19"));
        toolButton_19->setGeometry(QRect(440, 1090, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_19->sizePolicy().hasHeightForWidth());
        toolButton_19->setSizePolicy(sizePolicy);
        toolButton_19->setFont(font);
        toolButton_19->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	border:none;\n"
"	background-color: #494949;\n"
"	color:white;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:none;\n"
"	background-color: #FF6B27;\n"
"	color:white;\n"
"}\n"
""));
        F5 = new QToolButton(MainScreen);
        F5->setObjectName(QString::fromUtf8("F5"));
        F5->setGeometry(QRect(420, 1250, 71, 71));
        F5->setFont(font);
        F5->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	background-color:#494949;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        toolButton_14 = new QToolButton(MainScreen);
        toolButton_14->setObjectName(QString::fromUtf8("toolButton_14"));
        toolButton_14->setGeometry(QRect(40, 1090, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_14->sizePolicy().hasHeightForWidth());
        toolButton_14->setSizePolicy(sizePolicy);
        toolButton_14->setFont(font3);
        toolButton_14->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	color:black;\n"
"	border:none;\n"
"	background-color:qlineargradient(spread:reflect, x1:0.5, y1:0.5, x2:1, y2:0.5, stop:0 #B4B4B4, stop:1 #494949);\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:none;\n"
"	background-color:qlineargradient(spread:reflect, x1:0.5, y1:0, x2:1, y2:0, stop:0 #FF6B27, stop:0.920455 #494949);\n"
"	color:white;\n"
"}\n"
""));
        toolButton_5 = new QToolButton(MainScreen);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        toolButton_5->setGeometry(QRect(20, 170, 201, 80));
        toolButton_5->setFont(font);
        toolButton_5->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:#494949;\n"
"	color:white;\n"
"	position: relative;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	background-color:#FF6B27;\n"
"	color:white;\n"
"}"));
        toolButton_13 = new QToolButton(MainScreen);
        toolButton_13->setObjectName(QString::fromUtf8("toolButton_13"));
        toolButton_13->setGeometry(QRect(440, 1160, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_13->sizePolicy().hasHeightForWidth());
        toolButton_13->setSizePolicy(sizePolicy);
        toolButton_13->setFont(font);
        toolButton_13->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: #494949;\n"
"	border:none;\n"
"	color:white;\n"
"	position:absolute;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:none;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #494949, stop:1 #FF6B27);\n"
"	color:white;\n"
"}\n"
""));
        Slider = new QSlider(MainScreen);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->setGeometry(QRect(190, 990, 401, 20));
        Slider->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}\n"
"QSlider::groove:horizontal {\n"
"    color:#AAAAAA;\n"
"}"));
        Slider->setValue(99);
        Slider->setSliderPosition(99);
        Slider->setOrientation(Qt::Horizontal);
        doubleSpinBox = new QDoubleSpinBox(MainScreen);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(830, 1020, 141, 61));
        doubleSpinBox->setFont(font);
        doubleSpinBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"color:white;\n"
"border:1px solid #494949;\n"
"background-color:black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"	width:30px;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"	width:30px\n"
"}"));
        doubleSpinBox->setMaximum(360.000000000000000);
        doubleSpinBox->setValue(0.000000000000000);
        F4 = new QToolButton(MainScreen);
        F4->setObjectName(QString::fromUtf8("F4"));
        F4->setGeometry(QRect(320, 1250, 71, 71));
        F4->setFont(font);
        F4->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	background-color:#494949;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        openGLWidget_2 = new QVTKOpenGLWidget(MainScreen);
        openGLWidget_2->setObjectName(QString::fromUtf8("openGLWidget_2"));
        openGLWidget_2->setGeometry(QRect(710, 810, 141, 121));
        toolButton_12 = new QToolButton(MainScreen);
        toolButton_12->setObjectName(QString::fromUtf8("toolButton_12"));
        toolButton_12->setGeometry(QRect(240, 1160, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_12->sizePolicy().hasHeightForWidth());
        toolButton_12->setSizePolicy(sizePolicy);
        toolButton_12->setFont(font);
        toolButton_12->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: #494949;\n"
"	border:none;\n"
"	color:white;\n"
"	position:absolute;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:none;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #FF6B27, stop:1 #494949);\n"
"	color:white;\n"
"}\n"
""));
        toolButton_8 = new QToolButton(MainScreen);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        toolButton_8->setGeometry(QRect(690, 170, 300, 80));
        toolButton_8->setFont(font2);
        toolButton_8->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:#494949;\n"
"	color:white;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	background-color:#FF6B27;\n"
"	color:white;\n"
"}"));
        toolButton_2 = new QToolButton(MainScreen);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(525, 66, 84, 29));
        toolButton_2->setFont(font1);
        toolButton_2->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:black;\n"
"	color:white;\n"
"}"));
        label_8 = new QLabel(MainScreen);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(670, 1110, 131, 31));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));
        F10 = new QToolButton(MainScreen);
        F10->setObjectName(QString::fromUtf8("F10"));
        F10->setGeometry(QRect(900, 1250, 71, 71));
        F10->setFont(font);
        F10->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	background-color:#494949;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        F8 = new QToolButton(MainScreen);
        F8->setObjectName(QString::fromUtf8("F8"));
        F8->setGeometry(QRect(720, 1250, 71, 71));
        F8->setFont(font);
        F8->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	background-color:#494949;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        label = new QLabel(MainScreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(753, 66, 101, 29));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font1);
        toolButton_16 = new QToolButton(MainScreen);
        toolButton_16->setObjectName(QString::fromUtf8("toolButton_16"));
        toolButton_16->setGeometry(QRect(240, 1020, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_16->sizePolicy().hasHeightForWidth());
        toolButton_16->setSizePolicy(sizePolicy);
        toolButton_16->setFont(font);
        toolButton_16->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	border:none;\n"
"	background-color: #494949;\n"
"	color:white;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:none;\n"
"	background-color: #FF6B27;\n"
"	color:white;\n"
"}\n"
""));
        F6 = new QToolButton(MainScreen);
        F6->setObjectName(QString::fromUtf8("F6"));
        F6->setGeometry(QRect(520, 1250, 71, 71));
        F6->setFont(font);
        F6->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	background-color:#494949;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background-color:#FF6B27;\n"
"}"));
        label_9 = new QLabel(MainScreen);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(670, 1180, 131, 31));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));
        doubleSpinBox_3 = new QDoubleSpinBox(MainScreen);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(830, 1170, 141, 61));
        doubleSpinBox_3->setFont(font);
        doubleSpinBox_3->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"color:white;\n"
"border:1px solid #494949;\n"
"background-color:black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"	width:30px;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"	width:30px\n"
"}"));
        doubleSpinBox_3->setMinimum(0.000000000000000);
        doubleSpinBox_3->setMaximum(1000000.000000000000000);
        label_6->raise();
        toolButton_3->raise();
        line->raise();
        F3->raise();
        toolButton_15->raise();
        F1->raise();
        F9->raise();
        CarStl->raise();
        F2->raise();
        label_7->raise();
        label_5->raise();
        doubleSpinBox_2->raise();
        comboBox->raise();
        toolButton_4->raise();
        F7->raise();
        toolButton_11->raise();
        toolButton_18->raise();
        toolButton_17->raise();
        toolButton_19->raise();
        F5->raise();
        toolButton_14->raise();
        toolButton_13->raise();
        Slider->raise();
        doubleSpinBox->raise();
        F4->raise();
        openGLWidget_2->raise();
        toolButton_12->raise();
        toolButton_8->raise();
        toolButton_2->raise();
        label_8->raise();
        F10->raise();
        F8->raise();
        label->raise();
        toolButton_16->raise();
        F6->raise();
        toolButton_5->raise();
        toolButton_6->raise();
        toolButton_7->raise();
        label_9->raise();
        doubleSpinBox_3->raise();

        retranslateUi(MainScreen);

        QMetaObject::connectSlotsByName(MainScreen);
    } // setupUi

    void retranslateUi(QWidget *MainScreen)
    {
        MainScreen->setWindowTitle(QCoreApplication::translate("MainScreen", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("MainScreen", "opacity  \302\267\302\267\302\267\302\267\302\267\302\267\302\267\302\267\302\267\302\267", nullptr));
        toolButton_3->setText(QCoreApplication::translate("MainScreen", "View", nullptr));
        toolButton_6->setText(QCoreApplication::translate("MainScreen", "zoom out", nullptr));
        F3->setText(QCoreApplication::translate("MainScreen", "F3", nullptr));
        toolButton_15->setText(QCoreApplication::translate("MainScreen", "z", nullptr));
        F1->setText(QCoreApplication::translate("MainScreen", "F1", nullptr));
        F9->setText(QCoreApplication::translate("MainScreen", "F9", nullptr));
        F2->setText(QCoreApplication::translate("MainScreen", "F2", nullptr));
        label_7->setText(QCoreApplication::translate("MainScreen", " rotation", nullptr));
        toolButton_7->setText(QCoreApplication::translate("MainScreen", "reset", nullptr));
        label_5->setText(QCoreApplication::translate("MainScreen", "increment", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainScreen", "Supplement", nullptr));

        toolButton_4->setText(QCoreApplication::translate("MainScreen", "File", nullptr));
        F7->setText(QCoreApplication::translate("MainScreen", "F7", nullptr));
        toolButton_11->setText(QCoreApplication::translate("MainScreen", "x", nullptr));
        toolButton_18->setText(QCoreApplication::translate("MainScreen", "rotation", nullptr));
        toolButton_17->setText(QCoreApplication::translate("MainScreen", "boundary", nullptr));
        toolButton_19->setText(QCoreApplication::translate("MainScreen", "translation", nullptr));
        F5->setText(QCoreApplication::translate("MainScreen", "F5", nullptr));
        toolButton_14->setText(QCoreApplication::translate("MainScreen", "y", nullptr));
        toolButton_5->setText(QCoreApplication::translate("MainScreen", "zoom in", nullptr));
        toolButton_13->setText(QCoreApplication::translate("MainScreen", "\342\200\224", nullptr));
        F4->setText(QCoreApplication::translate("MainScreen", "F4", nullptr));
        toolButton_12->setText(QCoreApplication::translate("MainScreen", "\342\224\274", nullptr));
        toolButton_8->setText(QCoreApplication::translate("MainScreen", "Save File", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainScreen", "Tool", nullptr));
        label_8->setText(QCoreApplication::translate("MainScreen", "translation", nullptr));
        F10->setText(QCoreApplication::translate("MainScreen", "F10", nullptr));
        F8->setText(QCoreApplication::translate("MainScreen", "F8", nullptr));
        label->setText(QCoreApplication::translate("MainScreen", "Supplement", nullptr));
        toolButton_16->setText(QCoreApplication::translate("MainScreen", "object", nullptr));
        F6->setText(QCoreApplication::translate("MainScreen", "F6", nullptr));
        label_9->setText(QCoreApplication::translate("MainScreen", "CameraValue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainScreen: public Ui_MainScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCREEN_H
