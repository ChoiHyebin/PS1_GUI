#include "widgetdirectchange.h"
#include "ui_widgetdirectchange.h"

WidgetDirectChange::WidgetDirectChange(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetDirectChange)
{
    ui->setupUi(this);
    this->setWindowTitle("Direct Change");
    this->setGeometry(wid*0.75,hei*0.27,wid*0.25,hei*0.28);

    ui->label->setAlignment(Qt::AlignCenter);
    ui->label_2->setAlignment(Qt::AlignRight);
    ui->label_3->setAlignment(Qt::AlignRight);
    ui->label_4->setAlignment(Qt::AlignRight);
    ui->label_5->setAlignment(Qt::AlignRight);
    ui->label_6->setAlignment(Qt::AlignCenter);
    ui->label_7->setAlignment(Qt::AlignCenter);
    ui->label_8->setAlignment(Qt::AlignCenter);
    ui->label_9->setAlignment(Qt::AlignCenter);
    ui->label_10->setAlignment(Qt::AlignCenter);
    ui->label_11->setAlignment(Qt::AlignCenter);
    ui->label_12->setAlignment(Qt::AlignRight);
    ui->label_13->setAlignment(Qt::AlignRight);

    ui->lineEdit->setAlignment(Qt::AlignCenter);
    ui->lineEdit_2->setAlignment(Qt::AlignCenter);
    ui->lineEdit_3->setAlignment(Qt::AlignCenter);
    ui->lineEdit_4->setAlignment(Qt::AlignCenter);
    ui->lineEdit_5->setAlignment(Qt::AlignCenter);
    ui->lineEdit_6->setAlignment(Qt::AlignCenter);
    ui->lineEdit_7->setAlignment(Qt::AlignCenter);
    ui->lineEdit_8->setAlignment(Qt::AlignCenter);
    ui->lineEdit_9->setAlignment(Qt::AlignCenter);
    ui->lineEdit_10->setAlignment(Qt::AlignCenter);
    ui->lineEdit_11->setAlignment(Qt::AlignCenter);
    ui->lineEdit_12->setAlignment(Qt::AlignCenter);
    ui->lineEdit_13->setAlignment(Qt::AlignCenter);
    ui->lineEdit_14->setAlignment(Qt::AlignCenter);
    ui->lineEdit_15->setAlignment(Qt::AlignCenter);
    ui->lineEdit_16->setAlignment(Qt::AlignCenter);
    ui->lineEdit_17->setAlignment(Qt::AlignCenter);
    ui->lineEdit_18->setAlignment(Qt::AlignCenter);
}

WidgetDirectChange::~WidgetDirectChange()
{
    delete ui;
}

void WidgetDirectChange::on_lineEdit_textEdited(const QString &arg1)
{
    tx = arg1.toDouble();
}
void WidgetDirectChange::on_lineEdit_2_textEdited(const QString &arg1)
{
    ty = arg1.toDouble();
}
void WidgetDirectChange::on_lineEdit_3_textEdited(const QString &arg1)
{
    tz = arg1.toDouble();
}
void WidgetDirectChange::on_lineEdit_4_textEdited(const QString &arg1)
{
    rx = arg1.toDouble();
}
void WidgetDirectChange::on_lineEdit_5_textEdited(const QString &arg1)
{
    ry = arg1.toDouble();
}

void WidgetDirectChange::on_lineEdit_6_textEdited(const QString &arg1)
{
    rz = arg1.toDouble();
}

void WidgetDirectChange::on_lineEdit_7_textEdited(const QString &arg1)
{
    sx=arg1.toDouble();
}

void WidgetDirectChange::on_lineEdit_8_textEdited(const QString &arg1)
{
    sy=arg1.toDouble();}

void WidgetDirectChange::on_lineEdit_9_textEdited(const QString &arg1)
{
    sz=arg1.toDouble();
}

void WidgetDirectChange::on_lineEdit_10_textEdited(const QString &arg1)
{
    cx=arg1.toDouble();
}

void WidgetDirectChange::on_lineEdit_11_textEdited(const QString &arg1)
{
    cy=arg1.toDouble();
}

void WidgetDirectChange::on_lineEdit_12_textEdited(const QString &arg1)
{
    cz=arg1.toDouble();
}

void WidgetDirectChange::on_lineEdit_13_textEdited(const QString &arg1)
{
    po1=arg1.toInt();
}


void WidgetDirectChange::on_lineEdit_14_textEdited(const QString &arg1)
{
    po2=arg1.toInt();
}


void WidgetDirectChange::on_lineEdit_15_textEdited(const QString &arg1)
{
   po3=arg1.toInt();
}


void WidgetDirectChange::on_lineEdit_16_textEdited(const QString &arg1)
{
    fo1=arg1.toInt();
}


void WidgetDirectChange::on_lineEdit_17_textEdited(const QString &arg1)
{
    fo2=arg1.toInt();
}


void WidgetDirectChange::on_lineEdit_18_textEdited(const QString &arg1)
{
    fo3=arg1.toInt();
}


void WidgetDirectChange::on_pushButton_clicked(){
        if(state==1)mainscreen->Object_Trans(tx,ty,tz);
        if(state==2)stage->Object_Trans(tx,ty,tz);
}
void WidgetDirectChange::on_pushButton_2_clicked(){
        if(state==1)mainscreen->Object_Rotate(rx,ry,rz);
        if(state==2)stage->Object_Rotate(rx,ry,rz);
}
void WidgetDirectChange::on_pushButton_3_clicked(){
    VR->Scale_State = 1;

        if(state==1)mainscreen->Object_Scale(sx,sy,sz);
        if(state==2)stage->Object_Scale(sx,sy,sz);
}
void WidgetDirectChange::on_pushButton_4_clicked(){
    VR->Boundary_State=1;

        if(state==1)mainscreen->Size_Cube(cx,cy,cz);
        if(state==2)stage->Size_Cube(cx,cy,cz);
}


void WidgetDirectChange::on_pushButton_5_clicked()
{
    VR->Camera_State = 1;

    if(state==1)
    {
        mainscreen->Camera_Position(po1, po2, po3);
    }
    if(state==2)
    {
        stage->Camera_Position(po1, po2, po3);
    }
}


void WidgetDirectChange::on_pushButton_6_clicked()
{
    VR->Camera_State2 = 1;

    if(state==1)
    {
        mainscreen->Camera_Focal(fo1, fo2, fo3);
    }
    if(state==2)
    {
        stage->Camera_Focal(fo1, fo2, fo3);
    }
}
