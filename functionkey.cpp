#include "functionkey.h"
#include "ui_functionkey.h"

FunctionKey::FunctionKey(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FunctionKey)
{
    ui->setupUi(this);
    this->setWindowTitle("Funtion Key");
    this->setGeometry(0, fullScreenSizeY*0.52, fullScreenSizeX/4, fullScreenSizeY/4.5);

    double SX=fullScreenSizeX*aspect_ratioButtonSize;
    double SXD=fullScreenSizeX*aspect_ratioButtonSize*0.8;
    double SY=fullScreenSizeY*ratioButtonSizeY;

    this->ui->pushButton->setGeometry(SX*0.1, fullScreenSizeY*0.04, SX/3.5, SY);
    this->ui->pushButton_2->setGeometry(SX*0.6, fullScreenSizeY*0.04, SX/3.5, SY);
    this->ui->pushButton_3->setGeometry(SX*1.1, fullScreenSizeY*0.04, SX/3.5, SY);
    this->ui->pushButton_4->setGeometry(SX*1.6, fullScreenSizeY*0.04, SX/3.5, SY);
    this->ui->pushButton_5->setGeometry(SX*2.1, fullScreenSizeY*0.04, SX/3.5, SY);
    this->ui->pushButton_6->setGeometry(SX*0.1, fullScreenSizeY*0.13, SX/3.5, SY);
    this->ui->pushButton_7->setGeometry(SX*0.6, fullScreenSizeY*0.13, SX/3.5, SY);
    this->ui->pushButton_8->setGeometry(SX*1.1, fullScreenSizeY*0.13, SX/3.5, SY);
    this->ui->pushButton_9->setGeometry(SX*1.6, fullScreenSizeY*0.13, SX/3.5, SY);
    this->ui->pushButton_10->setGeometry(SX*2.1, fullScreenSizeY*0.13, SX/3.5, SY);
}

FunctionKey::~FunctionKey()
{
    delete ui;
}

void FunctionKey::on_pushButton_clicked()
{
    Button_Color(1);
    stage->camera->SetFocalPoint(900, 0, 0);
    stage->mapping();
    stage->renderWindow->Render();
}
void FunctionKey::on_pushButton_2_clicked()
{
    Button_Color(2);
    stage->camera->SetFocalPoint(0.00000000000000000000000000001, 900, 0);
    stage->mapping();
    stage->renderWindow->Render();
}
void FunctionKey::on_pushButton_3_clicked()
{
    Button_Color(3);
    stage->camera->SetFocalPoint(0, 0, 900);
    stage->mapping();
    stage->renderWindow->Render();
}

void FunctionKey::on_pushButton_4_clicked()
{
    Button_Color(4);
}


void FunctionKey::on_pushButton_5_clicked()
{
    Button_Color(5);
    stage->camera->SetPosition(20,20,20);
    stage->renderWindow->Render();
}


void FunctionKey::on_pushButton_6_clicked()
{
    Button_Color(6);
    stage->camera->SetPosition(1,1,1);    
    qDebug() << "Camera Position : (1, 1, 1)";
    stage->renderWindow->Render();
}


void FunctionKey::on_pushButton_7_clicked()
{
    Button_Color(7);
    stage->camera->SetPosition(2,2,2);
    qDebug() << "Camera Position : (2, 2, 2)";
    stage->renderWindow->Render();
}


void FunctionKey::on_pushButton_8_clicked()
{
    Button_Color(8);
    stage->camera->SetPosition(3,3,3);
    qDebug() << "Camera Position : (3, 3, 3)";
    stage->renderWindow->Render();
}


void FunctionKey::on_pushButton_9_clicked()
{
    Button_Color(9);
    stage->camera->SetPosition(4, 4, 4);
    qDebug() << "Camera Position : (4, 4, 4)";
    stage->renderWindow->Render();
}


void FunctionKey::on_pushButton_10_clicked()
{
    Button_Color(10);
    stage->camera->SetPosition(10,10,10);
    stage->camera->SetFocalPoint(0, 0, 10);
    qDebug() << "Camera Position : (10, 10, 10)";
    stage->renderWindow->Render();
}

void FunctionKey::Button_Color(int flag)
{
    ui->pushButton->setStyleSheet("QPushButton{background-color:#494949;}"
                                  "QPushButton:hover{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
    ui->pushButton_2->setStyleSheet("QPushButton{background-color:#494949;}"
                                  "QPushButton:hover{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
    ui->pushButton_3->setStyleSheet("QPushButton{background-color:#494949;}"
                                  "QPushButton:hover{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
    ui->pushButton_4->setStyleSheet("QPushButton{background-color:#494949;}"
                                  "QPushButton:hover{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
    ui->pushButton_5->setStyleSheet("QPushButton{background-color:#494949;}"
                                  "QPushButton:hover{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
    ui->pushButton_6->setStyleSheet("QPushButton{background-color:#494949;}"
                                  "QPushButton:hover{background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 129, 255), stop:1 rgba(255, 109, 96, 223)); border:none; color:black;}");
    ui->pushButton_7->setStyleSheet("QPushButton{background-color:#494949;}"
                                  "QPushButton:hover{background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 129, 255), stop:1 rgba(255, 109, 96, 223)); border:none; color:black;}");
    ui->pushButton_8->setStyleSheet("QPushButton{background-color:#494949;}"
                                  "QPushButton:hover{background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 129, 255), stop:1 rgba(255, 109, 96, 223)); border:none; color:black;}");
    ui->pushButton_9->setStyleSheet("QPushButton{background-color:#494949;}"
                                  "QPushButton:hover{background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 129, 255), stop:1 rgba(255, 109, 96, 223)); border:none; color:black;}");
    ui->pushButton_10->setStyleSheet("QPushButton{background-color:#494949;}"
                                  "QPushButton:hover{background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 129, 255), stop:1 rgba(255, 109, 96, 223)); border:none; color:black;}");

    switch(flag)
    {
    case 1:
        ui->pushButton->setStyleSheet("QPushButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
        break;
    case 2:
        ui->pushButton_2->setStyleSheet("QPushButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
    break;
    case 3:
        ui->pushButton_3->setStyleSheet("QPushButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
    break;
    case 4:
        ui->pushButton_4->setStyleSheet("QPushButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
    break;
    case 5:
        ui->pushButton_5->setStyleSheet("QPushButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
    break;
    case 6:
        ui->pushButton_6->setStyleSheet("QPushButton{background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 129, 255), stop:1 rgba(255, 109, 96, 223)); border:none; color:black;}");
    break;
    case 7:
        ui->pushButton_7->setStyleSheet("QPushButton{background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 129, 255), stop:1 rgba(255, 109, 96, 223)); border:none; color:black;}");
    break;
    case 8:
        ui->pushButton_8->setStyleSheet("QPushButton{background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 129, 255), stop:1 rgba(255, 109, 96, 223)); border:none; color:black;}");
    break;
    case 9:
        ui->pushButton_9->setStyleSheet("QPushButton{background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 129, 255), stop:1 rgba(255, 109, 96, 223)); border:none; color:black;}");
    break;
    case 10:
        ui->pushButton_10->setStyleSheet("QPushButton{background-color:qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 129, 255), stop:1 rgba(255, 109, 96, 223)); border:none; color:black;}");
    break;
    }
}
