#ifndef FUNCTIONKEY_H
#define FUNCTIONKEY_H

#include <QWidget>
#include <stage.h>
#include <QDesktopWidget>

namespace Ui {
class FunctionKey;
}

class FunctionKey : public QWidget
{
    Q_OBJECT

public:
    explicit FunctionKey(QWidget *parent = nullptr);
    ~FunctionKey();
    Stage *stage;

private slots:
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

private:
    Ui::FunctionKey *ui;

    double ratioButtonSizeY=0.05;
    double aspect_ratioButtonSize=0.1;
    QDesktopWidget desk;
    int fullScreenSizeX=desk.width();
    int fullScreenSizeY=desk.height();

    void Button_Color(int flag);

};

#endif // FUNCTIONKEY_H
