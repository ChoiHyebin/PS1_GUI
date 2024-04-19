#include "startpsi.h"
#include "ui_startpsi.h"

//state = 0 화면이 아무것도 안 켜져있는 초기화면
//state = 2 mainscreen이 켜져야 하는 상황
//state = 1 stage가 켜져야하는 상황

StartPSI::StartPSI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartPSI)
{
    ui->setupUi(this);
    VR = new State_variable;
    this->setWindowTitle("PSI");
    this->setGeometry(0, 0, 797, 529);

}
StartPSI::~StartPSI()
{
    delete ui;
    qDebug("The System is closed.");
}

void StartPSI::on_pushButton_clicked()
{
    cout << "STL Link : " <<VR->stl_link << "\n";
    qDebug() << "File State : " << VR->File_State << "\n";
    qDebug() << "Camera State : " << VR->Camera_State << VR->Camera_State2 << "\n";

    if(state == 1){
        stage->close();
        subscreen->close();
        widgetcontrolpanel->close();
        widgetmenupanel->close();
        widgetdirectchange->close();
        widgetcurrentposition->close();
        functionkey->close();
    }
    state=2;

    mainscreen = new MainScreen;
    mainscreen->VR = VR;

    MainScreen_Boundary();

    if(VR->Boundary_State==1)
    {
        MainScreen_Boundary_Size();
    }

    if(VR->File_State==1)
    {
        mainscreen->Load_Stl(VR->stl_link);
        MainScreen_Object();
        mainscreen->Opacity_ColorChang();

        if(VR->Scale_State == 1)
        {
            MainScreen_Object_Scale();
        }
    }

    if(VR->Camera_State == 1)
    {
        mainscreen->camera->SetPosition(VR->camera_po1, VR->camera_po2, VR->camera_po3);
        mainscreen->camera->SetThickness(1000);
        mainscreen->renderer->ResetCameraClippingRange();
        mainscreen->renderWindow->Render();
    }
    if(VR->Camera_State2 == 1)
    {
        mainscreen->camera->SetFocalPoint(VR->camera_fo1, VR->camera_fo2, VR->camera_fo3);
        mainscreen->camera->SetThickness(1000);
        mainscreen->renderer->ResetCameraClippingRange();
        mainscreen->renderWindow->Render();
    }

    mainscreen->show();
    mainscreen->scflag = 0;

    subscreen = new SubScreen;
    subscreen->show();

    widgetdirectchange=new WidgetDirectChange;
    widgetdirectchange->state=1;
    widgetdirectchange->mainscreen = mainscreen;
    widgetdirectchange->VR = VR;
    widgetdirectchange->show();

    widgetcurrentposition = new WidgetCurrentPosition;
    mainscreen->widgetcurrentposition = widgetcurrentposition;
    widgetcurrentposition->show();
}

void StartPSI::on_pushButton_2_clicked()
{
    cout << "STL Link : " <<VR->stl_link << "\n";
    qDebug() << "File State : " << VR->File_State << "\n";
    qDebug() << "Camera State : " << VR->Camera_State << VR->Camera_State2 << "\n";

    if(state == 2){
        mainscreen->close();
        subscreen->close();
        widgetdirectchange->close();
        widgetcurrentposition->close();
    }
    state=1;

    stage = new Stage;
    stage->VR = VR;
    stage->renderer->ResetCamera();

    functionkey = new FunctionKey;
    functionkey->stage = stage;
    functionkey->show();

    widgetcontrolpanel = new WidgetControlPanel;
    widgetcontrolpanel->stage = stage;
    widgetcontrolpanel->VR = VR;
    widgetcontrolpanel->show();

    widgetmenupanel = new WidgetMenuPanel;
    widgetmenupanel->stage = stage;
    widgetmenupanel->wcp = widgetcontrolpanel;
    widgetmenupanel->VR = VR;
    widgetmenupanel->show();

    Stage_Boundary();

    if(VR->Boundary_State==1)
    {
        Stage_Boundary_Size();
    }

    if(VR->File_State==1)
    {
        stage->Load_Stl(VR->stl_link);
        Stage_Object();
        widgetcontrolpanel->Opacity_ColorChange();

        if(VR->Scale_State == 1)
        {
            Stage_Object_Scale();
        }
    }

    if(VR->Camera_State == 1)
    {
        stage->camera->SetPosition(VR->camera_po1, VR->camera_po2, VR->camera_po3);
        stage->camera->SetThickness(1000);
        stage->renderer->ResetCameraClippingRange();
        stage->renderWindow->Render();
    }
    if(VR->Camera_State2 == 1)
    {
        stage->camera->SetFocalPoint(VR->camera_fo1, VR->camera_fo2, VR->camera_fo3);
        stage->camera->SetThickness(1000);
        stage->renderer->ResetCameraClippingRange();
        stage->renderWindow->Render();
    }

    stage->show();

//    functionkey = new FunctionKey;
//    functionkey->stage = stage;
//    functionkey->show();

//    widgetcontrolpanel = new WidgetControlPanel;
//    widgetcontrolpanel->stage = stage;
//    widgetcontrolpanel->VR = VR;
//    widgetcontrolpanel->show();

//    widgetmenupanel = new WidgetMenuPanel;
//    widgetmenupanel->stage = stage;
//    widgetmenupanel->wcp = widgetcontrolpanel;
//    widgetmenupanel->VR = VR;
//    widgetmenupanel->show();

    subscreen = new SubScreen;
    subscreen->show();

    widgetdirectchange=new WidgetDirectChange;
    widgetdirectchange->state=2;
    widgetdirectchange->stage = stage;
    widgetdirectchange->VR = VR;
    widgetdirectchange->show();

    widgetcurrentposition = new WidgetCurrentPosition;
    stage->widgetcurrentposition = widgetcurrentposition;
    widgetcurrentposition->show();
}

void StartPSI::MainScreen_Boundary()
{
    mainscreen->pTransform_3->RotateX(VR->bdr_rotation_x);
    mainscreen->pTransform_3->RotateY(VR->bdr_rotation_y);
    mainscreen->pTransform_3->RotateZ(VR->bdr_rotation_z);
    mainscreen->tmp[0]=VR->bdr_translation_x;
    mainscreen->tmp[1]=VR->bdr_translation_y;
    mainscreen->tmp[2]=VR->bdr_translation_z;
    mainscreen->pt=mainscreen->tmp;
    mainscreen->pTransform_3->Translate(mainscreen->pt);
    mainscreen->Boundary_Mapping();
}

void StartPSI::MainScreen_Object()
{
    mainscreen->pTransform->RotateX(VR->obj_rotation_x);
    mainscreen->pTransform->RotateY(VR->obj_rotation_y);
    mainscreen->pTransform->RotateZ(VR->obj_rotation_z);
    mainscreen->tmp[0]=VR->obj_translation_x;
    mainscreen->tmp[1]=VR->obj_translation_y;
    mainscreen->tmp[2]=VR->obj_translation_z;
    mainscreen->pt=mainscreen->tmp;
    mainscreen->pTransform->Translate(mainscreen->pt);
    mainscreen->Object_Mapping();
}

void StartPSI::MainScreen_Object_Scale()
{
    mainscreen->pTransform->Scale(VR->obj_x_length, VR->obj_y_length, VR->obj_z_length);
    mainscreen->Object_Mapping();
    widgetcurrentposition->Scale_Info(VR->obj_x_length, VR->obj_y_length, VR->obj_z_length);
}

void StartPSI::MainScreen_Boundary_Size()
{
    mainscreen->cube->SetXLength(VR->bdr_x_length);
    mainscreen->cube->SetYLength(VR->bdr_y_length);
    mainscreen->cube->SetZLength(VR->bdr_z_length);
    mainscreen->cube->SetCenter(0,0,0);
    mainscreen->Boundary_Mapping();
}

void StartPSI::MainScreen_Camera()
{
    mainscreen->camera->SetPosition(VR->camera_po1, VR->camera_po2, VR->camera_po3);
    mainscreen->camera->SetFocalPoint(VR->camera_fo1, VR->camera_fo2, VR->camera_fo3);
    mainscreen->renderWindow->Render();
}

void StartPSI::Stage_Boundary()
{
    stage->pTransform_3->RotateX(VR->bdr_rotation_x);
    stage->pTransform_3->RotateY(VR->bdr_rotation_y);
    stage->pTransform_3->RotateZ(VR->bdr_rotation_z);
    stage->tmp[0]=VR->bdr_translation_x;
    stage->tmp[1]=VR->bdr_translation_y;
    stage->tmp[2]=VR->bdr_translation_z;
    stage->pt=stage->tmp;
    stage->pTransform_3->Translate(stage->pt);
    stage->Boundary_Mapping();
}

void StartPSI::Stage_Object()
{
    stage->pTransform->RotateX(VR->obj_rotation_x);
    stage->pTransform->RotateY(VR->obj_rotation_y);
    stage->pTransform->RotateZ(VR->obj_rotation_z);
    stage->tmp[0]=VR->obj_translation_x;
    stage->tmp[1]=VR->obj_translation_y;
    stage->tmp[2]=VR->obj_translation_z;
    stage->pt=stage->tmp;
    stage->pTransform->Translate(stage->pt);
    stage->Object_Mapping();
}

void StartPSI::Stage_Object_Scale()
{
    stage->pTransform->Scale(VR->obj_x_length, VR->obj_y_length, VR->obj_z_length);
    stage->Object_Mapping();
    widgetcurrentposition->Scale_Info(VR->obj_x_length, VR->obj_y_length, VR->obj_z_length);
}

void StartPSI::Stage_Boundary_Size()
{
    stage->cube->SetXLength(VR->bdr_x_length);
    stage->cube->SetYLength(VR->bdr_y_length);
    stage->cube->SetZLength(VR->bdr_z_length);
    stage->cube->SetCenter(0,0,0);
    stage->Boundary_Mapping();
}

void StartPSI::Stage_Camera()
{
    stage->camera->SetPosition(VR->camera_po1, VR->camera_po2, VR->camera_po3);
    stage->camera->SetFocalPoint(VR->camera_fo1, VR->camera_fo2, VR->camera_fo3);
    stage->renderWindow->Render();
}
