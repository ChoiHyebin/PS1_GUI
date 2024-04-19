#ifndef WIDGETCONTROLPANEL_H
#define WIDGETCONTROLPANEL_H

#include <QWidget>
#include <QDesktopWidget>
#include "stage.h"
#include "state_variable.h"

namespace Ui {
class WidgetControlPanel;
}

class WidgetControlPanel : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetControlPanel(QWidget *parent = nullptr);
    ~WidgetControlPanel();
    Stage *stage;
    State_variable *VR;

    void Opacity_ColorChange();

private slots:
    void on_toolButton_11_clicked();

    void on_toolButton_14_clicked();

    void on_toolButton_15_clicked();

    void on_toolButton_16_clicked();

    void on_toolButton_17_clicked();

    void on_toolButton_18_clicked();

    void on_toolButton_19_clicked();

    void on_toolButton_12_clicked();

    void on_toolButton_13_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_doubleSpinBox_2_valueChanged(double arg1);

    void on_Slider_valueChanged(int value);

    void on_Slider_2_valueChanged(int value);

private:
    Ui::WidgetControlPanel *ui;

    void settingButton();

    void Change_btn_fn(int flag);

    double ratioButtonSizeY=0.05;
    double aspect_ratioButtonSize=0.1;
    QDesktopWidget desk;
    int fullScreenSizeX=desk.width();
    int fullScreenSizeY=desk.height();
};

#endif // WIDGETCONTROLPANEL_H
