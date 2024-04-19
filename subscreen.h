#ifndef SUBSCREEN_H
#define SUBSCREEN_H

#include <QWidget>
#include <QFileDialog>
#include <QDebug>
#include "widgetsection.h"
#include <QDesktopWidget>

namespace Ui {
class SubScreen;
}

class SubScreen : public QWidget
{
    Q_OBJECT

public:
    explicit SubScreen(QWidget *parent = nullptr);
    ~SubScreen();

private slots:

    void on_pushButton_clicked();

private:
    Ui::SubScreen *ui;
    WidgetSection *widgetsection;
    QDesktopWidget desk;
    int wid=desk.width();
    int hei=desk.height();

    void Up_btn_fn(int flag);
    void ind(int flag);
};

#endif // SUBSCREEN_H
