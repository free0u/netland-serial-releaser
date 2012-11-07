/********************************************************************************
** Form generated from reading UI file 'serials_releaser.ui'
**
** Created: Thu 8. Nov 00:27:33 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALS_RELEASER_H
#define UI_SERIALS_RELEASER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serials_releaserClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *serials_releaserClass)
    {
        if (serials_releaserClass->objectName().isEmpty())
            serials_releaserClass->setObjectName(QString::fromUtf8("serials_releaserClass"));
        serials_releaserClass->resize(600, 400);
        menuBar = new QMenuBar(serials_releaserClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        serials_releaserClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(serials_releaserClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        serials_releaserClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(serials_releaserClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        serials_releaserClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(serials_releaserClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        serials_releaserClass->setStatusBar(statusBar);

        retranslateUi(serials_releaserClass);

        QMetaObject::connectSlotsByName(serials_releaserClass);
    } // setupUi

    void retranslateUi(QMainWindow *serials_releaserClass)
    {
        serials_releaserClass->setWindowTitle(QApplication::translate("serials_releaserClass", "serials_releaser", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class serials_releaserClass: public Ui_serials_releaserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALS_RELEASER_H
