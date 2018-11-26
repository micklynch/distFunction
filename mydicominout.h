#ifndef MYDICOMINOUT_H
#define MYDICOMINOUT_H
// QT
#include <QString>
#include <QStringList>
#include <qDebug>
//VTK
#include <vtkImageData.h>
#include <vtkSmartPointer.h>
#include <vtkStringArray.h>
#include <vtkImageChangeInformation.h>
// DICOM -  GDCM
#include <vtkGDCMImageReader.h>
#include <gdcmIPPSorter.h>

class myDicomInOut
{
public:
    myDicomInOut();
    vtkImageData* getVolumeData();
    double* getBounds();
    void readImagesFrom(QStringList);
    void readImageFrom(QString);
    int hasData();

public:
    vtkSmartPointer<vtkGDCMImageReader> reader;
    vtkImageData *img;
    int hasReadVolumeCorrectly; // has read volume 0-No 1-Yes
    vtkSmartPointer<vtkStringArray> sortFilenames(QStringList, double &);
};

#endif // MYDICOMINOUT_H
