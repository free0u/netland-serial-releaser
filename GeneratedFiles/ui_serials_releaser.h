/********************************************************************************
** Form generated from reading UI file 'serials_releaser.ui'
**
** Created: Thu 8. Nov 03:52:50 2012
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
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serials_releaserClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *serials_releaserClass)
    {
        if (serials_releaserClass->objectName().isEmpty())
            serials_releaserClass->setObjectName(QString::fromUtf8("serials_releaserClass"));
        serials_releaserClass->resize(570, 652);
        centralWidget = new QWidget(serials_releaserClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 551, 621));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(verticalLayoutWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 547, 264));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_3);


        horizontalLayout_2->addLayout(formLayout_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        serials_releaserClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(serials_releaserClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        serials_releaserClass->setStatusBar(statusBar);

        retranslateUi(serials_releaserClass);

        QMetaObject::connectSlotsByName(serials_releaserClass);
    } // setupUi

    void retranslateUi(QMainWindow *serials_releaserClass)
    {
        serials_releaserClass->setWindowTitle(QApplication::translate("serials_releaserClass", "Netland serials releaser", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("serials_releaserClass", "Title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("serials_releaserClass", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit->setWhatsThis(QApplication::translate("serials_releaserClass", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        lineEdit->setPlaceholderText(QApplication::translate("serials_releaserClass", "Dexter", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("serials_releaserClass", "Season", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("serials_releaserClass", "7", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("serials_releaserClass", "Episode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_3->setToolTip(QApplication::translate("serials_releaserClass", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lineEdit_3->setPlaceholderText(QApplication::translate("serials_releaserClass", "6", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("serials_releaserClass", "Add serial", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class serials_releaserClass: public Ui_serials_releaserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALS_RELEASER_H
