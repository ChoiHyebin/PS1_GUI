#include "startpsi.h"
#include <QApplication>
#include <qsurfaceformat.h>
#include <QVTKOpenGLWidget.h>
#include "stage.h"
#include "widgetcontrolpanel.h"


int main(int argc, char *argv[])
{
    QSurfaceFormat::setDefaultFormat(QVTKOpenGLWidget::defaultFormat());
    QApplication a(argc, argv);
    StartPSI stp;
    stp.show();

    return a.exec();

}
