#include "calcdistfunct.h"
#include "ui_calcdistfunct.h"

CalcDistFunct::CalcDistFunct(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalcDistFunct)
{
    ui->setupUi(this);

    // Create the widget to put in qmainwindow
    QVTKWidget *widget;
    widget = new QVTKWidget;
    setCentralWidget(widget); // place the widget centrally

    renWin = vtkRenderWindow::New();

    widget->SetRenderWindow(renWin);

    // Open DICOM Series
    mdicomreader = new myDicomInOut();

    // add render plane
    renPanelvol = vtkRenderer::New();
    renPanelvol->SetBackground(0.0, 0.0, 0.0);
    renWin->AddRenderer(renPanelvol);

    renWin->Render();
}

CalcDistFunct::~CalcDistFunct()
{
    delete ui;
}

void CalcDistFunct::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void CalcDistFunct::on_actionOpen_Dicom_Series_triggered()
{
    // Open DICOM Series
    QStringList filenames = QFileDialog::getOpenFileNames(this, "Choose files", "C:/temp/Data/testdata", "*.dcm", 0, 0);

    for (QStringList::Iterator it = filenames.begin(); it != filenames.end(); ++it)
    {
        QString str = *it;
        qDebug() << str.toStdString().c_str();
    }

    mdicomreader->readImagesFrom(filenames);
    dicomdata = mdicomreader->getVolumeData();

    addVolumeImageToPane();

}

void CalcDistFunct::addVolumeImageToPane()
{
    // test
        double *origin = dicomdata->GetOrigin();
        qDebug() << "x: " << origin[0] << "y: " << origin[1] << "z: " << origin[2];
        // endtest

    vtkSmartPointer<vtkVolumeRayCastCompositeFunction> compositeFunction = vtkSmartPointer<vtkVolumeRayCastCompositeFunction>::New();
    vtkSmartPointer<vtkVolumeRayCastMapper> volumemap = vtkSmartPointer<vtkVolumeRayCastMapper>::New();

    volumemap->SetInput(dicomdata);
    volumemap->SetVolumeRayCastFunction(compositeFunction);

    vtkSmartPointer<vtkVolume> volume =vtkSmartPointer<vtkVolume>::New();
    volume->SetMapper(volumemap);

    volume->SetOrigin(origin);

    renPanelvol->AddVolume(volume);
    renPanelvol->ResetCamera();

    return;
}

void CalcDistFunct::on_actionCreate_Block_triggered()
{
    CreateImageBlock *block = new CreateImageBlock();

    block->initializeBlock();

    block->fillCircle(5, 100);

    delete block;
    return;
}
