/********************************************************************************
** Form generated from reading UI file 'stage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGE_H
#define UI_STAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "qvtkopenglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Stage
{
public:
    QGridLayout *gridLayout;
    QVTKOpenGLWidget *CarStl;

    void setupUi(QWidget *Stage)
    {
        if (Stage->objectName().isEmpty())
            Stage->setObjectName(QString::fromUtf8("Stage"));
        Stage->resize(1002, 832);
        Stage->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        gridLayout = new QGridLayout(Stage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        CarStl = new QVTKOpenGLWidget(Stage);
        CarStl->setObjectName(QString::fromUtf8("CarStl"));
        QFont font;
        CarStl->setFont(font);

        gridLayout->addWidget(CarStl, 0, 0, 1, 1);


        retranslateUi(Stage);

        QMetaObject::connectSlotsByName(Stage);
    } // setupUi

    void retranslateUi(QWidget *Stage)
    {
        Stage->setWindowTitle(QCoreApplication::translate("Stage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stage: public Ui_Stage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGE_H
