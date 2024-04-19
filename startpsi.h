#ifndef STARTPSI_H
#define STARTPSI_H

#include <QWidget>
#include "mainscreen.h"
#include "subscreen.h"
#include "widgetcurrentposition.h"
#include "widgetdirectchange.h"
#include "stage.h"
#include "widgetcontrolpanel.h"
#include "widgetmenupanel.h"
#include <QDebug>
#include "functionkey.h"
#include <fstream>
#include "state_variable.h"
#include "logtext.h"

namespace Ui {
class StartPSI;
}

class StartPSI : public QWidget
{
    Q_OBJECT

public:
    explicit StartPSI(QWidget *parent = nullptr);
    ~StartPSI();
    Stage *stage;
    MainScreen *mainscreen;
    int state=0;
    int flag;
    double tmp[3];
    double *pt;
    State_variable *VR;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::StartPSI *ui;
    int cnt=0;
    int STL = 0;
    std::string link;
    LogText *Log = new LogText;
    SubScreen *subscreen;
    FunctionKey *functionkey;
    WidgetCurrentPosition *widgetcurrentposition;
    WidgetDirectChange *widgetdirectchange;
    WidgetControlPanel *widgetcontrolpanel;
    WidgetMenuPanel *widgetmenupanel;
    QDesktopWidget desk;
    int wid=desk.width();
    int hei=desk.height();
    vtkSmartPointer<vtkTransform> target_pTransform = vtkSmartPointer<vtkTransform>::New();


    void MainScreen_Boundary();
    void MainScreen_Object();
    void MainScreen_Object_Scale();
    void MainScreen_Boundary_Size();
    void MainScreen_Camera();

    void Stage_Boundary();
    void Stage_Object();
    void Stage_Object_Scale();
    void Stage_Boundary_Size();
    void Stage_Camera();
};

#endif // STARTPSI_H
