/********************************************************************************
** Form generated from reading UI file 'sizesetting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIZESETTING_H
#define UI_SIZESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_SizeSetting
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;

    void setupUi(QDialog *SizeSetting)
    {
        if (SizeSetting->objectName().isEmpty())
            SizeSetting->setObjectName(QString::fromUtf8("SizeSetting"));
        SizeSetting->resize(679, 214);
        SizeSetting->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        label = new QLabel(SizeSetting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 161, 16));
        label_2 = new QLabel(SizeSetting);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 20, 58, 16));
        label_3 = new QLabel(SizeSetting);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 58, 16));
        label_4 = new QLabel(SizeSetting);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 60, 58, 16));
        label_5 = new QLabel(SizeSetting);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(320, 130, 58, 16));
        label_6 = new QLabel(SizeSetting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(320, 60, 58, 16));
        horizontalSlider = new QSlider(SizeSetting);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(70, 60, 160, 25));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(10);
        horizontalSlider->setValue(10);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(SizeSetting);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(70, 130, 160, 25));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(10);
        horizontalSlider_2->setValue(10);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(SizeSetting);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(370, 60, 160, 25));
        horizontalSlider_3->setMinimum(1);
        horizontalSlider_3->setMaximum(10);
        horizontalSlider_3->setValue(10);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_4 = new QSlider(SizeSetting);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(370, 130, 160, 25));
        horizontalSlider_4->setMinimum(1);
        horizontalSlider_4->setMaximum(10);
        horizontalSlider_4->setValue(10);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        retranslateUi(SizeSetting);

        QMetaObject::connectSlotsByName(SizeSetting);
    } // setupUi

    void retranslateUi(QDialog *SizeSetting)
    {
        SizeSetting->setWindowTitle(QCoreApplication::translate("SizeSetting", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SizeSetting", "Button", nullptr));
        label_2->setText(QCoreApplication::translate("SizeSetting", "Window", nullptr));
        label_3->setText(QCoreApplication::translate("SizeSetting", "Ratio Y", nullptr));
        label_4->setText(QCoreApplication::translate("SizeSetting", "Ratio X", nullptr));
        label_5->setText(QCoreApplication::translate("SizeSetting", "Ratio Y", nullptr));
        label_6->setText(QCoreApplication::translate("SizeSetting", "Ratio X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SizeSetting: public Ui_SizeSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIZESETTING_H
