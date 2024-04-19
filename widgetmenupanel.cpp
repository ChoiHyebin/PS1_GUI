#include "widgetmenupanel.h"
#include "ui_widgetmenupanel.h"
#include "widgetdirectchange.h"
#include <QFileDialog>
#include <QDebug>
#include <fstream>

ofstream io;
ifstream ip;

WidgetMenuPanel::WidgetMenuPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetMenuPanel)
{
    ui->setupUi(this);

    this->setWindowTitle("Top Menu");
    //this->setGeometry(fullScreenSizeX*0.03, fullScreenSizeY*0.1, fullScreenSizeX/4, fullScreenSizeY/6);
    this->setGeometry(0, fullScreenSizeY*0.1, fullScreenSizeX/4, fullScreenSizeY/2.5);

    ui->label->setAlignment(Qt::AlignCenter);
    ui->doubleSpinBox->setAlignment(Qt::AlignCenter);

    settingButton();
}

WidgetMenuPanel::~WidgetMenuPanel()
{
    delete ui;
}

void WidgetMenuPanel::settingButton()
{
    double SX=fullScreenSizeX*aspect_ratioButtonSize;
    double SXD=fullScreenSizeX*aspect_ratioButtonSize*0.8;
    double SY=fullScreenSizeY*ratioButtonSizeY;

    this->ui->toolButton_4->setGeometry(SX*0.2,fullScreenSizeY*0.01,SX/3,SY);
    this->ui->toolButton_3->setGeometry(SX*0.7,fullScreenSizeY*0.01,SX/3,SY);
    this->ui->toolButton_2->setGeometry(SX*1.2,fullScreenSizeY*0.01,SX/2.5,SY);
    this->ui->comboBox->setGeometry(SX*1.7,fullScreenSizeY*0.01,SX/1.5,SY);

    this->ui->line->setGeometry(0,fullScreenSizeY*0.06,fullScreenSizeX,3);

    this->ui->toolButton_5->setGeometry(SX*0.1,fullScreenSizeY*0.11,SX*0.45,SY*0.6);
    this->ui->toolButton_6->setGeometry(SX*0.545,fullScreenSizeY*0.11,SX*0.45,SY*0.6);
    this->ui->label->setGeometry(SX*0.84,fullScreenSizeY*0.08,SX*0.8,SY*0.5);
    this->ui->doubleSpinBox->setGeometry(SX*0.994,fullScreenSizeY*0.11,SX*0.45,SY*0.6);
    this->ui->toolButton_8->setGeometry(SX*1.74,fullScreenSizeY*0.11,SX*0.6,SY*0.6);

    this->ui->toolButton_9->setGeometry(SX*0.1, fullScreenSizeY*0.18, SX*1.12, SY*0.7);
    this->ui->toolButton_10->setGeometry(SX*1.22, fullScreenSizeY*0.18, SX*1.12, SY*0.7);
    this->ui->toolButton_11->setGeometry(SX*0.1, fullScreenSizeY*0.25, SX*1.12, SY*0.7);
    this->ui->toolButton_12->setGeometry(SX*1.22, fullScreenSizeY*0.25, SX*1.12, SY*0.7);
    this->ui->toolButton_13->setGeometry(SX*0.1, fullScreenSizeY*0.32, SX*1.12, SY*0.7);
    this->ui->toolButton_14->setGeometry(SX*1.22, fullScreenSizeY*0.32, SX*1.12, SY*0.7);

}

void WidgetMenuPanel::on_toolButton_4_clicked(){
    QString dir=QFileDialog::getOpenFileName(this, "file", QDir::currentPath());
    if (dir != NULL)
    {
        std::string link=dir.toStdString();
        VR->stl_link = link;
        stage->Load_Stl(VR->stl_link);
        VR->File_State=1;
        stage->renderer->ResetCamera();
        stage->renderWindow->Render();

        if(VR->File_State == 1)
        {
            wcp->Opacity_ColorChange();
        }
//        wcp->Opacity_ColorChange();
    }
}

void WidgetMenuPanel::on_toolButton_5_clicked(){
    stage->renderer->GetActiveCamera()->Zoom(VR->zoom_val);
    stage->mapping();
}
void WidgetMenuPanel::on_toolButton_6_clicked(){
    stage->renderer->GetActiveCamera()->Zoom(1/VR->zoom_val);
    stage->mapping();
}

void WidgetMenuPanel::on_toolButton_8_clicked()
{
    QString selFilter="STL files (*.stl)";
    QString outdir=QFileDialog::getSaveFileName(this,"Save file",QDir::currentPath(),"STL files (*.stl);;All files (*.*)",&selFilter);

    if (outdir!=NULL)
    {
        std::string url=outdir.toStdString();
        stage->stlWriter->SetFileName(url.c_str());
        stage->stlWriter->SetInputConnection(stage->pTransformFilter->GetOutputPort());
        stage->stlWriter->Write();
    }
}

void WidgetMenuPanel::on_toolButton_9_clicked() //direct
{
    subscreen = new SubScreen;
    subscreen->show();


}
void WidgetMenuPanel::on_toolButton_10_clicked() //current
{
    WidgetDirectChange *wdc = new WidgetDirectChange;
    wdc->stage = stage;
    wdc->state=2;
    wdc->show();

}
void WidgetMenuPanel::on_toolButton_11_clicked()
{
    stage->widgetcurrentposition->show();

}
void WidgetMenuPanel::on_toolButton_13_clicked() //function
{
    funk = new FunctionKey;
    funk ->stage = stage;
    funk->show();

}
void WidgetMenuPanel::on_toolButton_12_clicked()
{
    io.open("C:/Users/KIST/Downloads/data.txt");

    io<<"Object Rotation x : "<<stage->x<<"\n";
    io<<"Object Rotation y : "<<stage->y<<"\n";
    io<<"Object Rotation z : "<<stage->z<<"\n";
    io<<"Boundary Rotation x : "<<stage->cubeX<<"\n";
    io<<"Boundary Rotation y : "<<stage->cubeY<<"\n";
    io<<"Boundary Rotation z : "<<stage->cubeZ<<"\n";
    io<<"Object Translation x : "<<stage->tx<<"\n";
    io<<"Object Translation y : "<<stage->ty<<"\n";
    io<<"Object Translation z : "<<stage->tz<<"\n";
    io<<"Boundary Translation x : "<<stage->CubeTransX<<"\n";
    io<<"Boundary Translation y : "<<stage->CubeTransY<<"\n";
    io<<"Boundary Translation z : "<<stage->CubeTransZ<<"\n";
    io<<"Object Opacity : "<<stage->vl<<"\n";
    io<<"Boudary Opacity : "<<stage->vl2<<"\n";
    io<<"Object Scale x : "<<stage->scaleX<<"\n";
    io<<"Object Scale y : "<<stage->scaleY<<"\n";
    io<<"Object Scale z : "<<stage->scaleZ<<"\n";
    io<<"Boundary Size x : "<<stage->xlength<<"\n";
    io<<"Boundary Size y : "<<stage->ylength<<"\n";
    io<<"Boundary Size z : "<<stage->zlength<<"\n";

    io.close();
}

void WidgetMenuPanel::on_doubleSpinBox_valueChanged(double arg1)
{
    VR->zoom_val = arg1;
}
