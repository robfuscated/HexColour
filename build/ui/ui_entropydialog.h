/********************************************************************************
** Form generated from reading UI file 'entropydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTROPYDIALOG_H
#define UI_ENTROPYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "entropychart.h"

QT_BEGIN_NAMESPACE

class Ui_EntropyDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    EntropyChart *entropyChart;
    QHBoxLayout *horizontalLayout;
    QLabel *Valuelbl;
    QLineEdit *ValueEdt;
    QLabel *Addresslbl;
    QLineEdit *AddressEdt;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EntropyDialog)
    {
        if (EntropyDialog->objectName().isEmpty())
            EntropyDialog->setObjectName(QString::fromUtf8("EntropyDialog"));
        EntropyDialog->resize(752, 564);
        gridLayout = new QGridLayout(EntropyDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        entropyChart = new EntropyChart(EntropyDialog);
        entropyChart->setObjectName(QString::fromUtf8("entropyChart"));

        verticalLayout_2->addWidget(entropyChart);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Valuelbl = new QLabel(EntropyDialog);
        Valuelbl->setObjectName(QString::fromUtf8("Valuelbl"));

        horizontalLayout->addWidget(Valuelbl);

        ValueEdt = new QLineEdit(EntropyDialog);
        ValueEdt->setObjectName(QString::fromUtf8("ValueEdt"));
        ValueEdt->setEnabled(false);

        horizontalLayout->addWidget(ValueEdt);

        Addresslbl = new QLabel(EntropyDialog);
        Addresslbl->setObjectName(QString::fromUtf8("Addresslbl"));

        horizontalLayout->addWidget(Addresslbl);

        AddressEdt = new QLineEdit(EntropyDialog);
        AddressEdt->setObjectName(QString::fromUtf8("AddressEdt"));
        AddressEdt->setEnabled(false);

        horizontalLayout->addWidget(AddressEdt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(EntropyDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(EntropyDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EntropyDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EntropyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EntropyDialog);
    } // setupUi

    void retranslateUi(QDialog *EntropyDialog)
    {
        EntropyDialog->setWindowTitle(QCoreApplication::translate("EntropyDialog", "HexWalk - Entropy Analysis", nullptr));
        Valuelbl->setText(QCoreApplication::translate("EntropyDialog", "Value:", nullptr));
        Addresslbl->setText(QCoreApplication::translate("EntropyDialog", "Address:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EntropyDialog: public Ui_EntropyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTROPYDIALOG_H
