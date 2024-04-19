#include "sizesetting.h"
#include "ui_sizesetting.h"
#include "dialog.h"

SizeSetting::SizeSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SizeSetting)
{
    ui->setupUi(this);

}

SizeSetting::~SizeSetting()
{
    delete ui;
}

void SizeSetting::on_horizontalSlider_valueChanged(int value){
BtnRatioSizeX=value;
}
void SizeSetting::on_horizontalSlider_2_valueChanged(int value){
BtnRatioSizeY=value;
}
void SizeSetting::on_horizontalSlider_3_valueChanged(int value){
ScreenWidth=value;
}
void SizeSetting::on_horizontalSlider_4_valueChanged(int value){
ScreenHeight=value;
}
double SizeSetting::valuereturn(int a){
    if(a ==1)
        return BtnRatioSizeX;
    else if(a==2)
        return BtnRatioSizeY;
}
