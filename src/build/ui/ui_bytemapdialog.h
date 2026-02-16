/********************************************************************************
** Form generated from reading UI file 'bytemapdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BYTEMAPDIALOG_H
#define UI_BYTEMAPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "bytemap.h"

QT_BEGIN_NAMESPACE

class Ui_ByteMapDialog
{
public:
    QVBoxLayout *verticalLayout;
    ByteMap *byteMap;
    QHBoxLayout *horizontalLayout;
    QLabel *lblValue;
    QLineEdit *edtValue;
    QSpacerItem *horizontalSpacer;
    QLabel *lblPixels;
    QSpinBox *spinPixels;
    QLabel *lblCol;
    QSpinBox *spinCols;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblAddress;
    QLineEdit *edtAddress;
    QCheckBox *colorBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeBtn;

    void setupUi(QDialog *ByteMapDialog)
    {
        if (ByteMapDialog->objectName().isEmpty())
            ByteMapDialog->setObjectName(QString::fromUtf8("ByteMapDialog"));
        ByteMapDialog->resize(833, 584);
        verticalLayout = new QVBoxLayout(ByteMapDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        byteMap = new ByteMap(ByteMapDialog);
        byteMap->setObjectName(QString::fromUtf8("byteMap"));

        verticalLayout->addWidget(byteMap);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        lblValue = new QLabel(ByteMapDialog);
        lblValue->setObjectName(QString::fromUtf8("lblValue"));
        lblValue->setMaximumSize(QSize(100, 30));

        horizontalLayout->addWidget(lblValue);

        edtValue = new QLineEdit(ByteMapDialog);
        edtValue->setObjectName(QString::fromUtf8("edtValue"));
        edtValue->setEnabled(false);

        horizontalLayout->addWidget(edtValue);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblPixels = new QLabel(ByteMapDialog);
        lblPixels->setObjectName(QString::fromUtf8("lblPixels"));

        horizontalLayout->addWidget(lblPixels);

        spinPixels = new QSpinBox(ByteMapDialog);
        spinPixels->setObjectName(QString::fromUtf8("spinPixels"));
        spinPixels->setMinimum(1);
        spinPixels->setMaximum(5);
        spinPixels->setValue(3);

        horizontalLayout->addWidget(spinPixels);

        lblCol = new QLabel(ByteMapDialog);
        lblCol->setObjectName(QString::fromUtf8("lblCol"));

        horizontalLayout->addWidget(lblCol);

        spinCols = new QSpinBox(ByteMapDialog);
        spinCols->setObjectName(QString::fromUtf8("spinCols"));
        spinCols->setMinimumSize(QSize(50, 0));
        spinCols->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinCols->setAccelerated(true);
        spinCols->setKeyboardTracking(true);
        spinCols->setMinimum(8);
        spinCols->setMaximum(65536);
        spinCols->setSingleStep(1);
        spinCols->setStepType(QAbstractSpinBox::DefaultStepType);
        spinCols->setValue(256);

        horizontalLayout->addWidget(spinCols);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblAddress = new QLabel(ByteMapDialog);
        lblAddress->setObjectName(QString::fromUtf8("lblAddress"));
        lblAddress->setMaximumSize(QSize(100, 30));

        horizontalLayout_2->addWidget(lblAddress);

        edtAddress = new QLineEdit(ByteMapDialog);
        edtAddress->setObjectName(QString::fromUtf8("edtAddress"));
        edtAddress->setEnabled(false);
        edtAddress->setMinimumSize(QSize(100, 0));
        edtAddress->setAcceptDrops(false);

        horizontalLayout_2->addWidget(edtAddress);

        colorBox = new QCheckBox(ByteMapDialog);
        colorBox->setObjectName(QString::fromUtf8("colorBox"));

        horizontalLayout_2->addWidget(colorBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        closeBtn = new QPushButton(ByteMapDialog);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setAutoDefault(false);

        horizontalLayout_2->addWidget(closeBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ByteMapDialog);

        QMetaObject::connectSlotsByName(ByteMapDialog);
    } // setupUi

    void retranslateUi(QDialog *ByteMapDialog)
    {
        ByteMapDialog->setWindowTitle(QCoreApplication::translate("ByteMapDialog", "Byte Map", nullptr));
        lblValue->setText(QCoreApplication::translate("ByteMapDialog", "Value: ", nullptr));
        lblPixels->setText(QCoreApplication::translate("ByteMapDialog", "Px size:", nullptr));
        lblCol->setText(QCoreApplication::translate("ByteMapDialog", "Cols: ", nullptr));
        lblAddress->setText(QCoreApplication::translate("ByteMapDialog", "Addr: ", nullptr));
        colorBox->setText(QCoreApplication::translate("ByteMapDialog", "Color map", nullptr));
        closeBtn->setText(QCoreApplication::translate("ByteMapDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ByteMapDialog: public Ui_ByteMapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BYTEMAPDIALOG_H
