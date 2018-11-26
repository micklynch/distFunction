#include "createimageblock.h"

CreateImageBlock::CreateImageBlock()
{
    vimageBlock = vtkImageData::New();
    dims[0] = 20; dims[1] = 20; dims[2] = 20;
}

void CreateImageBlock::fillCircle(int radius, int value)
{
    int *dims = vimageBlock->GetDimensions();

    if (radius > dims[0] || radius > dims[1] || radius > dims[2])
    {
        cout << "Radius is larger than image block" << endl;
        return;
    }

    int centre[3];

    for (int i=0;i<3;i++)
        centre[i] = dims[i]/2;

    qDebug() << "x: " <<centre[0];

    return;
}

bool CreateImageBlock::initializeBlock()
{
    for (int i=0;i<3;i++)
        qDebug() << dims[i];

    vimageBlock = vtkImageData::New();

    vimageBlock->SetDimensions(dims);
    vimageBlock->SetScalarTypeToShort();
    vimageBlock->AllocateScalars();

    for (int x = 0; x < dims[0]; x++)
        for (int y = 0; y < dims[1]; y++)
            for (int z = 0; z < dims[2]; z++)
            {
                qDebug() << "test";
            }
}

void CreateImageBlock::setValues(int x, int y, int z)
{
    dims[0] = x;dims[1] = y;dims[2] = z;
    return;
}
