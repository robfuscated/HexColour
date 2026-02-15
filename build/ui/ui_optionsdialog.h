/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *gbFlags;
    QGridLayout *gridLayout_2;
    QCheckBox *cbAddressArea;
    QCheckBox *cbOverwriteMode;
    QCheckBox *cbHighlighting;
    QCheckBox *cbAsciiArea;
    QCheckBox *cbReadOnly;
    QGroupBox *gbColors;
    QGridLayout *gridLayout;
    QPushButton *pbHighlightingColor;
    QLabel *lbHighlightingColor;
    QPushButton *pbSelectionColor;
    QLabel *lbSelectionColor;
    QPushButton *pbAddressAreaColor;
    QLabel *lbAddressAreaColor;
    QPushButton *pbAddressFontColor;
    QLabel *lbAddressFontColor;
    QPushButton *pbAsciiAreaColor;
    QLabel *lbAsciiAreaColor;
    QPushButton *pbAsciiFontColor;
    QLabel *lbAsciiFontColor;
    QPushButton *pbHexFontColor;
    QLabel *lbHexFontColor;
    QPushButton *pbWidgetFont;
    QLineEdit *leWidgetFont;
    QGroupBox *gbAddressAreaWidth;
    QGridLayout *gridLayout_3;
    QLabel *lbAddressAreaWidth;
    QSpinBox *sbAddressAreaWidth;
    QGroupBox *gbHexArea;
    QGridLayout *gridLayout_4;
    QLabel *lbBytesPerLine;
    QSpinBox *sbBytesPerLine;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QString::fromUtf8("OptionsDialog"));
        OptionsDialog->setWindowModality(Qt::ApplicationModal);
        OptionsDialog->resize(374, 754);
        verticalLayout = new QVBoxLayout(OptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gbFlags = new QGroupBox(OptionsDialog);
        gbFlags->setObjectName(QString::fromUtf8("gbFlags"));
        gridLayout_2 = new QGridLayout(gbFlags);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cbAddressArea = new QCheckBox(gbFlags);
        cbAddressArea->setObjectName(QString::fromUtf8("cbAddressArea"));

        gridLayout_2->addWidget(cbAddressArea, 1, 1, 1, 1);

        cbOverwriteMode = new QCheckBox(gbFlags);
        cbOverwriteMode->setObjectName(QString::fromUtf8("cbOverwriteMode"));

        gridLayout_2->addWidget(cbOverwriteMode, 1, 0, 1, 1);

        cbHighlighting = new QCheckBox(gbFlags);
        cbHighlighting->setObjectName(QString::fromUtf8("cbHighlighting"));

        gridLayout_2->addWidget(cbHighlighting, 2, 0, 1, 1);

        cbAsciiArea = new QCheckBox(gbFlags);
        cbAsciiArea->setObjectName(QString::fromUtf8("cbAsciiArea"));

        gridLayout_2->addWidget(cbAsciiArea, 2, 1, 1, 1);

        cbReadOnly = new QCheckBox(gbFlags);
        cbReadOnly->setObjectName(QString::fromUtf8("cbReadOnly"));

        gridLayout_2->addWidget(cbReadOnly, 3, 0, 1, 1);


        verticalLayout->addWidget(gbFlags);

        gbColors = new QGroupBox(OptionsDialog);
        gbColors->setObjectName(QString::fromUtf8("gbColors"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gbColors->sizePolicy().hasHeightForWidth());
        gbColors->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(gbColors);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pbHighlightingColor = new QPushButton(gbColors);
        pbHighlightingColor->setObjectName(QString::fromUtf8("pbHighlightingColor"));

        gridLayout->addWidget(pbHighlightingColor, 0, 0, 1, 1);

        lbHighlightingColor = new QLabel(gbColors);
        lbHighlightingColor->setObjectName(QString::fromUtf8("lbHighlightingColor"));
        lbHighlightingColor->setMinimumSize(QSize(100, 0));
        lbHighlightingColor->setMaximumSize(QSize(16777215, 16777215));
        lbHighlightingColor->setFrameShape(QFrame::Panel);
        lbHighlightingColor->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lbHighlightingColor, 0, 1, 1, 1);

        pbSelectionColor = new QPushButton(gbColors);
        pbSelectionColor->setObjectName(QString::fromUtf8("pbSelectionColor"));

        gridLayout->addWidget(pbSelectionColor, 1, 0, 1, 1);

        lbSelectionColor = new QLabel(gbColors);
        lbSelectionColor->setObjectName(QString::fromUtf8("lbSelectionColor"));
        lbSelectionColor->setMinimumSize(QSize(100, 0));
        lbSelectionColor->setMaximumSize(QSize(16777215, 16777215));
        lbSelectionColor->setFrameShape(QFrame::Panel);
        lbSelectionColor->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lbSelectionColor, 1, 1, 1, 1);

        pbAddressAreaColor = new QPushButton(gbColors);
        pbAddressAreaColor->setObjectName(QString::fromUtf8("pbAddressAreaColor"));

        gridLayout->addWidget(pbAddressAreaColor, 2, 0, 1, 1);

        lbAddressAreaColor = new QLabel(gbColors);
        lbAddressAreaColor->setObjectName(QString::fromUtf8("lbAddressAreaColor"));
        lbAddressAreaColor->setMinimumSize(QSize(100, 0));
        lbAddressAreaColor->setMaximumSize(QSize(16777215, 16777215));
        lbAddressAreaColor->setFrameShape(QFrame::Panel);
        lbAddressAreaColor->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lbAddressAreaColor, 2, 1, 1, 1);

        pbAddressFontColor = new QPushButton(gbColors);
        pbAddressFontColor->setObjectName(QString::fromUtf8("pbAddressFontColor"));

        gridLayout->addWidget(pbAddressFontColor, 3, 0, 1, 1);

        lbAddressFontColor = new QLabel(gbColors);
        lbAddressFontColor->setObjectName(QString::fromUtf8("lbAddressFontColor"));
        lbAddressFontColor->setMinimumSize(QSize(100, 0));
        lbAddressFontColor->setMaximumSize(QSize(16777215, 16777215));
        lbAddressFontColor->setFrameShape(QFrame::Panel);
        lbAddressFontColor->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lbAddressFontColor, 3, 1, 1, 1);

        pbAsciiAreaColor = new QPushButton(gbColors);
        pbAsciiAreaColor->setObjectName(QString::fromUtf8("pbAsciiAreaColor"));

        gridLayout->addWidget(pbAsciiAreaColor, 4, 0, 1, 1);

        lbAsciiAreaColor = new QLabel(gbColors);
        lbAsciiAreaColor->setObjectName(QString::fromUtf8("lbAsciiAreaColor"));
        lbAsciiAreaColor->setMinimumSize(QSize(100, 0));
        lbAsciiAreaColor->setMaximumSize(QSize(16777215, 16777215));
        lbAsciiAreaColor->setFrameShape(QFrame::Panel);
        lbAsciiAreaColor->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lbAsciiAreaColor, 4, 1, 1, 1);

        pbAsciiFontColor = new QPushButton(gbColors);
        pbAsciiFontColor->setObjectName(QString::fromUtf8("pbAsciiFontColor"));

        gridLayout->addWidget(pbAsciiFontColor, 5, 0, 1, 1);

        lbAsciiFontColor = new QLabel(gbColors);
        lbAsciiFontColor->setObjectName(QString::fromUtf8("lbAsciiFontColor"));
        lbAsciiFontColor->setMinimumSize(QSize(100, 0));
        lbAsciiFontColor->setMaximumSize(QSize(16777215, 16777215));
        lbAsciiFontColor->setFrameShape(QFrame::Panel);
        lbAsciiFontColor->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lbAsciiFontColor, 5, 1, 1, 1);

        pbHexFontColor = new QPushButton(gbColors);
        pbHexFontColor->setObjectName(QString::fromUtf8("pbHexFontColor"));

        gridLayout->addWidget(pbHexFontColor, 6, 0, 1, 1);

        lbHexFontColor = new QLabel(gbColors);
        lbHexFontColor->setObjectName(QString::fromUtf8("lbHexFontColor"));
        lbHexFontColor->setMinimumSize(QSize(100, 0));
        lbHexFontColor->setMaximumSize(QSize(16777215, 16777215));
        lbHexFontColor->setFrameShape(QFrame::Panel);
        lbHexFontColor->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lbHexFontColor, 6, 1, 1, 1);

        pbWidgetFont = new QPushButton(gbColors);
        pbWidgetFont->setObjectName(QString::fromUtf8("pbWidgetFont"));

        gridLayout->addWidget(pbWidgetFont, 7, 0, 1, 1);

        leWidgetFont = new QLineEdit(gbColors);
        leWidgetFont->setObjectName(QString::fromUtf8("leWidgetFont"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leWidgetFont->sizePolicy().hasHeightForWidth());
        leWidgetFont->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(10);
        leWidgetFont->setFont(font);

        gridLayout->addWidget(leWidgetFont, 7, 1, 1, 1);


        verticalLayout->addWidget(gbColors);

        gbAddressAreaWidth = new QGroupBox(OptionsDialog);
        gbAddressAreaWidth->setObjectName(QString::fromUtf8("gbAddressAreaWidth"));
        gridLayout_3 = new QGridLayout(gbAddressAreaWidth);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lbAddressAreaWidth = new QLabel(gbAddressAreaWidth);
        lbAddressAreaWidth->setObjectName(QString::fromUtf8("lbAddressAreaWidth"));

        gridLayout_3->addWidget(lbAddressAreaWidth, 0, 0, 1, 1);

        sbAddressAreaWidth = new QSpinBox(gbAddressAreaWidth);
        sbAddressAreaWidth->setObjectName(QString::fromUtf8("sbAddressAreaWidth"));
        sbAddressAreaWidth->setMinimum(1);
        sbAddressAreaWidth->setMaximum(6);
        sbAddressAreaWidth->setValue(4);

        gridLayout_3->addWidget(sbAddressAreaWidth, 0, 1, 1, 1);


        verticalLayout->addWidget(gbAddressAreaWidth);

        gbHexArea = new QGroupBox(OptionsDialog);
        gbHexArea->setObjectName(QString::fromUtf8("gbHexArea"));
        gridLayout_4 = new QGridLayout(gbHexArea);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lbBytesPerLine = new QLabel(gbHexArea);
        lbBytesPerLine->setObjectName(QString::fromUtf8("lbBytesPerLine"));

        gridLayout_4->addWidget(lbBytesPerLine, 0, 0, 1, 1);

        sbBytesPerLine = new QSpinBox(gbHexArea);
        sbBytesPerLine->setObjectName(QString::fromUtf8("sbBytesPerLine"));
        sbBytesPerLine->setMinimum(1);
        sbBytesPerLine->setMaximum(32);
        sbBytesPerLine->setValue(16);

        gridLayout_4->addWidget(sbBytesPerLine, 0, 1, 1, 1);


        verticalLayout->addWidget(gbHexArea);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(OptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(pbHighlightingColor, pbAddressAreaColor);
        QWidget::setTabOrder(pbAddressAreaColor, buttonBox);

        retranslateUi(OptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QCoreApplication::translate("OptionsDialog", "HexWalk - Options", nullptr));
        gbFlags->setTitle(QCoreApplication::translate("OptionsDialog", "Flags", nullptr));
        cbAddressArea->setText(QCoreApplication::translate("OptionsDialog", "Address Area", nullptr));
        cbOverwriteMode->setText(QCoreApplication::translate("OptionsDialog", "Overwrite Mode", nullptr));
        cbHighlighting->setText(QCoreApplication::translate("OptionsDialog", "Highlighting", nullptr));
        cbAsciiArea->setText(QCoreApplication::translate("OptionsDialog", "Ascii Area", nullptr));
        cbReadOnly->setText(QCoreApplication::translate("OptionsDialog", "ReadOnly", nullptr));
        gbColors->setTitle(QCoreApplication::translate("OptionsDialog", "Colors and Fonts", nullptr));
        pbHighlightingColor->setText(QCoreApplication::translate("OptionsDialog", "Highlighting Color", nullptr));
        lbHighlightingColor->setText(QString());
        pbSelectionColor->setText(QCoreApplication::translate("OptionsDialog", "Selection Color", nullptr));
        lbSelectionColor->setText(QString());
        pbAddressAreaColor->setText(QCoreApplication::translate("OptionsDialog", "Address Area Color", nullptr));
        lbAddressAreaColor->setText(QString());
        pbAddressFontColor->setText(QCoreApplication::translate("OptionsDialog", "Address Font Color", nullptr));
        lbAddressFontColor->setText(QString());
        pbAsciiAreaColor->setText(QCoreApplication::translate("OptionsDialog", "ASCII Area Color", nullptr));
        lbAsciiAreaColor->setText(QString());
        pbAsciiFontColor->setText(QCoreApplication::translate("OptionsDialog", "ASCII Font Color", nullptr));
        lbAsciiFontColor->setText(QString());
        pbHexFontColor->setText(QCoreApplication::translate("OptionsDialog", "Hex Font Color", nullptr));
        lbHexFontColor->setText(QString());
        pbWidgetFont->setText(QCoreApplication::translate("OptionsDialog", "Widget Font", nullptr));
        leWidgetFont->setText(QCoreApplication::translate("OptionsDialog", "01 23 45 67 89 ab cd ef", nullptr));
        gbAddressAreaWidth->setTitle(QCoreApplication::translate("OptionsDialog", "Address Area", nullptr));
        lbAddressAreaWidth->setText(QCoreApplication::translate("OptionsDialog", "Address Area Width", nullptr));
        gbHexArea->setTitle(QCoreApplication::translate("OptionsDialog", "Hex Area", nullptr));
        lbBytesPerLine->setText(QCoreApplication::translate("OptionsDialog", "Bytes per Line", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
