/********************************************************************************
** Form generated from reading UI file 'calcdistfunct.ui'
**
** Created: Fri Jun 25 11:04:36 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCDISTFUNCT_H
#define UI_CALCDISTFUNCT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalcDistFunct
{
public:
    QAction *actionOpen_Dicom_Series;
    QAction *actionCreate_Block;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTest;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalcDistFunct)
    {
        if (CalcDistFunct->objectName().isEmpty())
            CalcDistFunct->setObjectName(QString::fromUtf8("CalcDistFunct"));
        CalcDistFunct->setEnabled(true);
        CalcDistFunct->resize(500, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalcDistFunct->sizePolicy().hasHeightForWidth());
        CalcDistFunct->setSizePolicy(sizePolicy);
        CalcDistFunct->setMaximumSize(QSize(600, 400));
        actionOpen_Dicom_Series = new QAction(CalcDistFunct);
        actionOpen_Dicom_Series->setObjectName(QString::fromUtf8("actionOpen_Dicom_Series"));
        actionCreate_Block = new QAction(CalcDistFunct);
        actionCreate_Block->setObjectName(QString::fromUtf8("actionCreate_Block"));
        centralWidget = new QWidget(CalcDistFunct);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CalcDistFunct->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalcDistFunct);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTest = new QMenu(menuBar);
        menuTest->setObjectName(QString::fromUtf8("menuTest"));
        CalcDistFunct->setMenuBar(menuBar);
        statusBar = new QStatusBar(CalcDistFunct);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CalcDistFunct->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTest->menuAction());
        menuFile->addAction(actionOpen_Dicom_Series);
        menuTest->addAction(actionCreate_Block);

        retranslateUi(CalcDistFunct);

        QMetaObject::connectSlotsByName(CalcDistFunct);
    } // setupUi

    void retranslateUi(QMainWindow *CalcDistFunct)
    {
        CalcDistFunct->setWindowTitle(QApplication::translate("CalcDistFunct", "CalcDistFunct", 0, QApplication::UnicodeUTF8));
        actionOpen_Dicom_Series->setText(QApplication::translate("CalcDistFunct", "Open Dicom Series", 0, QApplication::UnicodeUTF8));
        actionCreate_Block->setText(QApplication::translate("CalcDistFunct", "Create Block", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("CalcDistFunct", "File", 0, QApplication::UnicodeUTF8));
        menuTest->setTitle(QApplication::translate("CalcDistFunct", "Test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CalcDistFunct: public Ui_CalcDistFunct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCDISTFUNCT_H
