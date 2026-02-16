/********************************************************************************
** Form generated from reading UI file 'diffdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFDIALOG_H
#define UI_DIFFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include "../qhexedit/qhexedit.h"

QT_BEGIN_NAMESPACE

class Ui_DiffDialog
{
public:
    QHexEdit *hexEdit1;
    QHexEdit *hexEdit2;
    QPushButton *nextDiffBtn;
    QPushButton *prevDiffBtn;
    QPushButton *exitBtn;

    void setupUi(QDialog *DiffDialog)
    {
        if (DiffDialog->objectName().isEmpty())
            DiffDialog->setObjectName(QString::fromUtf8("DiffDialog"));
        DiffDialog->resize(1320, 725);
        hexEdit1 = new QHexEdit(DiffDialog);
        hexEdit1->setObjectName(QString::fromUtf8("hexEdit1"));
        hexEdit1->setGeometry(QRect(9, 50, 640, 650));
        hexEdit2 = new QHexEdit(DiffDialog);
        hexEdit2->setObjectName(QString::fromUtf8("hexEdit2"));
        hexEdit2->setGeometry(QRect(660, 50, 640, 650));
        nextDiffBtn = new QPushButton(DiffDialog);
        nextDiffBtn->setObjectName(QString::fromUtf8("nextDiffBtn"));
        nextDiffBtn->setGeometry(QRect(110, 10, 93, 29));
        prevDiffBtn = new QPushButton(DiffDialog);
        prevDiffBtn->setObjectName(QString::fromUtf8("prevDiffBtn"));
        prevDiffBtn->setGeometry(QRect(10, 10, 93, 29));
        exitBtn = new QPushButton(DiffDialog);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(210, 10, 93, 29));

        retranslateUi(DiffDialog);

        QMetaObject::connectSlotsByName(DiffDialog);
    } // setupUi

    void retranslateUi(QDialog *DiffDialog)
    {
        DiffDialog->setWindowTitle(QCoreApplication::translate("DiffDialog", "HexWalk - Diff Analysis", nullptr));
        nextDiffBtn->setText(QCoreApplication::translate("DiffDialog", "Next Diff", nullptr));
        prevDiffBtn->setText(QCoreApplication::translate("DiffDialog", "Prev Diff", nullptr));
        exitBtn->setText(QCoreApplication::translate("DiffDialog", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiffDialog: public Ui_DiffDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFDIALOG_H
