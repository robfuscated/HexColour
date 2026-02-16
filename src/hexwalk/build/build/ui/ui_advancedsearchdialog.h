/********************************************************************************
** Form generated from reading UI file 'advancedsearchdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDSEARCHDIALOG_H
#define UI_ADVANCEDSEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdvancedSearchDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbFind;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbFindFormat;
    QComboBox *cbFind;
    QGroupBox *gbOptions;
    QGridLayout *gridLayout;
    QCheckBox *cbBackwards;
    QCheckBox *cbBegin;
    QCheckBox *cbRegex;
    QCheckBox *cbCase;
    QCheckBox *cbInvertMatch;
    QGroupBox *gbResults;
    QVBoxLayout *verticalLayout_3;
    QTableView *resultsTableView;
    QVBoxLayout *verticalLayout;
    QPushButton *pbFind;
    QPushButton *pbFindAll;
    QPushButton *pbCancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AdvancedSearchDialog)
    {
        if (AdvancedSearchDialog->objectName().isEmpty())
            AdvancedSearchDialog->setObjectName("AdvancedSearchDialog");
        AdvancedSearchDialog->resize(775, 550);
        horizontalLayout_3 = new QHBoxLayout(AdvancedSearchDialog);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        gbFind = new QGroupBox(AdvancedSearchDialog);
        gbFind->setObjectName("gbFind");
        horizontalLayout = new QHBoxLayout(gbFind);
        horizontalLayout->setObjectName("horizontalLayout");
        cbFindFormat = new QComboBox(gbFind);
        cbFindFormat->addItem(QString());
        cbFindFormat->addItem(QString());
        cbFindFormat->addItem(QString());
        cbFindFormat->setObjectName("cbFindFormat");

        horizontalLayout->addWidget(cbFindFormat);

        cbFind = new QComboBox(gbFind);
        cbFind->setObjectName("cbFind");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbFind->sizePolicy().hasHeightForWidth());
        cbFind->setSizePolicy(sizePolicy);
        cbFind->setEditable(true);

        horizontalLayout->addWidget(cbFind);


        verticalLayout_2->addWidget(gbFind);

        gbOptions = new QGroupBox(AdvancedSearchDialog);
        gbOptions->setObjectName("gbOptions");
        gridLayout = new QGridLayout(gbOptions);
        gridLayout->setObjectName("gridLayout");
        cbBackwards = new QCheckBox(gbOptions);
        cbBackwards->setObjectName("cbBackwards");

        gridLayout->addWidget(cbBackwards, 3, 0, 1, 1);

        cbBegin = new QCheckBox(gbOptions);
        cbBegin->setObjectName("cbBegin");
        cbBegin->setChecked(true);

        gridLayout->addWidget(cbBegin, 1, 0, 1, 1);

        cbRegex = new QCheckBox(gbOptions);
        cbRegex->setObjectName("cbRegex");

        gridLayout->addWidget(cbRegex, 2, 0, 1, 1);

        cbCase = new QCheckBox(gbOptions);
        cbCase->setObjectName("cbCase");

        gridLayout->addWidget(cbCase, 1, 1, 1, 1);

        cbInvertMatch = new QCheckBox(gbOptions);
        cbInvertMatch->setObjectName("cbInvertMatch");

        gridLayout->addWidget(cbInvertMatch, 2, 1, 1, 1);

        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowMinimumHeight(3, 1);

        verticalLayout_2->addWidget(gbOptions);

        gbResults = new QGroupBox(AdvancedSearchDialog);
        gbResults->setObjectName("gbResults");
        verticalLayout_3 = new QVBoxLayout(gbResults);
        verticalLayout_3->setObjectName("verticalLayout_3");
        resultsTableView = new QTableView(gbResults);
        resultsTableView->setObjectName("resultsTableView");
        resultsTableView->setWordWrap(false);
        resultsTableView->horizontalHeader()->setCascadingSectionResizes(true);
        resultsTableView->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(resultsTableView);


        verticalLayout_2->addWidget(gbResults);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(2, 5);

        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pbFind = new QPushButton(AdvancedSearchDialog);
        pbFind->setObjectName("pbFind");

        verticalLayout->addWidget(pbFind);

        pbFindAll = new QPushButton(AdvancedSearchDialog);
        pbFindAll->setObjectName("pbFindAll");

        verticalLayout->addWidget(pbFindAll);

        pbCancel = new QPushButton(AdvancedSearchDialog);
        pbCancel->setObjectName("pbCancel");

        verticalLayout->addWidget(pbCancel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        QWidget::setTabOrder(cbFind, cbFindFormat);
        QWidget::setTabOrder(cbFindFormat, cbBackwards);
        QWidget::setTabOrder(cbBackwards, pbFind);
        QWidget::setTabOrder(pbFind, pbCancel);

        retranslateUi(AdvancedSearchDialog);
        QObject::connect(pbCancel, &QPushButton::clicked, AdvancedSearchDialog, qOverload<>(&QDialog::hide));

        pbFind->setDefault(true);


        QMetaObject::connectSlotsByName(AdvancedSearchDialog);
    } // setupUi

    void retranslateUi(QDialog *AdvancedSearchDialog)
    {
        AdvancedSearchDialog->setWindowTitle(QCoreApplication::translate("AdvancedSearchDialog", "HexWalk - Advanced Find", nullptr));
        gbFind->setTitle(QCoreApplication::translate("AdvancedSearchDialog", "Find", nullptr));
        cbFindFormat->setItemText(0, QCoreApplication::translate("AdvancedSearchDialog", "UTF-8", nullptr));
        cbFindFormat->setItemText(1, QCoreApplication::translate("AdvancedSearchDialog", "UTF-16", nullptr));
        cbFindFormat->setItemText(2, QCoreApplication::translate("AdvancedSearchDialog", "Hex", nullptr));

        gbOptions->setTitle(QCoreApplication::translate("AdvancedSearchDialog", "Options", nullptr));
        cbBackwards->setText(QCoreApplication::translate("AdvancedSearchDialog", "&Backwards", nullptr));
        cbBegin->setText(QCoreApplication::translate("AdvancedSearchDialog", "Start from beginning", nullptr));
        cbRegex->setText(QCoreApplication::translate("AdvancedSearchDialog", "Regex", nullptr));
        cbCase->setText(QCoreApplication::translate("AdvancedSearchDialog", "Case Insensitive", nullptr));
        cbInvertMatch->setText(QCoreApplication::translate("AdvancedSearchDialog", "Invert Match", nullptr));
        gbResults->setTitle(QCoreApplication::translate("AdvancedSearchDialog", "Results", nullptr));
        pbFind->setText(QCoreApplication::translate("AdvancedSearchDialog", "&Find", nullptr));
#if QT_CONFIG(shortcut)
        pbFind->setShortcut(QCoreApplication::translate("AdvancedSearchDialog", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        pbFindAll->setText(QCoreApplication::translate("AdvancedSearchDialog", "Find All", nullptr));
        pbCancel->setText(QCoreApplication::translate("AdvancedSearchDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdvancedSearchDialog: public Ui_AdvancedSearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDSEARCHDIALOG_H
