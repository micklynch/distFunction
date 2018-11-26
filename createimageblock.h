#ifndef CREATEIMAGEBLOCK_H
#define CREATEIMAGEBLOCK_H

#include <vtkSmartPointer.h>
#include <vtkImageData.h>
#include <qDebug.h>

class CreateImageBlock
{
public:
    CreateImageBlock();
    void fillCircle(int radius, int value);
    bool initializeBlock();
    void setValues (int x, int y, int z);

private:
    vtkImageData *vimageBlock;
    int dims[3];
};

#endif // CREATEIMAGEBLOCK_H
