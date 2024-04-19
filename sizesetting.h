
#ifndef SIZESETTING_H
#define SIZESETTING_H

#include <QDialog>

namespace Ui {
class SizeSetting;
}

class SizeSetting : public QDialog
{
    Q_OBJECT

public:
    explicit SizeSetting(QWidget *parent = nullptr);
    ~SizeSetting();


    double valuereturn(int a);
private slots:

    void on_horizontalSlider_valueChanged(int value);
    void on_horizontalSlider_2_valueChanged(int value);
    void on_horizontalSlider_3_valueChanged(int value);
    void on_horizontalSlider_4_valueChanged(int value);

private:
    Ui::SizeSetting *ui;
    double BtnRatioSizeX=10;
    double BtnRatioSizeY=10;
    double ScreenWidth=0;
    double ScreenHeight=0;

};

#endif // SIZESETTING_H
