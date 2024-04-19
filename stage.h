#ifndef STAGE_H
#define STAGE_H

#include <QWidget>

#include <QOpenGLWidget>
#include <QDebug>
#include <QFile>
#include <QMenu>
#include <QString>

#include <vtkCamera.h>
#include <vtkNamedColors.h>
#include <vtkNew.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper.h>
#include <vtkProperty.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkSTLReader.h>
#include <vtkTransform.h>
#include <vtkTransformPolyDataFilter.h>
#include <vtkFloatArray.h>
#include <vtkCubeSource.h>
#include <vtkSphereSource.h>
#include <vtkActor.h>
#include <vtkPointSource.h>
#include <array>
#include <vtkSTLWriter.h>
#include <vtkDataSetSurfaceFilter.h>
#include <vtkIdList.h>
#include <vtkDataSetMapper.h>
#include <vtkCellArray.h>
#include <vtkCellData.h>
#include <vtkDataArray.h>
#include <vtkPoints.h>
#include <vtkPolyhedron.h>
#include <vtkUnstructuredGrid.h>
#include <vtkGeometryFilter.h>
#include <vtkUnstructuredGridReader.h>
#include <QDesktopWidget>
#include "widgetcurrentposition.h"
#include "state_variable.h"

namespace Ui {
class Stage;
}

class Stage : public QWidget
{
    Q_OBJECT

public:
    explicit Stage(QWidget *parent = nullptr);
    ~Stage();
    WidgetCurrentPosition *widgetcurrentposition;
    State_variable *VR;

    int filestate=0;

    int scaleX=0, scaleY=0, scaleZ=0;

    double x=0,y=0,z=0,tx=0,ty=0,tz=0;
    double del=0;double tdel=0;
    double cubeX=0, cubeY=0, cubeZ=0, CubeTransX=0, CubeTransY=0, CubeTransZ=0;
    double vl = 0.1;
    double vl2=1;

    QColor initialColor;
    QColor color;

    double xlength;
    double ylength;
    double zlength;

    int toprightX;
    int toprightY;
    QString dir;
    std::string link;

    void Trans_Stl(double a,double b,double c);
    void Rotate_Stl(double a,double b,double c);
    void Scale_Stl(double a,double b,double c);
    void Size_Cube(double a,double b,double c);

    void Object_Mapping();
    void Boundary_Mapping();
    void Object_Turn(double a);
    void Object_Trans(double a, double b, double c);
    void Object_Rotate(double a, double b, double c);
    void Object_Scale(double a, double b, double c);

    void Boundary_Turn(char g, double a);

    void fun1();
    void fun2();
    void fun3();

    vtkCamera* camera;
    void mapping();
    double size;
    int data;
    int chflag=1;
    int state;
    double tmp[3]={0};
    void Move_Stl(int a);
    void Up_btn_fn(int flag);
    void Down_btn_fn(int flag);
    void Change_btn_fn(int flag);
    QDesktopWidget desk;
    int fullScreenSizeX=desk.width();
    int fullScreenSizeY=desk.height();
    void Turn_Stl(double a);
    double ratioButtonSizeY=0.05;
    double aspect_ratioButtonSize=0.1;

    double set_ratioButtonSizeY=10;
    double aspect_set_ratioButtonSize=10;

    int btnVL;

    void Load_Stl(std::string url);

    void Red_Point();
    void Show_Cube();

    void Change_Btn_Size();

    void Print(double i,double  j,double k);
    void Print2(double i, double j, double k);
    void Printtran(double i,double  j,double k);
    void Printtran2(double i, double j, double k);
    void PrintScale(double i, double j, double k);
    void PrintSize(double i, double j, double k);

    void Camera_Position(double a, double b, double c);
    void Camera_Focal(double a, double b, double c);

    void paintGL();
    void initializeGL();
    void resizeGL(int w, int h);

    int i;
    double *pt;

    void active1();
    void active2();

    vtkNew<vtkCubeSource> cube; //Load_cube used

    vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New(); //자동차 렌더러
    vtkNew<vtkSTLWriter> stlWriter;
    vtkSmartPointer<vtkTransformPolyDataFilter> pTransformFilter = vtkSmartPointer<vtkTransformPolyDataFilter>::New();

    vtkSmartPointer<vtkTransform> pTransform = vtkSmartPointer<vtkTransform>::New();

    vtkNew<vtkGenericOpenGLRenderWindow> renderWindow; //자동차 렌더링 윈도우

    vtkSmartPointer<vtkTransform> pTransform_3 = vtkSmartPointer<vtkTransform>::New();
    vtkSmartPointer<vtkTransformPolyDataFilter> pTransformFilter_3 = vtkSmartPointer<vtkTransformPolyDataFilter>::New();

private:
    Ui::Stage *ui;

    QMenu *menu = new QMenu("Title");

    vtkNew<vtkNamedColors> colors;

    vtkNew<vtkCubeSource> small_cube[1000];
    vtkNew<vtkCubeSource> small_cube2[1000];
    vtkNew<vtkCubeSource> small_cube3[1000];
    vtkNew<vtkPolyDataMapper> cubeMapper;
    vtkNew<vtkPolyDataMapper> small_cubeMapper[1000];
    vtkNew<vtkPolyDataMapper> small_cubeMapper2[1000];
    vtkNew<vtkPolyDataMapper> small_cubeMapper3[1000];
    vtkNew<vtkActor> cubeActor;
    vtkNew<vtkActor> small_cubeActor[1000];
    vtkNew<vtkActor> small_cubeActor2[1000];
    vtkNew<vtkActor> small_cubeActor3[1000];

    vtkNew<vtkPointSource> src; //red_point used
    vtkNew<vtkPolyDataMapper> sphereMapper;
    vtkNew<vtkActor> sphereActor;

    vtkSmartPointer<vtkSTLReader> reader = vtkSmartPointer<vtkSTLReader>::New(); //자동차 리더
    vtkSmartPointer<vtkSTLReader> reader_3 = vtkSmartPointer<vtkSTLReader>::New(); //큐브 리더

    vtkSmartPointer<vtkPolyDataMapper> mapper = vtkSmartPointer<vtkPolyDataMapper>::New(); //자동차 매퍼
    vtkSmartPointer<vtkPolyDataMapper> mapper_3 = vtkSmartPointer<vtkPolyDataMapper>::New(); //큐브 매퍼

    vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New(); //자동차 액터
    vtkSmartPointer<vtkActor> actor_3 = vtkSmartPointer<vtkActor>::New(); //큐브 액터(자동차 렌더러에 연결)

    vtkNew<vtkPoints> points; //직육면체의 각 꼭지점 포인트
    vtkNew<vtkIdList> faces; //직육면체의 각 면. IdList로 faces > face0 이런식으로 사용
    vtkNew<vtkUnstructuredGrid> ugrid;
    vtkNew<vtkDataSetSurfaceFilter> DSSFilter;
    vtkNew<vtkPolyData> cubePoly;

    enum Columns
    {
        NAME, DESCRIPTION, MANUFACTURER
    };
    void getSerialPortList();
};

#endif // STAGE_H
