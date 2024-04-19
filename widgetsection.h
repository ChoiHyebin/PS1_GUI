#ifndef WIDGETSECTION_H
#define WIDGETSECTION_H

#include <QWidget>
#include <vtkCamera.h>
#include <vtkImageActor.h>
#include <vtkImageData.h>
#include <vtkImageMapToColors.h>
#include <vtkImageMapper3D.h>
#include <vtkLookupTable.h>
#include <vtkMinimalStandardRandomSequence.h>
#include <vtkNew.h>
#include <vtkPCANormalEstimation.h>
#include <vtkPointSource.h>
#include <vtkProperty.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkScalarBarActor.h>
#include <vtkSignedDistance.h>
#include <vtkSmartPointer.h>
#include <vtkNamedColors.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkPolyDataMapper.h>
#include <QDesktopWidget>
#include <vtkXMLUnstructuredGridReader.h>
#include <vtkStructuredPointsReader.h>

// Readers
#include <vtkBYUReader.h>
#include <vtkOBJReader.h>
#include <vtkPLYReader.h>
#include <vtkPolyDataReader.h>
#include <vtkSTLReader.h>
#include <vtkXMLPolyDataReader.h>

#include <vtkPointSource.h>
#include <vtkPolyData.h>

#include <algorithm> // For transform()
#include <cctype>    // For to_lower
#include <string>    // For find_last_of()

namespace Ui {
class WidgetSection;
}

class WidgetSection : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetSection(QWidget *parent = nullptr);
    ~WidgetSection();

    double dm=0;
    double dm2=0;
    double dm3=0;

    vtkNew<vtkNamedColors> colors;
    vtkNew<vtkPCANormalEstimation> normals;
    vtkNew<vtkSignedDistance> distance;
    vtkNew<vtkLookupTable> hueLut;
    vtkNew<vtkImageMapToColors> sagittalColors;
    vtkNew<vtkImageActor> sagittal;
    vtkNew<vtkImageMapToColors> axialColors;
    vtkNew<vtkImageActor> axial;
    vtkNew<vtkImageMapToColors> coronalColors;
    vtkNew<vtkImageActor> coronal;
    vtkNew<vtkScalarBarActor> scalarBar;
    vtkNew<vtkRenderer> ren1;
    vtkNew<vtkRenderWindow> renWin;
    vtkNew<vtkRenderWindowInteractor> iren;
    vtkNew<vtkSTLReader> reader;
    vtkNew<vtkMinimalStandardRandomSequence> randomSequence;
    vtkNew<vtkPointSource> points;

    vtkSmartPointer<vtkPolyDataMapper> mapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New();

    void SD(std::string url);

private slots:
    void on_doubleSpinBox_valueChanged(double arg1);

    void on_doubleSpinBox_2_valueChanged(double arg1);

    void on_doubleSpinBox_3_valueChanged(double arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::WidgetSection *ui;
    QDesktopWidget desk;
    int wid=desk.width();
    int hei=desk.height();

    std::string link;
};

#endif // WIDGETSECTION_H
