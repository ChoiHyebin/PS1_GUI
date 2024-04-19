/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include "qvtkopenglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QAction *action3d;
    QToolButton *toolButton_15;
    QToolButton *toolButton_16;
    QLabel *label_7;
    QVTKOpenGLWidget *openGLWidget_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox;
    QToolButton *toolButton_13;
    QVTKOpenGLWidget *CarStl;
    QToolButton *toolButton_11;
    QToolButton *toolButton_8;
    QToolButton *toolButton_7;
    QLabel *label_8;
    QToolButton *toolButton_14;
    QToolButton *toolButton_6;
    QLabel *label_5;
    QToolButton *toolButton_5;
    QToolButton *toolButton_17;
    QToolButton *toolButton_12;
    QSlider *Slider;
    QLabel *label_6;
    QToolButton *toolButton_18;
    QToolButton *toolButton_19;
    QToolButton *toolButton_4;
    QToolButton *toolButton;
    QToolButton *toolButton_3;
    QToolButton *toolButton_2;
    QFrame *line;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1002, 1296);
        QFont font;
        font.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        Dialog->setFont(font);
        Dialog->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        action3d = new QAction(Dialog);
        action3d->setObjectName(QString::fromUtf8("action3d"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/3d.png"), QSize(), QIcon::Normal, QIcon::Off);
        action3d->setIcon(icon);
        toolButton_15 = new QToolButton(Dialog);
        toolButton_15->setObjectName(QString::fromUtf8("toolButton_15"));
        toolButton_15->setGeometry(QRect(40, 1150, 201, 71));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_15->sizePolicy().hasHeightForWidth());
        toolButton_15->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font1.setPointSize(14);
        toolButton_15->setFont(font1);
        toolButton_15->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: #494949;\n"
"	color:white;\n"
"	position:absolute;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:1px solid #494949;\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 #FF6B27, stop:1 #494949);\n"
"	color:white;\n"
"}\n"
""));
        toolButton_16 = new QToolButton(Dialog);
        toolButton_16->setObjectName(QString::fromUtf8("toolButton_16"));
        toolButton_16->setGeometry(QRect(240, 1010, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_16->sizePolicy().hasHeightForWidth());
        toolButton_16->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font2.setPointSize(12);
        toolButton_16->setFont(font2);
        toolButton_16->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: #494949;\n"
"	color:white;\n"
"	position:absolute;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:1px solid qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #FF6B27, stop:1 #494949);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #FF6B27, stop:1 #494949);\n"
"	color:white;\n"
"}\n"
""));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(690, 1090, 111, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font3.setPointSize(11);
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));
        openGLWidget_2 = new QVTKOpenGLWidget(Dialog);
        openGLWidget_2->setObjectName(QString::fromUtf8("openGLWidget_2"));
        openGLWidget_2->setGeometry(QRect(480, 950, 141, 121));
        doubleSpinBox_2 = new QDoubleSpinBox(Dialog);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(840, 1150, 130, 61));
        doubleSpinBox_2->setMinimum(0.000000000000000);
        doubleSpinBox_2->setMaximum(1000000.000000000000000);
        doubleSpinBox = new QDoubleSpinBox(Dialog);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(690, 1150, 130, 61));
        doubleSpinBox->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        doubleSpinBox->setMaximum(360.000000000000000);
        doubleSpinBox->setValue(0.000000000000000);
        toolButton_13 = new QToolButton(Dialog);
        toolButton_13->setObjectName(QString::fromUtf8("toolButton_13"));
        toolButton_13->setGeometry(QRect(440, 1150, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_13->sizePolicy().hasHeightForWidth());
        toolButton_13->setSizePolicy(sizePolicy);
        toolButton_13->setFont(font1);
        toolButton_13->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: #494949;\n"
"	color:white;\n"
"	position:absolute;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:1px solid qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #494949, stop:1 #FF6B27);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #494949, stop:1 #FF6B27);\n"
"	color:white;\n"
"}\n"
""));
        CarStl = new QVTKOpenGLWidget(Dialog);
        CarStl->setObjectName(QString::fromUtf8("CarStl"));
        CarStl->setGeometry(QRect(20, 250, 211, 181));
        CarStl->setFont(font);
        toolButton_11 = new QToolButton(Dialog);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));
        toolButton_11->setGeometry(QRect(40, 1010, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_11->sizePolicy().hasHeightForWidth());
        toolButton_11->setSizePolicy(sizePolicy);
        toolButton_11->setFont(font1);
        toolButton_11->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: #494949;\n"
"	color:white;\n"
"	position:absolute;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:1px solid #494949;\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 #FF6B27, stop:1 #494949);\n"
"	color:white;\n"
"}\n"
""));
        toolButton_8 = new QToolButton(Dialog);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        toolButton_8->setGeometry(QRect(690, 160, 300, 80));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font4.setPointSize(14);
        font4.setBold(false);
        toolButton_8->setFont(font4);
        toolButton_8->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:#494949;\n"
"	color:white;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	background-color:#FF6B27;\n"
"	color:white;\n"
"}"));
        toolButton_7 = new QToolButton(Dialog);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        toolButton_7->setGeometry(QRect(420, 160, 201, 80));
        toolButton_7->setFont(font4);
        toolButton_7->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:#494949;\n"
"	color:white;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	background-color:#FF6B27;\n"
"	color:white;\n"
"}"));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(840, 1090, 111, 31));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));
        toolButton_14 = new QToolButton(Dialog);
        toolButton_14->setObjectName(QString::fromUtf8("toolButton_14"));
        toolButton_14->setGeometry(QRect(40, 1080, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_14->sizePolicy().hasHeightForWidth());
        toolButton_14->setSizePolicy(sizePolicy);
        toolButton_14->setFont(font1);
        toolButton_14->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: #494949;\n"
"	color:white;\n"
"	position:absolute;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:1px solid #494949;\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 #FF6B27, stop:1 #494949);\n"
"	color:white;\n"
"}\n"
""));
        toolButton_6 = new QToolButton(Dialog);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        toolButton_6->setGeometry(QRect(220, 160, 201, 80));
        toolButton_6->setFont(font4);
        toolButton_6->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:#494949;\n"
"	color:white;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	background-color:#FF6B27;\n"
"	color:white;\n"
"}"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(780, 1030, 111, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));
        toolButton_5 = new QToolButton(Dialog);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        toolButton_5->setGeometry(QRect(20, 160, 201, 80));
        toolButton_5->setFont(font1);
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
        toolButton_17 = new QToolButton(Dialog);
        toolButton_17->setObjectName(QString::fromUtf8("toolButton_17"));
        toolButton_17->setGeometry(QRect(440, 1010, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_17->sizePolicy().hasHeightForWidth());
        toolButton_17->setSizePolicy(sizePolicy);
        toolButton_17->setFont(font2);
        toolButton_17->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: #494949;\n"
"	color:white;\n"
"	position:absolute;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:1px solid qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #494949, stop:1 #FF6B27);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #494949, stop:1 #FF6B27);\n"
"	color:white;\n"
"}\n"
""));
        toolButton_12 = new QToolButton(Dialog);
        toolButton_12->setObjectName(QString::fromUtf8("toolButton_12"));
        toolButton_12->setGeometry(QRect(240, 1150, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_12->sizePolicy().hasHeightForWidth());
        toolButton_12->setSizePolicy(sizePolicy);
        toolButton_12->setFont(font1);
        toolButton_12->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: #494949;\n"
"	color:white;\n"
"	position:absolute;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:1px solid qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #FF6B27, stop:1 #494949);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #FF6B27, stop:1 #494949);\n"
"	color:white;\n"
"}\n"
""));
        Slider = new QSlider(Dialog);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->setGeometry(QRect(240, 1250, 401, 20));
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
        Slider->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 1240, 101, 31));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));
        toolButton_18 = new QToolButton(Dialog);
        toolButton_18->setObjectName(QString::fromUtf8("toolButton_18"));
        toolButton_18->setGeometry(QRect(240, 1080, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_18->sizePolicy().hasHeightForWidth());
        toolButton_18->setSizePolicy(sizePolicy);
        toolButton_18->setFont(font2);
        toolButton_18->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: #494949;\n"
"	color:white;\n"
"	position:absolute;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:1px solid qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #FF6B27, stop:1 #494949);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #FF6B27, stop:1 #494949);\n"
"	color:white;\n"
"}\n"
""));
        toolButton_19 = new QToolButton(Dialog);
        toolButton_19->setObjectName(QString::fromUtf8("toolButton_19"));
        toolButton_19->setGeometry(QRect(440, 1080, 201, 71));
        sizePolicy.setHeightForWidth(toolButton_19->sizePolicy().hasHeightForWidth());
        toolButton_19->setSizePolicy(sizePolicy);
        toolButton_19->setFont(font2);
        toolButton_19->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: #494949;\n"
"	color:white;\n"
"	position:absolute;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"	border:1px solid qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #494949, stop:1 #FF6B27);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #494949, stop:1 #FF6B27);\n"
"	color:white;\n"
"}\n"
""));
        toolButton_4 = new QToolButton(Dialog);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setGeometry(QRect(137, 56, 45, 29));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font5.setPointSize(16);
        font5.setBold(true);
        toolButton_4->setFont(font5);
        toolButton_4->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:black;\n"
"	color:white;\n"
"}"));
        toolButton = new QToolButton(Dialog);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(753, 56, 110, 29));
        toolButton->setFont(font5);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:black;\n"
"	color:white;\n"
"}"));
        toolButton_3 = new QToolButton(Dialog);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(326, 56, 55, 29));
        toolButton_3->setFont(font5);
        toolButton_3->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:black;\n"
"	color:white;\n"
"}"));
        toolButton_2 = new QToolButton(Dialog);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(525, 56, 84, 29));
        toolButton_2->setFont(font5);
        toolButton_2->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color:black;\n"
"	color:white;\n"
"}"));
        line = new QFrame(Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(1, 146, 999, 16));
        line->setStyleSheet(QString::fromUtf8("border:1px solid #FF6B27;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_7->raise();
        doubleSpinBox_2->raise();
        doubleSpinBox->raise();
        CarStl->raise();
        toolButton_8->raise();
        toolButton_7->raise();
        label_8->raise();
        toolButton_6->raise();
        label_5->raise();
        toolButton_5->raise();
        Slider->raise();
        label_6->raise();
        openGLWidget_2->raise();
        toolButton_11->raise();
        toolButton_16->raise();
        toolButton_17->raise();
        toolButton_14->raise();
        toolButton_18->raise();
        toolButton_19->raise();
        toolButton_15->raise();
        toolButton_12->raise();
        toolButton_13->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        action3d->setText(QCoreApplication::translate("Dialog", "3d", nullptr));
        toolButton_15->setText(QCoreApplication::translate("Dialog", "z", nullptr));
        toolButton_16->setText(QCoreApplication::translate("Dialog", "object", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", " rotation", nullptr));
        toolButton_13->setText(QCoreApplication::translate("Dialog", "-", nullptr));
        toolButton_11->setText(QCoreApplication::translate("Dialog", "x", nullptr));
        toolButton_8->setText(QCoreApplication::translate("Dialog", "Save File", nullptr));
        toolButton_7->setText(QCoreApplication::translate("Dialog", "Reset", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "translation", nullptr));
        toolButton_14->setText(QCoreApplication::translate("Dialog", "y", nullptr));
        toolButton_6->setText(QCoreApplication::translate("Dialog", "zoom out", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "increment", nullptr));
        toolButton_5->setText(QCoreApplication::translate("Dialog", "zoom in", nullptr));
        toolButton_17->setText(QCoreApplication::translate("Dialog", "boundary", nullptr));
        toolButton_12->setText(QCoreApplication::translate("Dialog", "+", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "opacity", nullptr));
        toolButton_18->setText(QCoreApplication::translate("Dialog", "rotation", nullptr));
        toolButton_19->setText(QCoreApplication::translate("Dialog", "translation", nullptr));
        toolButton_4->setText(QCoreApplication::translate("Dialog", "File", nullptr));
        toolButton->setText(QCoreApplication::translate("Dialog", "Supplement", nullptr));
        toolButton_3->setText(QCoreApplication::translate("Dialog", "Save", nullptr));
        toolButton_2->setText(QCoreApplication::translate("Dialog", "Function", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
