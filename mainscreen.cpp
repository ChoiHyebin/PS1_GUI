#include "mainscreen.h"
#include "ui_mainscreen.h"

#include <QGraphicsOpacityEffect>
#include <QPainter>
#include <QFileDialog>
#include <QResizeEvent>
#include <qdebug.h>
#include <QTimer>
#include <QMenu>
#include <math.h>
#include <subscreen.h>
#include <QColorDialog>
#include <QColor>
#include <fstream>

MainScreen::MainScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);

    this->setGeometry(0,fullScreenSizeY*0.1,fullScreenSizeX*0.75,fullScreenSizeY*0.8);
    Show_Cube();
    Red_Point();
    Setting_Button();
    this->setWindowTitle("Main");
    ui->label_5->setAlignment(Qt::AlignCenter);
    ui->label_7->setAlignment(Qt::AlignCenter);
    ui->label_8->setAlignment(Qt::AlignCenter);
    ui->doubleSpinBox->setAlignment(Qt::AlignCenter);
    ui->doubleSpinBox_2->setAlignment(Qt::AlignCenter);
    ui->doubleSpinBox_3->setAlignment(Qt::AlignCenter);

    QPoint position = mapToGlobal(this->frameGeometry().topLeft());
    QPoint position2 = mapToGlobal(this->frameGeometry().topRight());
    QPoint position3 = mapToGlobal(this->frameGeometry().bottomRight());
    QPoint position4 = mapToGlobal(this->frameGeometry().bottomLeft());
    qDebug()<<position<<position2<<position3<<position4;

    camera = renderer->GetActiveCamera();
    camera->SetPosition(0,0,7000);
    renderer->ResetCameraClippingRange();
    renderWindow->Render();

    ui->comboBox->addItem(QIcon(":/icon/file_2.svg"), "view1");
    ui->comboBox->addItem(QIcon(":/icon/file_2.svg"), "view2");
    ui->comboBox->addItem(QIcon(":/icon/palette-svgrepo-com.svg"), "Change Color");
}

MainScreen::~MainScreen()
{
    delete ui;
}

void MainScreen::mapping()
{
    if (chflag==1 && VR->File_State==1)
    {
        pTransformFilter->SetInputConnection(reader->GetOutputPort());
        pTransformFilter->SetTransform(pTransform);
        pTransformFilter->Update();
        mapper->SetInputConnection(pTransformFilter->GetOutputPort());
        actor->SetMapper(mapper);
        actor->GetProperty()->SetOpacity(VR->obj_opacity_val);
        renderer->AddActor(actor);
        renderWindow->AddRenderer(renderer);
        ui->CarStl->SetRenderWindow(renderWindow);
    }
    else if(chflag==2)
    {
        pTransformFilter_3->SetInputConnection(cube->GetOutputPort());
        pTransformFilter_3->SetTransform(pTransform_3);
        pTransformFilter_3->Update();
        cubeMapper->SetInputConnection(pTransformFilter_3->GetOutputPort());
        cubeActor->SetMapper(cubeMapper);
        cubeActor->GetProperty()->SetOpacity(VR->bdr_opacity_val);
        renderer->AddActor(cubeActor);
        renderWindow->AddRenderer(renderer);
        ui->CarStl->SetRenderWindow(renderWindow);
    }

    renderWindow->Render();
}

void MainScreen::Object_Mapping()
{
    if(VR->File_State==1)
    {
        pTransformFilter->SetInputConnection(reader->GetOutputPort());
        pTransformFilter->SetTransform(pTransform);
        pTransformFilter->Update();

        mapper->SetInputConnection(pTransformFilter->GetOutputPort());

        actor->SetMapper(mapper);
        size = actor->GetLength();

        actor->GetProperty()->SetOpacity(VR->obj_opacity_val);

        renderer->AddActor(actor);

        renderer->ResetCamera();

        renderWindow->AddRenderer(renderer);

        ui->CarStl->SetRenderWindow(renderWindow);

        renderWindow->Render();
    }
}

void MainScreen::Boundary_Mapping()
{
    pTransformFilter_3->SetInputConnection(cube->GetOutputPort());

    pTransformFilter_3->SetTransform(pTransform_3);
    pTransformFilter_3->Update();

    cubeMapper->SetInputConnection(pTransformFilter_3->GetOutputPort());

    cubeActor->SetMapper(cubeMapper);

    cubeActor->GetProperty()->SetOpacity(VR->bdr_opacity_val);

    renderer->AddActor(cubeActor);

    renderer->ResetCamera();

    renderWindow->AddRenderer(renderer);

    renderWindow->Render();
}

void MainScreen::Turn_Stl(double a){
    if(data==0)
    {
        if(chflag==1)pTransform->RotateX(a);
        if(chflag==2)pTransform_3->RotateX(a);
    }
    else if(data==1)
    {
        if(chflag==1)pTransform->RotateY(a);
        if(chflag==2)pTransform_3->RotateY(a);
    }
    else if(data==2)
    {
        if(chflag==1)pTransform->RotateZ(a);
        if(chflag==2)pTransform_3->RotateZ(a);
    }

    Print(VR->obj_rotation_x, VR->obj_rotation_y, VR->obj_rotation_z);
    Print2(VR->bdr_rotation_x, VR->bdr_rotation_y, VR->bdr_rotation_z);

    mapping();
}

void MainScreen::Object_Turn(double a)
{
    if(data==0)
    {
        pTransform->RotateX(a);
    }
    else if(data==1)
    {
        pTransform->RotateY(a);
    }
    else if(data==2)
    {
        pTransform->RotateZ(a);
    }

    Object_Mapping();
}

void MainScreen::Move_Stl(int a){
    tmp[0]=0;
    tmp[1]=0;
    tmp[2]=0;
    tmp[data]=VR->translation_del*a;
    pt=tmp;
    switch(data)
    {
    case 0:
        if(chflag==1)
        {
            pTransform->Translate(pt);
            VR->obj_translation_x+=VR->translation_del*a;
        }
        else if(chflag==2)
        {
            pTransform_3->Translate(pt);
            VR->bdr_translation_x+=VR->translation_del*a;
        }
        break;
    case 1:
        if(chflag==1)
        {
            pTransform->Translate(pt);
            VR->obj_translation_y+=VR->translation_del*a;
        }
        else if(chflag==2)
        {
            pTransform_3->Translate(pt);
            VR->bdr_translation_y+=VR->translation_del*a;
        }
        break;
    case 2:
        if(chflag==1)
        {
            pTransform->Translate(pt);
            VR->obj_translation_z+=VR->translation_del*a;
        }
        else if(chflag==2)
        {
            pTransform_3->Translate(pt);
            VR->bdr_translation_z+=VR->translation_del*a;
        }
    }
    if(chflag==1)
    {
        Printtran(VR->obj_translation_x, VR->obj_translation_y, VR->obj_translation_z);
    }
    else if(chflag==2)
    {
        Printtran2(VR->bdr_translation_x, VR->bdr_translation_y, VR->bdr_translation_z);
    }
    mapping();
}

void MainScreen::Trans_Stl(double a,double b,double c){
    if(chflag==1){
        pTransform->Translate(a-tx,b-ty,c-tz);
        tx=a;
        ty=b;
        tz=c;
        Printtran(tx,ty,tz);
    }
    if(chflag==2){
        pTransform_3->Translate(a-CubeTransX,b-CubeTransY,c-CubeTransZ);
        CubeTransX=a;
        CubeTransY=b;
        CubeTransZ=c;
        Printtran2(CubeTransX,CubeTransY,CubeTransZ);
    }
    mapping();
    tmp[0]=0;
    tmp[1]=0;
    tmp[2]=0;
}

void MainScreen::Object_Trans(double a, double b, double c)
{
    pTransform->Translate(a-VR->obj_translation_x,b-VR->obj_translation_y,c-VR->obj_translation_z);
    VR->obj_translation_x=a;
    VR->obj_translation_y=b;
    VR->obj_translation_z=c;
    Printtran(VR->obj_translation_x,VR->obj_translation_y,VR->obj_translation_z);

    Object_Mapping();
    tmp[0]=0;
    tmp[1]=0;
    tmp[2]=0;
}

void MainScreen::Size_Cube(double a,double b,double c){
    VR->bdr_x_length=a;
    VR->bdr_y_length=b;
    VR->bdr_z_length=c;
    cube->SetXLength(VR->bdr_x_length);
    cube->SetYLength(VR->bdr_y_length);
    cube->SetZLength(VR->bdr_z_length);
    cube->SetCenter(0,0,0);
    cubeMapper->SetInputConnection(cube->GetOutputPort());
    cubeActor->SetMapper(cubeMapper);
    renderer->AddActor(cubeActor);
    renderWindow->AddRenderer(renderer);
    this->ui->CarStl->SetRenderWindow(renderWindow);
    renderer->ResetCameraClippingRange();
    renderer->ResetCamera();
    renderWindow->Render();

    qDebug() << VR->bdr_x_length << VR->bdr_y_length << VR->bdr_z_length ;
    widgetcurrentposition->Size_Info(VR->bdr_x_length, VR->bdr_y_length, VR->bdr_z_length);

//    for(int i = 0; i<100; i++)
//    {
//        small_cube[i]->SetCenter(i, 0, 0);
//        small_cube[i]->SetXLength(a);
//        small_cube[i]->SetYLength(b);
//        small_cube[i]->SetZLength(c);
//        small_cubeMapper[i]->SetInputConnection(small_cube[i]->GetOutputPort());
//        small_cubeActor[i]->SetMapper(small_cubeMapper[i]);
//        renderer->AddActor(small_cubeActor[i]);
//        renderWindow->AddRenderer(renderer);
//        this->ui->CarStl->SetRenderWindow(renderWindow);
//        renderWindow->Render();
//    }
//    for(int j = 0; j<100; j++)
//    {
//        small_cube2[j]->SetCenter(0, j, 0);
//        small_cube2[j]->SetXLength(a);
//        small_cube2[j]->SetYLength(b);
//        small_cube2[j]->SetZLength(c);
//        small_cubeMapper2[j]->SetInputConnection(small_cube2[j]->GetOutputPort());
//        small_cubeActor2[j]->SetMapper(small_cubeMapper2[j]);
//        renderer->AddActor(small_cubeActor2[j]);
//        renderWindow->AddRenderer(renderer);
//        this->ui->CarStl->SetRenderWindow(renderWindow);
//        renderWindow->Render();
//    }
//    for(int l = 0; l<100; l++)
//    {
//        small_cube3[l]->SetCenter(0, 0, l);
//        small_cube3[l]->SetXLength(a);
//        small_cube3[l]->SetYLength(b);
//        small_cube3[l]->SetZLength(c);
//        small_cubeMapper3[l]->SetInputConnection(small_cube3[l]->GetOutputPort());
//        small_cubeActor3[l]->SetMapper(small_cubeMapper3[l]);
//        renderer->AddActor(small_cubeActor3[l]);
//        renderWindow->AddRenderer(renderer);
//        this->ui->CarStl->SetRenderWindow(renderWindow);
//        renderWindow->Render();
//    }
}

void MainScreen::Rotate_Stl(double a,double b,double c){
    if(chflag==1){
        Turn_Stl(a-VR->obj_rotation_x);
        Turn_Stl(b-VR->obj_rotation_y);
        Turn_Stl(c-VR->obj_rotation_z);
        VR->obj_rotation_x=a;
        VR->obj_rotation_y=b;
        VR->obj_rotation_z=c;
        Print(VR->obj_rotation_x,VR->obj_rotation_y,VR->obj_rotation_z);
    }
    if(chflag==2){
        Turn_Stl(a-VR->bdr_rotation_x);
        Turn_Stl(b-VR->bdr_rotation_y);
        Turn_Stl(c-VR->bdr_rotation_z);
        VR->bdr_rotation_x=a;
        VR->bdr_rotation_y=b;
        VR->bdr_rotation_z=c;
        Print2(VR->bdr_rotation_x,VR->bdr_rotation_y,VR->bdr_rotation_z);
    }
    mapping();

//    if(chflag==1){
//    Turn_Stl('x',a-x);
//    Turn_Stl('y',b-y);
//    Turn_Stl('z',c-z);
//    x=a;
//    y=b;
//    z=c;
//    Print(x,y,z);
//    }
//    if(chflag==2){
//        Turn_Stl('x',a-cubeX);
//        Turn_Stl('y',b-cubeY);
//        Turn_Stl('z',c-cubeZ);
//        cubeX=a;
//        cubeY=b;
//        cubeZ=c;
//    }
//    mapping();
}

void MainScreen::Object_Rotate(double a, double b, double c)
{
    pTransform->RotateX(a-VR->obj_rotation_x);
    pTransform->RotateY(b-VR->obj_rotation_y);
    pTransform->RotateZ(c-VR->obj_rotation_z);
    VR->obj_rotation_x=a;
    VR->obj_rotation_y=b;
    VR->obj_rotation_z=c;
    Print(VR->obj_rotation_x,VR->obj_rotation_y,VR->obj_rotation_z);

    Object_Mapping();
}

void MainScreen::Scale_Stl(double a,double b,double c){
    if(chflag==1){
        pTransform->Scale(a,b,c);
        scaleX = a;
        scaleY = b;
        scaleZ = c;
        widgetcurrentposition->Scale_Info(a, b, c);
    }
    if(chflag==2){
        pTransform_3->Scale(a,b,c);
        widgetcurrentposition->Size_Info(a, b, c);
    }
    mapping();
}

void MainScreen::Object_Scale(double a, double b, double c)
{
    VR->obj_x_length = a;
    VR->obj_y_length = b;
    VR->obj_z_length = c;
    pTransform->Scale(VR->obj_x_length,VR->obj_y_length,VR->obj_z_length);
    widgetcurrentposition->Scale_Info(VR->obj_x_length, VR->obj_y_length, VR->obj_z_length);
    Object_Mapping();
}

void MainScreen::Load_Stl(std::string url){
    reader->SetFileName(url.c_str());
    reader->Update();

    mapper->SetInputConnection(reader->GetOutputPort());

    actor->SetMapper(mapper);
    size = actor->GetLength();
    renderer->AddActor(actor);
    renderWindow->AddRenderer(renderer);

    this->ui->CarStl->SetRenderWindow(renderWindow);
}

void MainScreen::Red_Point(){
    src->Update();
    src->SetCenter(0, 0, 0);
    src->SetNumberOfPoints(1);
    sphereMapper->SetInputConnection(src->GetOutputPort());
    sphereActor->SetMapper(sphereMapper);
    sphereActor->GetProperty()->SetPointSize(5);
    sphereActor->GetProperty()->SetColor(colors->GetColor3d("red").GetData());
    renderer->AddActor(sphereActor);
    renderWindow->AddRenderer(renderer);
    renderWindow->SetWindowName("Pointsize");
    this->ui->CarStl->SetRenderWindow(renderWindow);
    renderWindow->Render();
}

void MainScreen::Show_Cube(){
    cube->SetCenter(0, 0, 0);

    xlength = 6000;
    ylength = 2000;
    zlength = 2000;

    cube->SetXLength(xlength);
    cube->SetYLength(ylength);
    cube->SetZLength(zlength);

    cubeMapper->SetInputConnection(cube->GetOutputPort());
    cubeActor->SetMapper(cubeMapper);
    cubeActor->GetProperty()->SetOpacity(0.1);
    cubeActor->GetProperty()->SetColor(colors->GetColor3d("Banana").GetData());
    renderer->AddActor(cubeActor);
    renderWindow->SetFullScreen(true);
    renderWindow->AddRenderer(renderer);
    this->ui->CarStl->SetRenderWindow(renderWindow);
    renderWindow->Render();

//    for(int i=0; i<100; i++)
//    {
//        small_cube[i]->SetCenter(i, 0, 0);

//        xlength = 0.5;
//        ylength=xlength;
//        zlength=xlength;

//        small_cube[i]->SetXLength(xlength);
//        small_cube[i]->SetYLength(ylength);
//        small_cube[i]->SetZLength(zlength);

//        small_cubeMapper[i]->SetInputConnection(small_cube[i]->GetOutputPort());
//        small_cubeActor[i]->SetMapper(small_cubeMapper[i]);
//        small_cubeActor[i]->GetProperty()->SetOpacity(0.1);
//        small_cubeActor[i]->GetProperty()->SetColor(colors->GetColor3d("Banana").GetData());
//        renderer->AddActor(small_cubeActor[i]);
//        renderWindow->SetFullScreen(true);
//        renderWindow->AddRenderer(renderer);
//        this->ui->CarStl->SetRenderWindow(renderWindow);
//        renderWindow->Render();
//    }

//    for(int j=0; j<100; j++)
//    {
//        small_cube2[j]->SetCenter(0, j, 0);

//        xlength = 0.5;
//        ylength=xlength;
//        zlength=xlength;

//        small_cube2[j]->SetXLength(xlength);
//        small_cube2[j]->SetYLength(ylength);
//        small_cube2[j]->SetZLength(zlength);

//        small_cubeMapper2[j]->SetInputConnection(small_cube2[j]->GetOutputPort());
//        small_cubeActor2[j]->SetMapper(small_cubeMapper2[j]);
//        small_cubeActor2[j]->GetProperty()->SetOpacity(0.1);
//        small_cubeActor2[j]->GetProperty()->SetColor(colors->GetColor3d("Banana").GetData());
//        renderer->AddActor(small_cubeActor2[j]);
//        renderWindow->SetFullScreen(true);
//        renderWindow->AddRenderer(renderer);
//        this->ui->CarStl->SetRenderWindow(renderWindow);
//        renderWindow->Render();
//    }

//    for(int l=0; l<100; l++)
//    {
//        small_cube3[l]->SetCenter(0, 0, l);

//        xlength = 0.5;
//        ylength=xlength;
//        zlength=xlength;

//        small_cube3[l]->SetXLength(xlength);
//        small_cube3[l]->SetYLength(ylength);
//        small_cube3[l]->SetZLength(zlength);

//        small_cubeMapper3[l]->SetInputConnection(small_cube3[l]->GetOutputPort());
//        small_cubeActor3[l]->SetMapper(small_cubeMapper3[l]);
//        small_cubeActor3[l]->GetProperty()->SetOpacity(0.1);
//        small_cubeActor3[l]->GetProperty()->SetColor(colors->GetColor3d("Banana").GetData());
//        renderer->AddActor(small_cubeActor3[l]);
//        renderWindow->SetFullScreen(true);
//        renderWindow->AddRenderer(renderer);
//        this->ui->CarStl->SetRenderWindow(renderWindow);
//        renderWindow->Render();
//    }
}

void MainScreen::Print(double i, double j, double k){
    widgetcurrentposition->Printre(i,j,k);
}

void MainScreen::Printtran(double i, double j, double k){
    widgetcurrentposition->Printtr(i,j,k);
}

void MainScreen::Print2(double i, double j, double k)
{
    widgetcurrentposition->Printre2(i, j, k);
}

void MainScreen::Printtran2(double i, double j, double k)
{
    widgetcurrentposition->Printtr2(i, j, k);
}

void MainScreen::PrintScale(double i, double j, double k)
{
    widgetcurrentposition->Scale_Info(i, j, k);
}

void MainScreen::PrintSize(double i, double j, double k)
{
    widgetcurrentposition->Size_Info(i, j, k);
}

void MainScreen::Camera_Position(double a, double b, double c)
{
    VR->camera_po1 = a;
    VR->camera_po2 = b;
    VR->camera_po3 = c;
    camera->SetPosition(VR->camera_po1, VR->camera_po2, VR->camera_po3);
    camera->SetThickness(1000);
    this->ui->CarStl->SetRenderWindow(renderWindow);
    renderer->ResetCameraClippingRange();
    renderWindow->Render();
    widgetcurrentposition->Camera_Position(VR->camera_po1, VR->camera_po2, VR->camera_po3);
}

void MainScreen::Camera_Focal(double a, double b, double c)
{
    VR->camera_fo1 = a;
    VR->camera_fo2 = b;
    VR->camera_fo3 = c;
    camera->SetFocalPoint(VR->camera_fo1, VR->camera_fo2, VR->camera_fo3);
    this->ui->CarStl->SetRenderWindow(renderWindow);
    renderer->ResetCameraClippingRange();
    renderWindow->Render();
    widgetcurrentposition->Camera_Focal(VR->camera_fo1, VR->camera_fo2, VR->camera_fo3);
}

void MainScreen::Change_btn_fn(int flag){
    ui->toolButton_11->setStyleSheet("QToolButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 #B4B4B4, stop:1 #494949); border:none;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); color:white;}");
    ui->toolButton_14->setStyleSheet("QToolButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 #B4B4B4, stop:1 #494949); border:none;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); color:white;}");
    ui->toolButton_15->setStyleSheet("QToolButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 #B4B4B4, stop:1 #494949); border:none;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); color:white;}");
    switch(flag) {
    case 11:
        ui->toolButton_11->setStyleSheet("QToolButton{border:none;"
                                         "background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
        break;
    case 14:
        ui->toolButton_14->setStyleSheet("QToolButton{border:none;"
                                        "background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
        break;
    case 15:
        ui->toolButton_15->setStyleSheet("QToolButton{border:none;"
                                        "background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.857143, y2:0.857955, stop:0 rgba(76, 143, 255, 255), stop:1 rgba(255, 143, 133, 255)); border:none;}");
        break;
    }
}

void MainScreen::Opacity_ColorChang()
{
    ui->label_6->setStyleSheet("QLabel{color:#FFD3A7;}");
    ui->Slider->setStyleSheet("QSlider::handle:horizontal{border: 1px solid #494949; height:10px; width: 15px;"
                               "margin: -8px 0; border-radius: 8px; background-color:#FFD3A7; padding:-10px 0px;}"
                               "QSlider::groove:horizontal{border-radius:1px; border:none; height:5px; margin:0px; color:#FFD3A7;}"
                               "QSlider::sub-page{background: #FFD3A7;}"
                               "QSlider::add-page{background: rgb(70, 70, 70);}");
}
void MainScreen::on_Slider_valueChanged(int value)
{
    this->ui->Slider->setRange(0, 10);
    VR->obj_opacity_val = value / 10.0;

    Object_Mapping();
}


void MainScreen::on_Slider_2_valueChanged(int value)
{
    this->ui->Slider_2->setRange(0, 10);
    VR->bdr_opacity_val = value / 10.0;

    Boundary_Mapping();
}

void MainScreen::on_doubleSpinBox_valueChanged(double arg1)
{
    VR->rotation_del = arg1;
}

void MainScreen::on_doubleSpinBox_2_valueChanged(double arg1)
{
    VR->translation_del = arg1;
}

void MainScreen::on_doubleSpinBox_3_valueChanged(double arg1)
{
    VR->zoom_val = arg1;
}

void MainScreen::on_toolButton_2_clicked(){
}

void MainScreen::on_toolButton_3_clicked(){
}

void MainScreen::on_toolButton_4_clicked(){
    QString dir=QFileDialog::getOpenFileName(this, "file", QDir::currentPath());
    if (dir != NULL)
    {
        std::string link=dir.toStdString();
        VR->stl_link = link;
        Load_Stl(VR->stl_link);
        VR->File_State=1;
        renderer->ResetCamera();
        renderWindow->Render();

        if(VR->File_State == 1)
        {
            Opacity_ColorChang();
        }
    }
}

void MainScreen::on_toolButton_5_clicked(){
    renderer->GetActiveCamera()->Zoom(VR->zoom_val);
    mapping();
}

void MainScreen::on_toolButton_6_clicked(){
    renderer->GetActiveCamera()->Zoom(1.0/VR->zoom_val);
    mapping();
}

void MainScreen::on_toolButton_7_clicked(){
}

void MainScreen::on_toolButton_8_clicked(){
    QString selFilter="All files (*.*)";
    QString outdir=QFileDialog::getSaveFileName(this,"Save file",QDir::currentPath(),
                                                "STL files (*.stl);;"
                                                "VTK files (*.vtk);;"
                                                "VTU files (*.vtu);;"
                                                "OBJ files (*.obj);;"
                                                "All files (*.*)", &selFilter);

    if (outdir!=NULL)
    {
        std::string url=outdir.toStdString();

//        vtkNew<vtkOBJExporter> exporter;
//        std::stringstream comment;
//        exporter->SetOBJFileComment(comment.str().c_str());
//        exporter->SetOBJFileComment(comment.str().c_str());
//        exporter->SetActiveRenderer(renderer);
//        exporter->SetRenderWindow(renderWindow);
//        exporter->SetFilePrefix("outfile.obj");
//        exporter->Write();

//        vtkNew<vtkOBJWriter> objWriter;
//        objWriter->SetFileName(url.c_str());
//        objWriter->SetInputConnection(pTransformFilter->GetOutputPort());
//        objWriter->Write();

        stlWriter->SetFileName(url.c_str());
        stlWriter->SetInputConnection(pTransformFilter->GetOutputPort());
        stlWriter->Write();
    }
}

void MainScreen::on_toolButton_11_clicked(){
    data=0;
    Change_btn_fn(11);
}

void MainScreen::on_toolButton_12_clicked(){ //+
    if(chflag==1) //object
    {
        if(state==1) //rotation
        {
            if (data==0)
            {
                VR->obj_rotation_x+=VR->rotation_del;
                Turn_Stl(VR->rotation_del);
                qDebug()<<"rotation_del : "<<VR->rotation_del;
                qDebug()<<"object rotation x : "<<VR->obj_rotation_x;
            }
            else if (data==1)
            {
                VR->obj_rotation_y+=VR->rotation_del;
                Turn_Stl(VR->rotation_del);
                qDebug()<<"rotation_del : "<<VR->rotation_del;
                qDebug()<<"object rotation y : "<<VR->obj_rotation_y;
            }
            else if (data==2)
            {
                VR->obj_rotation_z+=VR->rotation_del;
                Turn_Stl(VR->rotation_del);
                qDebug()<<"rotation_del : "<<VR->rotation_del;
                qDebug()<<"object rotation z : "<<VR->obj_rotation_z;
            }
        }
        else if(state==2) //translation
        {
            Move_Stl(1);
        }
    }
    else if(chflag==2) //boundary
    {
        if (state == 1) //rotation
        {
            if (data==0)
            {
                VR->bdr_rotation_x+=VR->rotation_del;
                Turn_Stl(VR->rotation_del);
                qDebug()<<"rotation_del : "<<VR->rotation_del;
                qDebug()<<"boundary rotation x : "<<VR->bdr_rotation_x;
            }
            else if (data==1)
            {
                VR->bdr_rotation_y+=VR->rotation_del;
                Turn_Stl(VR->rotation_del);
                qDebug()<<"rotation_del : "<<VR->rotation_del;
                qDebug()<<"boundary rotation y : "<<VR->bdr_rotation_y;
            }
            else if (data==2)
            {
                VR->bdr_rotation_z+=VR->rotation_del;
                Turn_Stl(VR->rotation_del);
                qDebug()<<"rotation_del : "<<VR->rotation_del;
                qDebug()<<"boundary rotation z : "<<VR->bdr_rotation_z;
            }
        }
        else if(state==2) //translation
        {
            Move_Stl(1);
        }
    }
}

void MainScreen::on_toolButton_13_clicked(){ //-
    if(chflag==2) //boundary
    {
        if (state==1) //rotation
        {
            if (data==0){
                VR->bdr_rotation_x-=VR->rotation_del;
                Turn_Stl(-VR->rotation_del);
            }
            else if(data==1){
                VR->bdr_rotation_y-=VR->rotation_del;
                Turn_Stl(-VR->rotation_del);
            }
            else if(data==2){
                VR->bdr_rotation_z-=VR->rotation_del;
                Turn_Stl(-VR->rotation_del);
            }
        }
        else if(state==2) //translation
        {
            Move_Stl(-1);
        }
    }
    else if(chflag==1) //object
    {
        if (state==1) //rotation
        {
            if (data==0){
                VR->obj_rotation_x-=VR->rotation_del;
                Turn_Stl(-VR->rotation_del);
            }
            else if(data==1){
                VR->obj_rotation_y-=VR->rotation_del;
                Turn_Stl(-VR->rotation_del);
            }
            else if(data==2){
                VR->obj_rotation_z-=VR->rotation_del;
                Turn_Stl(-VR->rotation_del);
            }
        }
        else if(state==2) //translation
        {
            Move_Stl(-1);
        }
    }
}

void MainScreen::on_toolButton_14_clicked(){
    data=1;
    Change_btn_fn(14);
}

void MainScreen::on_toolButton_15_clicked(){
    data=2;
    Change_btn_fn(15);
}

void MainScreen::on_toolButton_16_clicked(){
    chflag=1;
    ui->toolButton_17->setStyleSheet("QToolButton{border:none; background-color:#494949;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
    ui->toolButton_16->setStyleSheet("QToolButton{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
}

void MainScreen::on_toolButton_17_clicked(){
    chflag=2;
    ui->toolButton_16->setStyleSheet("QToolButton{border:none; background-color:#494949;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
    ui->toolButton_17->setStyleSheet("QToolButton{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
}

void MainScreen::on_toolButton_18_clicked()
{
    ui->toolButton_19->setStyleSheet("QToolButton{border:none; background-color:#494949;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
    ui->toolButton_18->setStyleSheet("QToolButton{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
    state=1;
    VR->RButton=1;
}


void MainScreen::on_toolButton_19_clicked()
{
    ui->toolButton_18->setStyleSheet("QToolButton{border:none; background-color:#494949;}"
                                     "QToolButton:hover{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");
    ui->toolButton_19->setStyleSheet("QToolButton{border:none; background-color:qlineargradient(spread:pad, x1:0.153409, y1:0.147727, x2:0.664773, y2:0.682, stop:0 rgba(255, 187, 147, 253), stop:1 rgba(255, 143, 133, 255));}");

    state=2;
    VR->TButton=1;
}

void MainScreen::Setting_Button(){
    double SX=fullScreenSizeX*aspect_ratioButtonSize;
    double SXD=fullScreenSizeX*aspect_ratioButtonSize*0.8;
    double SY=fullScreenSizeY*ratioButtonSizeY;

    this->ui->toolButton_4->setGeometry(SX*0.2,fullScreenSizeY*0.01,SX/3,SY);
    this->ui->toolButton_3->setGeometry(SX*0.7,fullScreenSizeY*0.01,SX/3,SY);
    this->ui->toolButton_2->setGeometry(SX*1.2,fullScreenSizeY*0.01,SX/2.5,SY);
    this->ui->comboBox->setGeometry(SX*1.7,fullScreenSizeY*0.01,SX/1.5,SY);

    this->ui->line->setGeometry(0,fullScreenSizeY*0.06,fullScreenSizeX*0.25,3);

    this->ui->toolButton_5->setGeometry(SX*0.1,fullScreenSizeY*0.11,SX*0.45,SY*0.6);
    this->ui->toolButton_6->setGeometry(SX*0.545,fullScreenSizeY*0.11,SX*0.45,SY*0.6);
    this->ui->label->setGeometry(SX,fullScreenSizeY*0.08,SX*0.8,SY*0.5);
    this->ui->doubleSpinBox_3->setGeometry(SX*0.994,fullScreenSizeY*0.11,SX*0.45,SY*0.6);
    this->ui->toolButton_8->setGeometry(SX*1.74,fullScreenSizeY*0.11,SX*0.6,SY*0.6);

    this->ui->toolButton_9->setGeometry(SX*0.1, fullScreenSizeY*0.18, SX*1.12, SY*0.7);
    this->ui->toolButton_10->setGeometry(SX*1.22, fullScreenSizeY*0.18, SX*1.12, SY*0.7);
    this->ui->toolButton_20->setGeometry(SX*0.1, fullScreenSizeY*0.25, SX*1.12, SY*0.7);
    this->ui->toolButton_21->setGeometry(SX*1.22, fullScreenSizeY*0.25, SX*1.12, SY*0.7);
    this->ui->toolButton_22->setGeometry(SX*0.1, fullScreenSizeY*0.32, SX*1.12, SY*0.7);
    this->ui->toolButton_23->setGeometry(SX*1.22, fullScreenSizeY*0.32, SX*1.12, SY*0.7);

    this->ui->toolButton_11->setGeometry(SX*4.5,fullScreenSizeY*0.61,SX*0.5,SY*0.6);
    this->ui->toolButton_16->setGeometry(SX*5.01,fullScreenSizeY*0.61,SX*0.5,SY*0.6);
    this->ui->toolButton_17->setGeometry(SX*5.515,fullScreenSizeY*0.61,SX*0.5,SY*0.6);

    this->ui->toolButton_14->setGeometry(SX*4.5,fullScreenSizeY*0.6405,SX*0.5,SY*0.6);
    this->ui->toolButton_18->setGeometry(SX*5.01,fullScreenSizeY*0.6405,SX*0.5,SY*0.6);
    this->ui->toolButton_19->setGeometry(SX*5.515,fullScreenSizeY*0.6405,SX*0.5,SY*0.6);

    this->ui->toolButton_15->setGeometry(SX*4.5,fullScreenSizeY*0.671,SX*0.5,SY*0.6);
    this->ui->toolButton_12->setGeometry(SX*5.01,fullScreenSizeY*0.671,SX*0.5,SY*0.6);
    this->ui->toolButton_13->setGeometry(SX*5.515,fullScreenSizeY*0.671,SX*0.5,SY*0.6);

    this->ui->label_5->setGeometry(SX*6.5,fullScreenSizeY*0.6,SX*0.4,SY*0.4);

    this->ui->label_7->setGeometry(SX*6.2,fullScreenSizeY*0.63,SX*0.4,SY*0.4);
    this->ui->label_8->setGeometry(SX*6.2,fullScreenSizeY*0.66,SX*0.4,SY*0.4);

    this->ui->doubleSpinBox->setGeometry(SX*6.7,fullScreenSizeY*0.63,SX*0.4,SY*0.4);
    this->ui->doubleSpinBox_2->setGeometry(SX*6.7,fullScreenSizeY*0.66,SX*0.4,SY*0.4);

    this->ui->label_6->setGeometry(SX*2.9,fullScreenSizeY*0.62,SX*0.7,SY*0.4 );
    this->ui->label_9->setGeometry(SX*2.9,fullScreenSizeY*0.66,SX*0.7,SY*0.4 );
    this->ui->Slider->setGeometry(SX*3.55,fullScreenSizeY*0.62,SX*0.75,SY*0.4);
    this->ui->Slider_2->setGeometry(SX*3.55, fullScreenSizeY*0.66, SX*0.75, SY*0.4);

    this->ui->CarStl->setGeometry(SX*2.5, 0, fullScreenSizeX/2, fullScreenSizeY/1.8);
    this->ui->openGLWidget_2->setGeometry(SX*7,fullScreenSizeY*0.5,SY*1.5,SY*1.5);

    this->ui->pushButton->setGeometry(SX*0.1, fullScreenSizeY*0.6, SX/3.5, SY);
    this->ui->pushButton_2->setGeometry(SX*0.6, fullScreenSizeY*0.6, SX/3.5, SY);
    this->ui->pushButton_3->setGeometry(SX*1.1, fullScreenSizeY*0.6, SX/3.5, SY);
    this->ui->pushButton_4->setGeometry(SX*1.6, fullScreenSizeY*0.6, SX/3.5, SY);
    this->ui->pushButton_5->setGeometry(SX*2.1, fullScreenSizeY*0.6, SX/3.5, SY);
    this->ui->pushButton_6->setGeometry(SX*0.1, fullScreenSizeY*0.7, SX/3.5, SY);
    this->ui->pushButton_7->setGeometry(SX*0.6, fullScreenSizeY*0.7, SX/3.5, SY);
    this->ui->pushButton_8->setGeometry(SX*1.1, fullScreenSizeY*0.7, SX/3.5, SY);
    this->ui->pushButton_9->setGeometry(SX*1.6, fullScreenSizeY*0.7, SX/3.5, SY);
    this->ui->pushButton_10->setGeometry(SX*2.1, fullScreenSizeY*0.7, SX/3.5, SY);
}

void MainScreen::on_comboBox_currentIndexChanged(int index)
{
    connect(ui->comboBox, SIGNAL(currentIndexChanged(index)), this, SLOT(on_comboBox_currentIndexChanged(index)));
    if(index == 1)
    {
        stage = new Stage;
        stage->show();

        scflag=1;

        stage->widgetcurrentposition = widgetcurrentposition;

        widgetcontrolpanel = new WidgetControlPanel;
        widgetcontrolpanel->stage = stage;
        widgetcontrolpanel->show();

        widgetmenupanel = new WidgetMenuPanel;
        widgetmenupanel->stage = stage;
        widgetmenupanel->show();

        this->close();
    }
    else if(index == 2)
    {

    }
    else if (index==3)
    {
        btnVL = 0;

        QColor initialColor = palette().color(QPalette::Background);
        QColor color = QColorDialog::getColor(initialColor, this, "Select Color");

        if(color.isValid())
            {
                QString qss = QString("background-color:%1; border:none;").arg(color.name());
                ui->toolButton_5->setStyleSheet(qss);
                ui->toolButton_6->setStyleSheet(qss);
                ui->toolButton_8->setStyleSheet(qss);

                ui->toolButton_11->setStyleSheet(qss);
                ui->toolButton_14->setStyleSheet(qss);
                ui->toolButton_15->setStyleSheet(qss);

                ui->toolButton_12->setStyleSheet(qss);
                ui->toolButton_13->setStyleSheet(qss);
                ui->toolButton_16->setStyleSheet(qss);
                ui->toolButton_17->setStyleSheet(qss);
                ui->toolButton_18->setStyleSheet(qss);
                ui->toolButton_19->setStyleSheet(qss);
            }
    }
}

void MainScreen::Button_Color(int flag)
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

void MainScreen::on_pushButton_clicked()
{
    Button_Color(1);

    camera->SetPosition(0,0,900);
    renderWindow->Render();
//    camera->SetFocalPoint(0, 0, 0);
    mapping();
}


void MainScreen::on_pushButton_2_clicked()
{
    Button_Color(2);

    camera->SetPosition(0.0000000000000000001,900,0);
    renderWindow->Render();
//    camera->SetFocalPoint(0, 0, 0);
    mapping();
}


void MainScreen::on_pushButton_3_clicked()
{
    Button_Color(3);

    camera->SetPosition(900,0,0);
    renderWindow->Render();
//    camera->SetFocalPoint(0, 0, 0);
    mapping();
}


void MainScreen::on_pushButton_4_clicked()
{
    Button_Color(4);
}


void MainScreen::on_pushButton_5_clicked()
{
    Button_Color(5);
    camera->SetPosition(20,20,20);
    renderWindow->Render();
}


void MainScreen::on_pushButton_6_clicked()
{
    Button_Color(6);
    camera->SetPosition(1,1,1);
    qDebug() << "Camera Position : (1, 1, 1)";
    renderWindow->Render();
}


void MainScreen::on_pushButton_7_clicked()
{
    Button_Color(7);
    camera->SetPosition(2,2,2);
    qDebug() << "Camera Position : (2, 2, 2)";
    renderWindow->Render();
}


void MainScreen::on_pushButton_8_clicked()
{
    Button_Color(8);
    camera->SetPosition(3,3,3);
    qDebug() << "Camera Position : (3, 3, 3)";
    renderWindow->Render();
}


void MainScreen::on_pushButton_9_clicked()
{
    Button_Color(9);
    camera->SetPosition(4, 4, 4);
    qDebug() << "Camera Position : (4, 4, 4)";
    renderWindow->Render();
}


void MainScreen::on_pushButton_10_clicked()
{
    Button_Color(10);
    camera->SetPosition(10,10,10);
    camera->SetFocalPoint(0, 0, 10);
    qDebug() << "Camera Position : (10, 10, 10)";
    renderWindow->Render();
}

void MainScreen::on_toolButton_23_clicked()
{
    reader->SetFileName(VR->stl_link.c_str());
    reader->Update();

    double isoValue = 0.5;
    double bounds[6];

    reader->GetOutput()->GetBounds(bounds);

    for(unsigned int i = 0; i<6; i+=2)
    {
        double range=bounds[i+1]-bounds[i];
        bounds[i]=bounds[i]-0.1*range;
        bounds[i+1]=bounds[i+1]+0.1*range;
    }

    voxelModeller->SetSampleDimensions(80, 80, 80);
    voxelModeller->SetModelBounds(bounds);
    voxelModeller->SetScalarTypeToFloat();
    voxelModeller->SetMaximumDistance(0.1);

    voxelModeller->SetInputConnection(reader->GetOutputPort());
    voxelModeller->Update();

    volume->DeepCopy(voxelModeller->GetOutput());

    surface->SetInputData(volume);
    surface->ComputeNormalsOn();
    surface->SetValue(0, isoValue);

    mapper->SetInputConnection(reader->GetOutputPort());
    mapper->SetInputConnection(surface->GetOutputPort());
    mapper->ScalarVisibilityOff();

    actor->SetMapper(mapper);
    size = actor->GetLength();
    renderer->AddActor(actor);
    renderWindow->AddRenderer(renderer);

    vtkNew<vtkOBJWriter> objwriter;
    objwriter->SetFileName("/Users/kist/Documents/PSI/STL/drone.obj");
    objwriter->SetInputConnection(surface->GetOutputPort());
    objwriter->Write();

//    vtkNew<vtkPoints> voxelPoints;
//    voxelPoints->SetNumberOfPoints(8);
//    voxelPoints->InsertPoint(0, 0, 0, 0);
//    voxelPoints->InsertPoint(1, 1, 0, 0);
//    voxelPoints->InsertPoint(2, 0, 1, 0);
//    voxelPoints->InsertPoint(3, 1, 1, 0);
//    voxelPoints->InsertPoint(4, 0, 0, 1);
//    voxelPoints->InsertPoint(5, 1, 0, 1);
//    voxelPoints->InsertPoint(6, 0, 1, 1);
//    voxelPoints->InsertPoint(7, 1, 1, 1);

//    vtkNew<vtkVoxel> aVoxel;
//    aVoxel->GetPointIds()->SetId(0, 0);
//    aVoxel->GetPointIds()->SetId(1, 1);
//    aVoxel->GetPointIds()->SetId(2, 2);
//    aVoxel->GetPointIds()->SetId(3, 3);
//    aVoxel->GetPointIds()->SetId(4, 4);
//    aVoxel->GetPointIds()->SetId(5, 5);
//    aVoxel->GetPointIds()->SetId(6, 6);
//    aVoxel->GetPointIds()->SetId(7, 7);

//    vtkNew<vtkUnstructuredGrid> aVoxelGrid;
//    aVoxelGrid->InsertNextCell(aVoxel->GetCellType(), aVoxel->GetPointIds());
//    aVoxelGrid->SetPoints(voxelPoints);

//    vtkNew<vtkDataSetMapper> aVoxelMapper;
//    aVoxelMapper->SetInputData(aVoxelGrid);

//    vtkNew<vtkActor> aVoxelActor;
//    aVoxelActor->SetMapper(aVoxelMapper);
//    aVoxelActor->GetProperty()->SetDiffuseColor(1, 0, 0);

//    vtkNew<vtkRenderer> ren;
//    vtkNew<vtkRenderWindow> renWin;
//    vtkNew<vtkRenderWindowInteractor> iren;
//    iren->SetRenderWindow(renWin);
//    ren->AddActor(aVoxelActor);

//    iren->Initialize();
//    renWin->Render();
//    iren->Start();
}
