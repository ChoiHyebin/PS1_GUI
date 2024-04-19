#ifndef MAINSCREEN_H
#define MAINSCREEN_H

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
#include "widgetcurrentposition.h"
#include <vtkUnstructuredGridReader.h>
#include <QDesktopWidget>
#include "stage.h"
#include "widgetcontrolpanel.h"
#include "widgetmenupanel.h"
#include <QColorDialog>
#include "state_variable.h"
#include <vtkImageData.h>
#include <vtkVoxelModeller.h>
#include <vtkMarchingCubes.h>
#include <vtkOBJWriter.h>
#include <vtkXMLUnstructuredGridWriter.h>
#include <vtkPolyDataWriter.h>
#include <vtkOBJExporter.h>
#include <vtkVoxel.h>


namespace Ui {
class MainScreen;
}

class MainScreen : public QWidget
{
    Q_OBJECT

public:
    explicit MainScreen(QWidget *parent = nullptr);
    ~MainScreen();

    Stage *stage;
    WidgetCurrentPosition *widgetcurrentposition;
    State_variable *VR;

    void Load_Stl(std::string url);

    int scaleX=0, scaleY=0, scaleZ=0;
    double x=0,y=0,z=0,tx=0,ty=0,tz=0;
    double del=0;double tdel=0;
    double cubeX=0, cubeY=0, cubeZ=0, CubeTransX=0, CubeTransY=0, CubeTransZ=0;
    double vl = 1;
    double vl2 = 0.1;

    void Camera_Position(double a, double b, double c);
    void Camera_Focal(double a, double b, double c);

    int filestate = 0;

    int scflag;

    QColor initialColor;
    QColor color;

    double xlength;
    double ylength;
    double zlength;

    int toprightX;
    int toprightY;
    QString dir;
    std::string url;

    void Delivery();

    void Trans_Stl(double a,double b,double c);
    void Rotate_Stl(double a,double b,double c);
    void Scale_Stl(double a,double b,double c);
    void Size_Cube(double a,double b,double c);

    void Move_Stl(int a);

    vtkCamera* camera;
    void mapping();

    vtkNew<vtkNamedColors> colors;

    vtkNew<vtkCubeSource> cube; //Load_cube used
    vtkNew<vtkPolyDataMapper> cubeMapper;
    vtkNew<vtkActor> cubeActor;
    vtkNew<vtkCubeSource> small_cube[1000];
    vtkNew<vtkCubeSource> small_cube2[1000];
    vtkNew<vtkCubeSource> small_cube3[1000];
    vtkNew<vtkPolyDataMapper> small_cubeMapper[1000];
    vtkNew<vtkPolyDataMapper> small_cubeMapper2[1000];
    vtkNew<vtkPolyDataMapper> small_cubeMapper3[1000];
    vtkNew<vtkActor> small_cubeActor[1000];
    vtkNew<vtkActor> small_cubeActor2[1000];
    vtkNew<vtkActor> small_cubeActor3[1000];

    vtkNew<vtkPointSource> src; //red_point used
    vtkNew<vtkPolyDataMapper> sphereMapper;
    vtkNew<vtkActor> sphereActor;

    vtkSmartPointer<vtkSTLReader> reader = vtkSmartPointer<vtkSTLReader>::New(); //자동차 리더

    vtkSmartPointer<vtkPolyDataMapper> mapper = vtkSmartPointer<vtkPolyDataMapper>::New(); //자동차 매퍼

    vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New(); //자동차 액터

    vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New(); //자동차 렌더러
    vtkSmartPointer<vtkRenderer> renderer_2 = vtkSmartPointer<vtkRenderer>::New(); //좌표 렌더러


    vtkNew<vtkGenericOpenGLRenderWindow> renderWindow; //자동차 렌더링 윈도우
    vtkNew<vtkSTLWriter> stlWriter;

    vtkNew<vtkImageData> volume;
    vtkNew<vtkVoxelModeller> voxelModeller;
    vtkNew<vtkMarchingCubes> surface;

    vtkSmartPointer<vtkTransform> pTransform = vtkSmartPointer<vtkTransform>::New();
    vtkSmartPointer<vtkTransformPolyDataFilter> pTransformFilter = vtkSmartPointer<vtkTransformPolyDataFilter>::New();
    vtkSmartPointer<vtkTransform> pTransform_3 = vtkSmartPointer<vtkTransform>::New();
    vtkSmartPointer<vtkTransformPolyDataFilter> pTransformFilter_3 = vtkSmartPointer<vtkTransformPolyDataFilter>::New();
    vtkSmartPointer<vtkTransform> cubeTransform[1000];
    vtkSmartPointer<vtkTransformPolyDataFilter> cubeTransformFilter[1000];

    vtkNew<vtkPoints> points; //직육면체의 각 꼭지점 포인트
    vtkNew<vtkIdList> faces; //직육면체의 각 면. IdList로 faces > face0 이런식으로 사용
    vtkNew<vtkUnstructuredGrid> ugrid;
    vtkNew<vtkDataSetSurfaceFilter> DSSFilter;
    vtkNew<vtkPolyData> cubePoly;

    void Object_Trans(double a, double b, double c);
    void Object_Rotate(double a, double b, double c);
    void Object_Scale(double a, double b, double c);
    void Object_Turn(double a);

    void Object_Mapping();
    void Boundary_Mapping();

    double tmp[3]={0};
    double *pt;

    void Opacity_ColorChang();

private slots:
    void on_toolButton_2_clicked();
    void on_toolButton_3_clicked();
    void on_toolButton_4_clicked();
    void on_toolButton_5_clicked();
    void on_toolButton_6_clicked();
    void on_toolButton_7_clicked();
    void on_toolButton_8_clicked();

    void on_toolButton_11_clicked();
    void on_toolButton_12_clicked();
    void on_toolButton_13_clicked();
    void on_toolButton_14_clicked();
    void on_toolButton_15_clicked();
    void on_toolButton_16_clicked(); //car
    void on_toolButton_17_clicked(); //cube
    void on_doubleSpinBox_valueChanged(double arg1);
    void on_doubleSpinBox_2_valueChanged(double arg1);
    void on_Slider_valueChanged(int value);

    void on_toolButton_18_clicked();
    void on_toolButton_19_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_Slider_2_valueChanged(int value);

    void on_doubleSpinBox_3_valueChanged(double arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_toolButton_23_clicked();

private:
    Ui::MainScreen *ui;
    WidgetMenuPanel *widgetmenupanel;
    WidgetControlPanel *widgetcontrolpanel;

    QDesktopWidget desk;
    QMenu *menu = new QMenu("Title");
    double size;
    int data;

    void Button_Color(int flag);

    int chflag=1;
    int state;
    void Change_btn_fn(int flag);
    int fullScreenSizeX=desk.width();
    int fullScreenSizeY=desk.height();
    void Turn_Stl(double a);
    double ratioButtonSizeY=0.05;
    double aspect_ratioButtonSize=0.1;

    double set_ratioButtonSizeY=10;
    double aspect_set_ratioButtonSize=10;

    int btnVL;

    int val;

    void Red_Point();
    void Show_Cube();

    void Change_Btn_Size();

    void Setting_Button();
    void Print(double i,double  j,double k);
    void Print2(double i, double j, double k);
    void Printtran(double i,double  j,double k);
    void Printtran2(double i, double j, double k);
    void PrintScale(double i, double j, double k);
    void PrintSize(double i, double j, double k);

    void paintGL();
    void initializeGL();
    void resizeGL(int w, int h);

    int i;

    enum Columns
    {
        NAME, DESCRIPTION, MANUFACTURER
    };
    void getSerialPortList();
};

#endif // MAINSCREEN_H
