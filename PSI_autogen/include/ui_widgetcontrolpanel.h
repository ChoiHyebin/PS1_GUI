/********************************************************************************
** Form generated from reading UI file 'widgetcontrolpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETCONTROLPANEL_H
#define UI_WIDGETCONTROLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetControlPanel
{
public:
    QGridLayout *gridLayout;
    QLabel *label_7;
    QToolButton *toolButton_13;
    QDoubleSpinBox *doubleSpinBox_2;
    QToolButton *toolButton_12;
    QToolButton *toolButton_16;
    QToolButton *toolButton_18;
    QLabel *label_6;
    QToolButton *toolButton_14;
    QLabel *label_9;
    QSlider *Slider_2;
    QToolButton *toolButton_19;
    QLabel *label_5;
    QToolButton *toolButton_17;
    QLabel *label;
    QToolButton *toolButton_15;
    QSlider *Slider;
    QDoubleSpinBox *doubleSpinBox;
    QToolButton *toolButton_11;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_3;

    void setupUi(QWidget *WidgetControlPanel)
    {
        if (WidgetControlPanel->objectName().isEmpty())
            WidgetControlPanel->setObjectName(QString::fromUtf8("WidgetControlPanel"));
        WidgetControlPanel->resize(971, 393);
        WidgetControlPanel->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font-family:\"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        gridLayout = new QGridLayout(WidgetControlPanel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(WidgetControlPanel);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font.setPointSize(14);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));

        gridLayout->addWidget(label_7, 2, 3, 1, 1);

        toolButton_13 = new QToolButton(WidgetControlPanel);
        toolButton_13->setObjectName(QString::fromUtf8("toolButton_13"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
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

        gridLayout->addWidget(toolButton_13, 4, 2, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(WidgetControlPanel);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
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

        gridLayout->addWidget(doubleSpinBox_2, 3, 4, 1, 1);

        toolButton_12 = new QToolButton(WidgetControlPanel);
        toolButton_12->setObjectName(QString::fromUtf8("toolButton_12"));
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

        gridLayout->addWidget(toolButton_12, 4, 1, 1, 1);

        toolButton_16 = new QToolButton(WidgetControlPanel);
        toolButton_16->setObjectName(QString::fromUtf8("toolButton_16"));
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

        gridLayout->addWidget(toolButton_16, 2, 1, 1, 1);

        toolButton_18 = new QToolButton(WidgetControlPanel);
        toolButton_18->setObjectName(QString::fromUtf8("toolButton_18"));
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

        gridLayout->addWidget(toolButton_18, 3, 1, 1, 1);

        label_6 = new QLabel(WidgetControlPanel);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font1.setPointSize(13);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        toolButton_14 = new QToolButton(WidgetControlPanel);
        toolButton_14->setObjectName(QString::fromUtf8("toolButton_14"));
        sizePolicy.setHeightForWidth(toolButton_14->sizePolicy().hasHeightForWidth());
        toolButton_14->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font2.setPointSize(16);
        toolButton_14->setFont(font2);
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

        gridLayout->addWidget(toolButton_14, 3, 0, 1, 1);

        label_9 = new QLabel(WidgetControlPanel);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        Slider_2 = new QSlider(WidgetControlPanel);
        Slider_2->setObjectName(QString::fromUtf8("Slider_2"));
        Slider_2->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}\n"
"QSlider::groove:horizontal {\n"
"    color:#AAAAAA;\n"
"}"));
        Slider_2->setSliderPosition(99);
        Slider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(Slider_2, 1, 1, 1, 2);

        toolButton_19 = new QToolButton(WidgetControlPanel);
        toolButton_19->setObjectName(QString::fromUtf8("toolButton_19"));
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

        gridLayout->addWidget(toolButton_19, 3, 2, 1, 1);

        label_5 = new QLabel(WidgetControlPanel);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));

        gridLayout->addWidget(label_5, 0, 3, 2, 2);

        toolButton_17 = new QToolButton(WidgetControlPanel);
        toolButton_17->setObjectName(QString::fromUtf8("toolButton_17"));
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

        gridLayout->addWidget(toolButton_17, 2, 2, 1, 1);

        label = new QLabel(WidgetControlPanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));

        gridLayout->addWidget(label, 4, 3, 1, 1);

        toolButton_15 = new QToolButton(WidgetControlPanel);
        toolButton_15->setObjectName(QString::fromUtf8("toolButton_15"));
        sizePolicy.setHeightForWidth(toolButton_15->sizePolicy().hasHeightForWidth());
        toolButton_15->setSizePolicy(sizePolicy);
        toolButton_15->setFont(font2);
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

        gridLayout->addWidget(toolButton_15, 4, 0, 1, 1);

        Slider = new QSlider(WidgetControlPanel);
        Slider->setObjectName(QString::fromUtf8("Slider"));
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
        Slider->setSliderPosition(99);
        Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(Slider, 0, 1, 1, 2);

        doubleSpinBox = new QDoubleSpinBox(WidgetControlPanel);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
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

        gridLayout->addWidget(doubleSpinBox, 2, 4, 1, 1);

        toolButton_11 = new QToolButton(WidgetControlPanel);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));
        sizePolicy.setHeightForWidth(toolButton_11->sizePolicy().hasHeightForWidth());
        toolButton_11->setSizePolicy(sizePolicy);
        toolButton_11->setFont(font2);
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

        gridLayout->addWidget(toolButton_11, 2, 0, 1, 1);

        label_8 = new QLabel(WidgetControlPanel);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));

        gridLayout->addWidget(label_8, 3, 3, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(WidgetControlPanel);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
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

        gridLayout->addWidget(doubleSpinBox_3, 4, 4, 1, 1);


        retranslateUi(WidgetControlPanel);

        QMetaObject::connectSlotsByName(WidgetControlPanel);
    } // setupUi

    void retranslateUi(QWidget *WidgetControlPanel)
    {
        WidgetControlPanel->setWindowTitle(QCoreApplication::translate("WidgetControlPanel", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("WidgetControlPanel", " rotation", nullptr));
        toolButton_13->setText(QCoreApplication::translate("WidgetControlPanel", "\342\200\224", nullptr));
        toolButton_12->setText(QCoreApplication::translate("WidgetControlPanel", "\342\224\274", nullptr));
        toolButton_16->setText(QCoreApplication::translate("WidgetControlPanel", "object", nullptr));
        toolButton_18->setText(QCoreApplication::translate("WidgetControlPanel", "rotation", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetControlPanel", "Object Opacity", nullptr));
        toolButton_14->setText(QCoreApplication::translate("WidgetControlPanel", "y", nullptr));
        label_9->setText(QCoreApplication::translate("WidgetControlPanel", "Boundary Opacity", nullptr));
        toolButton_19->setText(QCoreApplication::translate("WidgetControlPanel", "translation", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetControlPanel", "increment", nullptr));
        toolButton_17->setText(QCoreApplication::translate("WidgetControlPanel", "boundary", nullptr));
        label->setText(QCoreApplication::translate("WidgetControlPanel", "Camera", nullptr));
        toolButton_15->setText(QCoreApplication::translate("WidgetControlPanel", "z", nullptr));
        toolButton_11->setText(QCoreApplication::translate("WidgetControlPanel", "x", nullptr));
        label_8->setText(QCoreApplication::translate("WidgetControlPanel", "translation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetControlPanel: public Ui_WidgetControlPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETCONTROLPANEL_H
