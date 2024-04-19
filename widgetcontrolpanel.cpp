#include "widgetcontrolpanel.h"
#include "ui_widgetcontrolpanel.h"

WidgetControlPanel::WidgetControlPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetControlPanel)
{
    ui->setupUi(this);
    settingButton();
    ui->doubleSpinBox->setAlignment(Qt::AlignCenter);
    ui->doubleSpinBox_2->setAlignment(Qt::AlignCenter);

    this->setWindowTitle("6DOF Controller");

    this->setGeometry(fullScreenSizeX*0.25, fullScreenSizeY*0.72, fullScreenSizeX/2, fullScreenSizeY/5.6);

    ui->label_5->setAlignment(Qt::AlignCenter);

//    if(stage->filestate!=1)
//    {
//        ui->label_6->setStyleSheet("QLabel{color:#494949;}");
//        ui->Slider->setStyleSheet("QSlider::sub-page{background-color:#494949;}");
//    }
}

WidgetControlPanel::~WidgetControlPanel()
{
    delete ui;
}

void WidgetControlPanel::settingButton()
{
    double SX=fullScreenSizeX*aspect_ratioButtonSize;
    double SXD=fullScreenSizeX*aspect_ratioButtonSize*0.8;
    double SY=fullScreenSizeY*ratioButtonSizeY;

    this->ui->toolButton_11->setGeometry(SX*1.5,fullScreenSizeY*0.04,SX*0.5,SY*0.6);
    this->ui->toolButton_16->setGeometry(SX*2.005,fullScreenSizeY*0.04,SX*0.5,SY*0.6);
    this->ui->toolButton_17->setGeometry(SX*2.507,fullScreenSizeY*0.04,SX*0.5,SY*0.6);

    this->ui->toolButton_14->setGeometry(SX*1.5,fullScreenSizeY*0.07,SX*0.5,SY*0.6);
    this->ui->toolButton_18->setGeometry(SX*2.005,fullScreenSizeY*0.07,SX*0.5,SY*0.6);
    this->ui->toolButton_19->setGeometry(SX*2.507,fullScreenSizeY*0.07,SX*0.5,SY*0.6);

    this->ui->toolButton_15->setGeometry(SX*1.5,fullScreenSizeY*0.1,SX*0.5,SY*0.6);
    this->ui->toolButton_12->setGeometry(SX*2.005,fullScreenSizeY*0.1,SX*0.5,SY*0.6);
    this->ui->toolButton_13->setGeometry(SX*2.507,fullScreenSizeY*0.1,SX*0.5,SY*0.6);

    this->ui->label_5->setGeometry(SX*3.7,fullScreenSizeY*0.04,SX*0.4,SY*0.4);

    this->ui->label_7->setGeometry(SX*3.5,fullScreenSizeY*0.07,SX*0.4,SY*0.4);
    this->ui->label_8->setGeometry(SX*3.5,fullScreenSizeY*0.1,SX*0.4,SY*0.4);

    this->ui->doubleSpinBox->setGeometry(SX*4,fullScreenSizeY*0.07,SX*0.4,SY*0.4);
    this->ui->doubleSpinBox_2->setGeometry(SX*4,fullScreenSizeY*0.1,SX*0.4,SY*0.4);

    this->ui->label_6->setGeometry(SX*0.05,fullScreenSizeY*0.05,SX*0.7,SY*0.4 );
    this->ui->label_9->setGeometry(SX*0.05,fullScreenSizeY*0.09,SX*0.7,SY*0.4 );
    this->ui->Slider->setGeometry(SX*0.6,fullScreenSizeY*0.05,SX*0.75,SY*0.4);
    this->ui->Slider_2->setGeometry(SX*0.6, fullScreenSizeY*0.09, SX*0.75, SY*0.4);
}


void WidgetControlPanel::Change_btn_fn(int flag){
    ui->toolButton_11->setStyleSheet("QToolButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 #B4B4B4, stop:1 #494949); border:none;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0.324, y1:0.306682, x2:1, y2:1, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255));}");
    ui->toolButton_14->setStyleSheet("QToolButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 #B4B4B4, stop:1 #494949); border:none;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0.324, y1:0.306682, x2:1, y2:1, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255));}");
    ui->toolButton_15->setStyleSheet("QToolButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 #B4B4B4, stop:1 #494949); border:none;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0.324, y1:0.306682, x2:1, y2:1, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255));}");

    switch(flag) {
    case 11:
        ui->toolButton_11->setStyleSheet("QToolButton{border:none;"
                                         "background-color:qlineargradient(spread:pad, x1:0.324, y1:0.306682, x2:1, y2:1, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
        break;
    case 14:
        ui->toolButton_14->setStyleSheet("QToolButton{border:none;"
                                         "background-color:qlineargradient(spread:pad, x1:0.324, y1:0.306682, x2:1, y2:1, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
        break;
    case 15:
        ui->toolButton_15->setStyleSheet("QToolButton{border:none;"
                                         "background-color:qlineargradient(spread:pad, x1:0.324, y1:0.306682, x2:1, y2:1, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
        break;
    }
}


void WidgetControlPanel::on_toolButton_11_clicked()
{
    stage->data = 0;
    Change_btn_fn(11);
}


void WidgetControlPanel::on_toolButton_14_clicked()
{
    stage->data = 1;
    Change_btn_fn(14);
}


void WidgetControlPanel::on_toolButton_15_clicked()
{
    stage->data = 2;
    Change_btn_fn(15);
}


void WidgetControlPanel::on_toolButton_16_clicked()
{
    stage->chflag=1;
    ui->toolButton_17->setStyleSheet("QToolButton{border:none; background-color:#494949;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
    ui->toolButton_16->setStyleSheet("QToolButton{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
}


void WidgetControlPanel::on_toolButton_17_clicked()
{
    stage->chflag=2;
    ui->toolButton_16->setStyleSheet("QToolButton{border:none; background-color:#494949;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
    ui->toolButton_17->setStyleSheet("QToolButton{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
}


void WidgetControlPanel::on_toolButton_18_clicked()
{
    stage->state=1;
    VR->RButton=1;

    ui->toolButton_19->setStyleSheet("QToolButton{border:none; background-color:#494949;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
    ui->toolButton_18->setStyleSheet("QToolButton{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
}


void WidgetControlPanel::on_toolButton_19_clicked()
{
    stage->state=2;
    VR->TButton=1;

    ui->toolButton_18->setStyleSheet("QToolButton{border:none; background-color:#494949;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
    ui->toolButton_19->setStyleSheet("QToolButton{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
}


void WidgetControlPanel::on_toolButton_12_clicked()
{
    stage->active1();
}


void WidgetControlPanel::on_toolButton_13_clicked()
{
    stage->active2();
}

void WidgetControlPanel::on_doubleSpinBox_valueChanged(double arg1)
{
    VR->rotation_del = arg1;
}

void WidgetControlPanel::on_doubleSpinBox_2_valueChanged(double arg1)
{
    VR->translation_del = arg1;
}

void WidgetControlPanel::on_Slider_valueChanged(int value)
{
    this->ui->Slider->setRange(0, 10);
    VR->obj_opacity_val = value / 10.0;
    qDebug() << VR->obj_opacity_val;

    if(VR->File_State==1)
    {
      stage->Object_Mapping();
    }
}


void WidgetControlPanel::on_Slider_2_valueChanged(int value)
{
    this->ui->Slider_2->setRange(0, 10);
    VR->bdr_opacity_val = value / 10.0;
    qDebug() << VR->bdr_opacity_val;

    stage->Boundary_Mapping();
}

void WidgetControlPanel::Opacity_ColorChange()
{
    ui->label_6->setStyleSheet("QLabel{color:#FFD3A7;}");
    ui->Slider->setStyleSheet("QSlider::handle:horizontal{border: 1px solid #494949; height:10px; width: 15px;"
                              "margin: -8px 0; border-radius: 8px; background-color:#FFD3A7; padding:-10px 0px;}"
                              "QSlider::groove:horizontal{border-radius:1px; border:none; height:5px; margin:0px; color:#FFD3A7;}"
                              "QSlider::sub-page{background: #FFD3A7;}"
                              "QSlider::add-page{background: rgb(70, 70, 70);}");
}
