#include "stage.h"
#include "ui_stage.h"

Stage::Stage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Stage)
{
    this->ui->setupUi(this);
    this->setWindowTitle("Stage");
    this->setGeometry(fullScreenSizeX*0.25, fullScreenSizeY*0.1,fullScreenSizeX*0.5,fullScreenSizeY*0.6);
    this->ui->CarStl->setGeometry(0,fullScreenSizeY*0.15+fullScreenSizeY*ratioButtonSizeY,fullScreenSizeX/2.5,fullScreenSizeY/3);

    this->setWindowTitle("Main Stage");

    Show_Cube();
//    std::cout << "here" << std::endl;
//    std::getchar();
    Red_Point();

    camera = renderer->GetActiveCamera();
    camera->SetPosition(0,0,7000);
    renderer->ResetCameraClippingRange();
    renderWindow->Render();

    QPoint position = mapToGlobal(this->frameGeometry().topLeft());
    QPoint position2 = mapToGlobal(this->frameGeometry().topRight());
    QPoint position3 = mapToGlobal(this->frameGeometry().bottomRight());
    QPoint position4 = mapToGlobal(this->frameGeometry().bottomLeft());
    qDebug()<<position<<position2<<position3<<position4;
}

Stage::~Stage()
{
    delete ui;
}

void Stage::mapping(){
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

void Stage::Object_Mapping()
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

void Stage::Boundary_Mapping()
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

void Stage::Turn_Stl(double a){
    if(data==0)
    {
        if(chflag==2)pTransform_3->RotateX(a);
        if(chflag==1)pTransform->RotateX(a);
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

void Stage::Object_Turn(double a)
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

void Stage::Boundary_Turn(char g, double a)
{
    switch(g){
        case 'x':
            pTransform->RotateX(a);
            break;
        case 'y':
        pTransform->RotateY(a);
            break;
        case 'z':
        pTransform->RotateZ(a);
            break;
    }

    Boundary_Mapping();
}

void Stage::Move_Stl(int a){
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

void Stage::Trans_Stl(double a,double b,double c){
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

void Stage::Object_Trans(double a, double b, double c)
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

void Stage::Size_Cube(double a,double b,double c){
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
}

void Stage::Rotate_Stl(double a,double b,double c){
    if(chflag==1){
    Turn_Stl(a-x);
    Turn_Stl(b-y);
    Turn_Stl(c-z);
    x=a;
    y=b;
    z=c;
    Print(x,y,z);
    }
    if(chflag==2){
        Turn_Stl(a-cubeX);
        Turn_Stl(b-cubeY);
        Turn_Stl(c-cubeZ);
        cubeX=a;
        cubeY=b;
        cubeZ=c;
    }
    mapping();
}

void Stage::Object_Rotate(double a, double b, double c)
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

void Stage::Scale_Stl(double a,double b,double c){
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

void Stage::Object_Scale(double a, double b, double c)
{
    VR->obj_x_length = a;
    VR->obj_y_length = b;
    VR->obj_z_length = c;
    pTransform->Scale(VR->obj_x_length,VR->obj_y_length,VR->obj_z_length);
    widgetcurrentposition->Scale_Info(VR->obj_x_length, VR->obj_y_length, VR->obj_z_length);
    Object_Mapping();
}

void Stage::Load_Stl(std::string url){
    reader->SetFileName(url.c_str());
    reader->Update();

    mapper->SetInputConnection(reader->GetOutputPort());
    actor->SetMapper(mapper);
    size = actor->GetLength();
    renderer->AddActor(actor);
    renderWindow->AddRenderer(renderer);

    this->ui->CarStl->SetRenderWindow(renderWindow);
}

void Stage::Red_Point(){
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

void Stage::Show_Cube(){
    cube->SetCenter(0, 0, 0);
    cube->SetXLength(6000);
    cube->SetYLength(2000);
    cube->SetZLength(2000);

    xlength = 6000;
    ylength = 2000;
    zlength = 2000;

    cubeMapper->SetInputConnection(cube->GetOutputPort());
    cubeActor->SetMapper(cubeMapper);
    cubeActor->GetProperty()->SetOpacity(0.1);
    cubeActor->GetProperty()->SetColor(colors->GetColor3d("Banana").GetData());
    renderer->AddActor(cubeActor);
    renderWindow->SetFullScreen(true);
    renderWindow->AddRenderer(renderer);
    this->ui->CarStl->SetRenderWindow(renderWindow);
    renderWindow->Render();
}

void Stage::Print(double i, double j, double k){
    widgetcurrentposition->Printre(i,j,k);
}
void Stage::Printtran(double i, double j, double k){
    widgetcurrentposition->Printtr(i,j,k);
}
void Stage::Print2(double i, double j, double k)
{
    widgetcurrentposition->Printre2(i, j, k);
}
void Stage::Printtran2(double i, double j, double k)
{
    widgetcurrentposition->Printtr2(i, j, k);
}

void Stage::PrintScale(double i, double j, double k)
{
    widgetcurrentposition->Scale_Info(i, j, k);
}

void Stage::PrintSize(double i, double j, double k)
{
    widgetcurrentposition->Size_Info(i, j, k);
}

void Stage::Camera_Position(double a, double b, double c)
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

void Stage::Camera_Focal(double a, double b, double c)
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

void Stage::active1()
{
    if(chflag==1) //object
    {
        if(state==1) //rotation
        {
            if (data==0)
            {
                VR->obj_rotation_x+=VR->rotation_del;
                Turn_Stl(VR->rotation_del);
            }
            else if (data==1)
            {
                VR->obj_rotation_y+=VR->rotation_del;
                Turn_Stl(VR->rotation_del);
            }
            else if (data==2)
            {
                VR->obj_rotation_z+=VR->rotation_del;
                Turn_Stl(VR->rotation_del);
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
            }
            else if (data==1)
            {
                VR->bdr_rotation_y+=VR->rotation_del;
                Turn_Stl(VR->rotation_del);
            }
            else if (data==2)
            {
                VR->bdr_rotation_z+=VR->rotation_del;
                Turn_Stl(VR->rotation_del);
            }
        }
        else if(state==2) //translation
        {
            Move_Stl(1);
        }
    }
}

void Stage::active2()
{
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
