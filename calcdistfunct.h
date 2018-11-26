#ifndef CALCDISTFUNCT_H
#define CALCDISTFUNCT_H

#include <QMainWindow>

// QT
#include <QFileDialog.h>
#include <qDebug>

// vtk
#include <QVTKWidget.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkSmartPointer.h>
#include <vtkImageData.h>
#include <vtkVolumeRayCastCompositeFunction.h>
#include <vtkVolumeRayCastMapper.h>

// my functs
#include "mydicominout.h"
#include "createimageblock.h"

namespace Ui {
    class CalcDistFunct;
}

class CalcDistFunct : public QMainWindow {
    Q_OBJECT
public:
    CalcDistFunct(QWidget *parent = 0);
    ~CalcDistFunct();
    void addVolumeImageToPane();


private:    //members
    vtkRenderWindow *renWin;
    myDicomInOut *mdicomreader;
    vtkImageData *dicomdata;
    vtkRenderer *renPanelvol;

protected:
    void changeEvent(QEvent *e);

private:
    Ui::CalcDistFunct *ui;

private slots:
    void on_actionCreate_Block_triggered();
    void on_actionOpen_Dicom_Series_triggered();
};

#endif // CALCDISTFUNCT_H
