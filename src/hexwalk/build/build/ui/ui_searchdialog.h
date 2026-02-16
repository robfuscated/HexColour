/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbFind;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbFindFormat;
    QComboBox *cbFind;
    QGroupBox *gbReplace;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *cbReplaceFormat;
    QComboBox *cbReplace;
    QGroupBox *gbOptions;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cbBackwards;
    QCheckBox *cbPrompt;
    QVBoxLayout *verticalLayout;
    QPushButton *pbFind;
    QPushButton *pbReplace;
    QPushButton *pbReplaceAll;
    QPushButton *pbCancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName("SearchDialog");
        SearchDialog->resize(436, 275);
        horizontalLayout_3 = new QHBoxLayout(SearchDialog);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        gbFind = new QGroupBox(SearchDialog);
        gbFind->setObjectName("gbFind");
        horizontalLayout = new QHBoxLayout(gbFind);
        horizontalLayout->setObjectName("horizontalLayout");
        cbFindFormat = new QComboBox(gbFind);
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

        gbReplace = new QGroupBox(SearchDialog);
        gbReplace->setObjectName("gbReplace");
        horizontalLayout_2 = new QHBoxLayout(gbReplace);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cbReplaceFormat = new QComboBox(gbReplace);
        cbReplaceFormat->addItem(QString());
        cbReplaceFormat->addItem(QString());
        cbReplaceFormat->setObjectName("cbReplaceFormat");

        horizontalLayout_2->addWidget(cbReplaceFormat);

        cbReplace = new QComboBox(gbReplace);
        cbReplace->setObjectName("cbReplace");
        sizePolicy.setHeightForWidth(cbReplace->sizePolicy().hasHeightForWidth());
        cbReplace->setSizePolicy(sizePolicy);
        cbReplace->setEditable(true);

        horizontalLayout_2->addWidget(cbReplace);


        verticalLayout_2->addWidget(gbReplace);

        gbOptions = new QGroupBox(SearchDialog);
        gbOptions->setObjectName("gbOptions");
        verticalLayout_3 = new QVBoxLayout(gbOptions);
        verticalLayout_3->setObjectName("verticalLayout_3");
        cbBackwards = new QCheckBox(gbOptions);
        cbBackwards->setObjectName("cbBackwards");

        verticalLayout_3->addWidget(cbBackwards);

        cbPrompt = new QCheckBox(gbOptions);
        cbPrompt->setObjectName("cbPrompt");

        verticalLayout_3->addWidget(cbPrompt);


        verticalLayout_2->addWidget(gbOptions);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pbFind = new QPushButton(SearchDialog);
        pbFind->setObjectName("pbFind");

        verticalLayout->addWidget(pbFind);

        pbReplace = new QPushButton(SearchDialog);
        pbReplace->setObjectName("pbReplace");

        verticalLayout->addWidget(pbReplace);

        pbReplaceAll = new QPushButton(SearchDialog);
        pbReplaceAll->setObjectName("pbReplaceAll");

        verticalLayout->addWidget(pbReplaceAll);

        pbCancel = new QPushButton(SearchDialog);
        pbCancel->setObjectName("pbCancel");

        verticalLayout->addWidget(pbCancel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        QWidget::setTabOrder(cbFind, cbReplace);
        QWidget::setTabOrder(cbReplace, cbFindFormat);
        QWidget::setTabOrder(cbFindFormat, cbReplaceFormat);
        QWidget::setTabOrder(cbReplaceFormat, cbBackwards);
        QWidget::setTabOrder(cbBackwards, cbPrompt);
        QWidget::setTabOrder(cbPrompt, pbFind);
        QWidget::setTabOrder(pbFind, pbReplace);
        QWidget::setTabOrder(pbReplace, pbReplaceAll);
        QWidget::setTabOrder(pbReplaceAll, pbCancel);

        retranslateUi(SearchDialog);
        QObject::connect(pbCancel, &QPushButton::clicked, SearchDialog, qOverload<>(&QDialog::hide));

        pbFind->setDefault(true);


        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QCoreApplication::translate("SearchDialog", "HexWalk - Find/Replace", nullptr));
        gbFind->setTitle(QCoreApplication::translate("SearchDialog", "Find", nullptr));
        cbFindFormat->setItemText(0, QCoreApplication::translate("SearchDialog", "Hex", nullptr));
        cbFindFormat->setItemText(1, QCoreApplication::translate("SearchDialog", "UTF-8", nullptr));

        gbReplace->setTitle(QCoreApplication::translate("SearchDialog", "Replace", nullptr));
        cbReplaceFormat->setItemText(0, QCoreApplication::translate("SearchDialog", "Hex", nullptr));
        cbReplaceFormat->setItemText(1, QCoreApplication::translate("SearchDialog", "UTF-8", nullptr));

        gbOptions->setTitle(QCoreApplication::translate("SearchDialog", "Options", nullptr));
        cbBackwards->setText(QCoreApplication::translate("SearchDialog", "&Backwards", nullptr));
        cbPrompt->setText(QCoreApplication::translate("SearchDialog", "&Prompt on replace", nullptr));
        pbFind->setText(QCoreApplication::translate("SearchDialog", "&Find", nullptr));
#if QT_CONFIG(shortcut)
        pbFind->setShortcut(QCoreApplication::translate("SearchDialog", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        pbReplace->setText(QCoreApplication::translate("SearchDialog", "&Replace", nullptr));
        pbReplaceAll->setText(QCoreApplication::translate("SearchDialog", "Replace &All", nullptr));
        pbCancel->setText(QCoreApplication::translate("SearchDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
