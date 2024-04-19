#include "widgetcurrentposition.h"
#include "ui_widgetcurrentposition.h"

WidgetCurrentPosition::WidgetCurrentPosition(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetCurrentPosition)
{
    ui->setupUi(this);
    this->setWindowTitle("Current Position");

   this->setGeometry(wid*0.75,hei*0.57,wid*0.25,hei*0.33);

    ui->currentattitude->setAlignment(Qt::AlignCenter);
    ui->currentattitude_2->setAlignment(Qt::AlignCenter);
    ui->currentattitude_3->setAlignment(Qt::AlignCenter);

    ui->label->setAlignment(Qt::AlignRight);
    ui->label_2->setAlignment(Qt::AlignRight);
    ui->label_3->setAlignment(Qt::AlignRight);
    ui->label_4->setAlignment(Qt::AlignRight);
    ui->label_5->setAlignment(Qt::AlignCenter);
    ui->label_6->setAlignment(Qt::AlignCenter);
    ui->label_7->setAlignment(Qt::AlignCenter);
    ui->label_12->setAlignment(Qt::AlignRight);
    ui->label_13->setAlignment(Qt::AlignRight);
    ui->label_14->setAlignment(Qt::AlignCenter);
    ui->label_15->setAlignment(Qt::AlignRight);
    ui->label_16->setAlignment(Qt::AlignRight);

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
    ui->lineEdit_19->setAlignment(Qt::AlignCenter);
    ui->lineEdit_20->setAlignment(Qt::AlignCenter);
    ui->lineEdit_21->setAlignment(Qt::AlignCenter);
    ui->lineEdit_22->setAlignment(Qt::AlignCenter);
    ui->lineEdit_23->setAlignment(Qt::AlignCenter);
    ui->lineEdit_24->setAlignment(Qt::AlignCenter);
}

WidgetCurrentPosition::~WidgetCurrentPosition()
{
    delete ui;
}

void WidgetCurrentPosition::Printre(double x, double y, double z){
    QString txt = QString::number(x);
    this->ui->lineEdit->setText(txt);
    QString txt2=QString::number(y);
    this->ui->lineEdit_2->setText(txt2);
    QString txt3=QString::number(z);
    this->ui->lineEdit_3->setText(txt3);
}

void WidgetCurrentPosition::Printtr(double tx, double ty, double tz){
    QString txtt = QString::number(tx);
    this->ui->lineEdit_4->setText(txtt);
    QString txtt2 = QString::number(ty);
    this->ui->lineEdit_5->setText(txtt2);
    QString txtt3 = QString::number(tz);
    this->ui->lineEdit_6->setText(txtt3);
}

void WidgetCurrentPosition::Printre2(double xx, double yy, double zz)
{
    QString t = QString::number(xx);
    this->ui->lineEdit_7->setText(t);
    QString t2 = QString::number(yy);
    this->ui->lineEdit_8->setText(t2);
    QString t3 = QString::number(zz);
    this->ui->lineEdit_9->setText(t3);
}

void WidgetCurrentPosition::Printtr2(double txx, double tyy, double tzz)
{
    QString g = QString::number(txx);
    this->ui->lineEdit_10->setText(g);
    QString g2 = QString::number(tyy);
    this->ui->lineEdit_11->setText(g2);
    QString g3 = QString::number(tzz);
    this->ui->lineEdit_12->setText(g3);
}

void WidgetCurrentPosition::Scale_Info(double aa, double bb, double cc)
{
    QString Scale1 = QString::number(aa);
    this->ui->lineEdit_13->setText(Scale1);
    QString Scale2 = QString::number(bb);
    this->ui->lineEdit_14->setText(Scale2);
    QString Scale3 = QString::number(bb);
    this->ui->lineEdit_15->setText(Scale3);
}

void WidgetCurrentPosition::Size_Info(double s1, double s2, double s3)
{
    QString Size1 = QString::number(s1);
    this->ui->lineEdit_16->setText(Size1);
    QString Size2 = QString::number(s2);
    this->ui->lineEdit_17->setText(Size2);
    QString Size3 = QString::number(s3);
    this->ui->lineEdit_18->setText(Size3);
}

void WidgetCurrentPosition::Camera_Position(double po1, double po2, double po3)
{
    QString Position1 = QString::number(po1);
    this->ui->lineEdit_19->setText(Position1);
    QString Position2 = QString::number(po2);
    this->ui->lineEdit_20->setText(Position2);
    QString Position3 = QString::number(po3);
    this->ui->lineEdit_21->setText(Position3);
}

void WidgetCurrentPosition::Camera_Focal(double fo1, double fo2, double fo3)
{
    QString Focal1 = QString::number(fo1);
    this->ui->lineEdit_22->setText(Focal1);
    QString Focal2 = QString::number(fo2);
    this->ui->lineEdit_23->setText(Focal2);
    QString Focal3 = QString::number(fo3);
    this->ui->lineEdit_24->setText(Focal3);
}
