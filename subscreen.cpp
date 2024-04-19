#include "subscreen.h"
#include "ui_subscreen.h"

SubScreen::SubScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubScreen)
{
    ui->setupUi(this);

    this->setWindowTitle("Subsidiary Menu");
this->setGeometry(wid*0.75,hei*0.1,wid*0.25,hei*0.15);}

SubScreen::~SubScreen()
{
    delete ui;
}

void SubScreen::Up_btn_fn(int flag){
    ui->pushButton->setStyleSheet("QToolButton{background-color:black; color:#FFFFFF;}");
    ui->pushButton_2->setStyleSheet("QToolButton{background-color:black; color:#FFFFFF;}");
    ui->pushButton_3->setStyleSheet("QToolButton{background-color:black; color:#FFFFFF;}");
    switch(flag){
        case 1:
            ui->pushButton->setStyleSheet("QToolButton{background-color:black; color:#FF6B27;}");
            break;
    case 2:
        ui->pushButton_2->setStyleSheet("QToolButton{background-color:black; color:#FF6B27;}");
        break;
        case 3:
            ui->pushButton_3->setStyleSheet("QToolButton{background-color:black; color:#FF6B27;}");
            break;
    }
}

void SubScreen::on_pushButton_clicked()
{
    widgetsection = new WidgetSection;
    widgetsection->show();

    widgetsection->SD("/Users/kist/Documents/PSI/STL/tello modeling.stl");
}
