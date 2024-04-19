#ifndef WIDGETDIRECTCHANGE_H
#define WIDGETDIRECTCHANGE_H

#include <QWidget>
#include <QDesktopWidget>

#include "stage.h"
#include "mainscreen.h"
#include "state_variable.h"

namespace Ui {
class WidgetDirectChange;
}

class WidgetDirectChange : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetDirectChange(QWidget *parent = nullptr);
    ~WidgetDirectChange();
    double Tran_value(double x,double y,double z);
    double Rotate_value(double x,double y,double z);
    double Scale_value(double x,double y,double z);
    Stage *stage;
    MainScreen *mainscreen;
    State_variable *VR;

    int state=0;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

    void on_lineEdit_4_textEdited(const QString &arg1);

    void on_lineEdit_5_textEdited(const QString &arg1);

    void on_lineEdit_6_textEdited(const QString &arg1);

    void on_lineEdit_7_textEdited(const QString &arg1);

    void on_lineEdit_8_textEdited(const QString &arg1);

    void on_lineEdit_9_textEdited(const QString &arg1);

    void on_lineEdit_10_textEdited(const QString &arg1);

    void on_lineEdit_11_textEdited(const QString &arg1);

    void on_lineEdit_12_textEdited(const QString &arg1);

    void on_lineEdit_13_textEdited(const QString &arg1);

    void on_lineEdit_14_textEdited(const QString &arg1);

    void on_lineEdit_15_textEdited(const QString &arg1);

    void on_lineEdit_16_textEdited(const QString &arg1);

    void on_lineEdit_17_textEdited(const QString &arg1);

    void on_lineEdit_18_textEdited(const QString &arg1);

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::WidgetDirectChange *ui;

    double tx=0,ty=0,tz=0;
    double rx=0,ry=0,rz=0;
    double sx=1,sy=1,sz=1;
    double cx=0,cy=0,cz=0;

    int po1=0, po2=0, po3=0;
    int fo1=0, fo2=0, fo3=0;

    QDesktopWidget desk;
    int wid=desk.width();
    int hei=desk.height();
};

#endif // WIDGETDIRECTCHANGE_H
