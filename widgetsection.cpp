#include "widgetsection.h"
#include "ui_widgetsection.h"
#include "mainscreen.h"
#include "state_variable.h"

WidgetSection::WidgetSection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetSection)
{
    ui->setupUi(this);
    this->setWindowTitle("Signed Distance");

    ui->label->setAlignment(Qt::AlignCenter);
    ui->label_2->setAlignment(Qt::AlignCenter);
    ui->label_3->setAlignment(Qt::AlignCenter);

    ui->doubleSpinBox->setAlignment(Qt::AlignCenter);
    ui->doubleSpinBox_2->setAlignment(Qt::AlignCenter);
    ui->doubleSpinBox_3->setAlignment(Qt::AlignCenter);
}

WidgetSection::~WidgetSection()
{
    delete ui;
}

namespace abc {
    vtkSmartPointer<vtkPolyData> ReadPolyData(std::string const& fileName);
}

void WidgetSection::SD(std::string url)
{
    vtkNew<vtkNamedColors> colors;

    State_variable *VR = new State_variable;

    MainScreen *mainscreen = new MainScreen;
    mainscreen->VR = VR;

    link = url;

    auto polyData = abc::ReadPolyData(link);

    double bounds[6];
    polyData->GetBounds(bounds);
    double range[3];
    for (int i = 0; i < 3; ++i)
    {
      range[i] = bounds[2 * i + 1] - bounds[2 * i];
    }

    int sampleSize = polyData->GetNumberOfPoints() * .00005;
    if (sampleSize < 10)
    {
      sampleSize = 10;
    }
    std::cout << "Sample size is: " << sampleSize << std::endl;
    vtkNew<vtkPCANormalEstimation> normals;
    normals->SetInputData(polyData);
    normals->SetSampleSize(sampleSize);
    normals->SetNormalOrientationToGraphTraversal();
    normals->FlipNormalsOn();
    std::cout << "Range: " << range[0] << ", " << range[1] << ", " << range[2]
              << std::endl;
    int dimension = 256;
    dimension = 128;
    // auto radius = range[0] * 0.02;
    auto radius = range[0] / static_cast<double>(dimension) * 5; // ~5 voxels
    std::cout << "Radius: " << radius << std::endl;
    vtkNew<vtkSignedDistance> distance;
    distance->SetInputConnection(normals->GetOutputPort());
    distance->SetRadius(radius);
    distance->SetDimensions(dimension, dimension, dimension);
    distance->SetBounds(bounds[0] - range[0] * 0.1, bounds[1] + range[0] * 0.1,
                        bounds[2] - range[1] * 0.1, bounds[3] + range[1] * 0.1,
                        bounds[4] - range[2] * 0.1, bounds[5] + range[2] * 0.1);

    // Create a lookup table that consists of the full hue circle
    // (from HSV).
    auto belowRangeColor = colors->GetColor4d("Black").GetData();
    belowRangeColor[3] = 0.2;
    auto aboveRangeColor = colors->GetColor4d("White").GetData();
    aboveRangeColor[3] = 0.2;
    vtkNew<vtkLookupTable> hueLut;
    hueLut->SetTableRange(-0.99 * radius, 0.99 * radius);
    hueLut->SetHueRange(0.667, 0);
    hueLut->SetSaturationRange(1, 1);
    hueLut->SetValueRange(1, 1);
    hueLut->UseBelowRangeColorOn();
    hueLut->SetBelowRangeColor(belowRangeColor);
    hueLut->UseAboveRangeColorOn();
    hueLut->SetAboveRangeColor(aboveRangeColor);
    hueLut->SetNumberOfColors(5);
    hueLut->Build();
    double* last = hueLut->GetTableValue(4);
    hueLut->SetAboveRangeColor(last[0], last[1], last[2], 0);

    vtkNew<vtkImageMapToColors> sagittalColors;
    sagittalColors->SetInputConnection(distance->GetOutputPort());
    sagittalColors->SetLookupTable(hueLut);
    sagittalColors->Update();

    vtkNew<vtkImageActor> sagittal;
    sagittal->GetMapper()->SetInputConnection(sagittalColors->GetOutputPort());
    sagittal->SetDisplayExtent(dimension / dm, dimension / dm, 0, dimension - 1, 0,
                               dimension - 1);
    sagittal->ForceOpaqueOn();

    vtkNew<vtkImageMapToColors> axialColors;
    axialColors->SetInputConnection(distance->GetOutputPort());
    axialColors->SetLookupTable(hueLut);
    axialColors->Update();

    vtkNew<vtkImageActor> axial;
    axial->GetMapper()->SetInputConnection(axialColors->GetOutputPort());
    axial->SetDisplayExtent(0, dimension - 1, 0, dimension - 1, dimension / dm,
                            dimension / dm);
    axial->ForceOpaqueOn();

    vtkNew<vtkImageMapToColors> coronalColors;
    coronalColors->SetInputConnection(distance->GetOutputPort());
    coronalColors->SetLookupTable(hueLut);
    coronalColors->Update();

    vtkNew<vtkImageActor> coronal;
    coronal->GetMapper()->SetInputConnection(coronalColors->GetOutputPort());
    coronal->SetDisplayExtent(0, dimension - 1, dimension / dm, dimension / dm, 0,
                              dimension - 1);
    coronal->ForceOpaqueOn();

    // Create a scalar bar
    vtkNew<vtkScalarBarActor> scalarBar;
    scalarBar->SetLookupTable(hueLut);
    scalarBar->SetTitle("Distance");
    scalarBar->SetNumberOfLabels(5);

    // Create graphics stuff
    //
    vtkNew<vtkRenderer> ren1;
    ren1->SetBackground(colors->GetColor3d("CornflowerBlue").GetData());

    vtkNew<vtkSTLReader> reader;
    reader->SetFileName(url.c_str());
    reader->Update();
    polyData = reader->GetOutput();

    vtkNew<vtkRenderWindow> renWin;
    renWin->AddRenderer(ren1);
    renWin->SetSize(600, 400);
    renWin->SetPosition(2850, 655);
    renWin->SetWindowName("SignedDistance");

    vtkNew<vtkRenderWindowInteractor> iren;
    iren->SetRenderWindow(renWin);

    // Add the actors to the renderer, set the background and size
    //
    ren1->AddActor(sagittal);
    ren1->AddActor(axial);
    ren1->AddActor(coronal);
    ren1->AddActor2D(scalarBar);

    // Generate an interesting view
    //
    ren1->ResetCamera();
    ren1->GetActiveCamera()->Azimuth(120);
    ren1->GetActiveCamera()->Elevation(30);
    ren1->GetActiveCamera()->Dolly(1.5);
    ren1->ResetCameraClippingRange();

    renWin->Render();
//    iren->Initialize();
    iren->Start();
    std::cout << distance->GetOutput()->GetScalarRange()[0] << ", "
              << distance->GetOutput()->GetScalarRange()[1] << std::endl;
}


namespace abc {
    vtkSmartPointer<vtkPolyData> ReadPolyData(std::string const& fileName)
    {
        vtkSmartPointer<vtkPolyData> polyData;
        std::string extension = "";
        if (fileName.find_last_of(".") != std::string::npos)
        {
            extension = fileName.substr(fileName.find_last_of("."));
        }
        // Make the extension lowercase
        std::transform(extension.begin(), extension.end(), extension.begin(),
            ::tolower);
        if (extension == ".ply")
        {
            vtkNew<vtkPLYReader> reader;
            reader->SetFileName(fileName.c_str());
            reader->Update();
            polyData = reader->GetOutput();
        }
        else if (extension == ".vtp")
        {
            vtkNew<vtkXMLPolyDataReader> reader;
            reader->SetFileName(fileName.c_str());
            reader->Update();
            polyData = reader->GetOutput();
        }
        else if (extension == ".vtk")
        {
            vtkNew<vtkPolyDataReader> reader;
            reader->SetFileName(fileName.c_str());
            reader->Update();
            polyData = reader->GetOutput();
        }
        else if (extension == ".obj")
        {
            vtkNew<vtkOBJReader> reader;
            reader->SetFileName(fileName.c_str()); qDebug() << "ok 1";
            reader->Update(); qDebug() << "ok 2";
            polyData = reader->GetOutput(); qDebug() << "ok 3";
        }
        else if (extension == ".stl")
        {
            vtkNew<vtkSTLReader> reader;
            reader->SetFileName(fileName.c_str());
            reader->Update();
            polyData = reader->GetOutput();
        }
        else if (extension == ".g")
        {
            vtkNew<vtkBYUReader> reader;
            reader->SetGeometryFileName(fileName.c_str());
            reader->Update();
            polyData = reader->GetOutput();
        }
        else
        {
            vtkNew<vtkMinimalStandardRandomSequence> randomSequence;
            randomSequence->SetSeed(8775070);

            vtkNew<vtkPointSource> points;
            points->SetNumberOfPoints(100000);
            points->SetRadius(10.0);
            double x, y, z;
            // random position
            x = randomSequence->GetRangeValue(-100, 100);
            randomSequence->Next();
            y = randomSequence->GetRangeValue(-100, 100);
            randomSequence->Next();
            z = randomSequence->GetRangeValue(-100, 100);
            randomSequence->Next();
            points->SetCenter(x, y, z);
            points->SetDistributionToShell();
            points->Update();
            polyData = points->GetOutput();
        }
        return polyData;
    }
} // namespace

void WidgetSection::on_doubleSpinBox_valueChanged(double arg1)
{
    dm=arg1;
}

void WidgetSection::on_doubleSpinBox_2_valueChanged(double arg1)
{
    dm2=arg1;
}

void WidgetSection::on_doubleSpinBox_3_valueChanged(double arg1)
{
    dm3=arg1;
}

void WidgetSection::on_pushButton_clicked()
{
    if (dm!=0 && dm2!=0 && dm3!=0 && dm!=1 && dm2!=1 && dm3!=1)
    {
        SD("/Users/kist/Documents/PSI/STL/tello modeling.stl");
    }
    else
    {
        qDebug("Error");
    }
}

void WidgetSection::on_pushButton_2_clicked()
{
    qDebug() << "button click";
    if (dm!=0 && dm2!=0 && dm3!=0 && dm!=1 && dm2!=1 && dm3!=1)
    {
        SD("/Users/kist/Documents/PSI/STL/drone.obj"); qDebug() << "load OK";
    }
    else
    {
        qDebug("Error");
    }
}
