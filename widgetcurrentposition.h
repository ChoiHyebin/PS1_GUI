#ifndef WIDGETCURRENTPOSITION_H
#define WIDGETCURRENTPOSITION_H

#include <QWidget>
#include <QDebug>
#include <QDesktopWidget>

namespace Ui {
class WidgetCurrentPosition;
}

class WidgetCurrentPosition : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetCurrentPosition(QWidget *parent = nullptr);
    ~WidgetCurrentPosition();
    void Printre(double x,double y,double z);
    void Printtr(double tx,double ty,double tz);
    void Printre2(double xx, double yy, double zz);
    void Printtr2(double txx, double tyy, double tzz);
    void Scale_Info(double aa, double bb, double cc);
    void Size_Info(double s1, double s2, double s3);
    void Camera_Position(double po1, double po2, double po3);
    void Camera_Focal(double fo1, double fo2, double fo3);

private:
    Ui::WidgetCurrentPosition *ui;
    double x=0,y=0,z=0,d=0,arg=0;
    QDesktopWidget desk;
    int wid=desk.width();
    int hei=desk.height();
};

#endif // WIDGETCURRENTPOSITION_H
