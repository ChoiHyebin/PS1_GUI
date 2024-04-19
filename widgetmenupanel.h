#ifndef WIDGETMENUPANEL_H
#define WIDGETMENUPANEL_H

#include <QWidget>
#include <QDesktopWidget>
#include "stage.h"

#include "subscreen.h"
#include "functionkey.h"
#include "widgetcurrentposition.h"
#include "widgetcontrolpanel.h"
#include "state_variable.h"

namespace Ui {
class WidgetMenuPanel;
}

class WidgetMenuPanel : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetMenuPanel(QWidget *parent = nullptr);
    ~WidgetMenuPanel();
    Stage *stage;
    SubScreen *subscreen;
    WidgetCurrentPosition *wcrtp;
    WidgetControlPanel *wcp;
    FunctionKey *funk;
    State_variable *VR;

    double val;

    std::string url;


private slots:
    void on_toolButton_4_clicked();
    void on_toolButton_8_clicked();
    void on_toolButton_5_clicked();
    void on_toolButton_6_clicked();
    void on_toolButton_9_clicked();
    void on_toolButton_10_clicked();
    void on_toolButton_11_clicked();
    void on_toolButton_12_clicked();
    void on_toolButton_13_clicked();
    void on_doubleSpinBox_valueChanged(double arg1);

private:
    Ui::WidgetMenuPanel *ui;

    double size;

    void settingButton();

    double ratioButtonSizeY=0.05;
    double aspect_ratioButtonSize=0.1;

    QDesktopWidget desk;
    int fullScreenSizeX=desk.width();
    int fullScreenSizeY=desk.height();
};

#endif // WIDGETMENUPANEL_H
