# -------------------------------------------------
# Project created by QtCreator 2010-06-21T12:08:44
# -------------------------------------------------
TARGET = distFunction
TEMPLATE = app
SOURCES += main.cpp \
    calcdistfunct.cpp \
    mydicominout.cpp \
    createimageblock.cpp
HEADERS += calcdistfunct.h \
    mydicominout.h \
    createimageblock.h
FORMS += calcdistfunct.ui
win32:debug:LIBS += -Lc:/GDCM/lib
win32:LIBS += -lvtkgdcm.dll \
    -lgdcmCommon.dll \
    -lgdcmDICT.dll \
    -lgdcmDSED.dll \
    -lgdcmexpat.dll \
    -lgdcmgetopt.dll \
    -lgdcmIOD.dll \
    -lgdcmjpeg12.dll \
    -lgdcmjpeg16.dll \
    -lgdcmjpeg8.dll \
    -lgdcmMSFF.dll \
    -lgdcmopenjpeg.dll \
    -lgdcmzlib.dll
win32:debug:LIBS += -Lc:/vtk/debug/lib/vtk-5.4
win32:release:LIBS += -Lc:/vtk/release/lib/vtk-5.4
win32:LIBS += -lvtkCommon.dll \
    -lvtkVolumeRendering.dll \
    -lvtksys.dll \
    -lQVTK.dll \
    -lvtkQtChart.dll \
    -lvtkViews.dll \
    -lvtkWidgets.dll \
    -lvtkInfovis.dll \
    -lvtkRendering.dll \
    -lvtkGraphics.dll \
    -lvtkImaging.dll \
    -lvtkIO.dll \
    -lvtkFiltering.dll \
    -lvtklibxml2.dll \
    -lvtkDICOMParser.dll \
    -lvtkpng.dll \
    -lvtkpng.dll \
    -lvtktiff.dll \
    -lvtkzlib.dll \
    -lvtkjpeg.dll \
    -lvtkalglib.dll \
    -lvtkexpat.dll \
    -lvtkverdict.dll \
    -lvtkmetaio.dll \
    -lvtkNetCDF.dll \
    -lvtkexoIIc.dll \
    -lvtkftgl.dll \
    -lvtkfreetype.dll \
    -lvtkHybrid.dll
win32:debug:INCLUDEPATH += C:/vtk/debug/include/vtk-5.4
win32:debug:INCLUDEPATH += C:/gdcm/include/gdcm-2.0
win32:release:INCLUDEPATH += C:/vtk/release/include/vtk-5.4
