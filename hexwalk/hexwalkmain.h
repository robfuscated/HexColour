/*
 * Copyright (C) 2025 Carmix <carmixdev@gmail.com>
 *
 * This file is part of HexWalk.
 *
 * HexWalk is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HexWalk is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef HEXWALKMAIN_H
#define HEXWALKMAIN_H

#include <QMainWindow>
#include "../qhexedit/qhexedit.h"


#include "searchdialog.h"
#include "advancedsearchdialog.h"
#include "entropydialog.h"
#include "binanalysisdialog.h"
#include "hashdialog.h"
#include "diffdialog.h"
#include "edittagdialog.h"
#include "stringsdialog.h"
#include "bytemapdialog.h"
#include "disasmwidget.h"
#include "converterwidget.h"
#include "optionsdialog.h"
#include "../qhexedit/bytepattern.h"

QT_BEGIN_NAMESPACE
class QAction;
class QMenu;
class QUndoStack;
class QLabel;
class QDragEnterEvent;
class QDropEvent;
QT_END_NAMESPACE

namespace Ui {
class HexWalkMain;
}

class HexWalkMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit HexWalkMain(QWidget *parent = nullptr);
    ~HexWalkMain();
    void loadFile(const QString &fileName);
signals:
    void fileLoaded();

protected:
    void closeEvent(QCloseEvent *event);
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
private slots:
    void about();
    void dataChanged();
    void open();
    void close();
    void openRecent();
    void findNext();
    bool save();
    bool saveAs();
    void saveSelectionToReadableFile();
    void saveToReadableFile();
    void setAddress(qint64 address);
    void setOverwriteMode(bool mode);
    void setSize(qint64 size);
    void showSearchDialog();
    void showAdvancedSearchDialog();
    void showEntropyDialog();
    void showBinaryDialog();
    void showDiffDialog();
    void showOptionsDialog();
    void showConverterWidget();
    void showHashDialog();
    void showTagsDialog();
    void showStringsDialog();
    void showByteMap();
    void showDisasm();
    void toggleOverwriteMode();
    void gotoAddress();
    void setWidth();
    void updateOptions();

    void on_signedcb_clicked();

    // Tags pane slots
    void onTagsAddBtnClicked();
    void onTagsDelBtnClicked();
    void onTagsLoadBtnClicked();
    void onTagsSaveBtnClicked();
    void onTagsResetBtnClicked();
    void onTagsTableClicked(const QModelIndex &index);
    void onTagsTableDoubleClicked(const QModelIndex &index);
    void triggerTagsUpdate();
    void triggerTagsFileUpdate();
    
    // Slot for adding byte pattern from hex editor selection
    void onAddBytePatternFromSelection(qint64 start, qint64 length, QByteArray data);

private:
    void init();
    void adjustForCurrentFile(const QString& filePath);
    void updateRecentActionList();
    void setFileActionsEnabled(bool enabled);
    void updateInfo();
    void initTagsPane();
    void updateTagsTable();
    void analyzeTagsPattern();
    QString binToStr(QByteArray bin);
    
    QList<QAction*> recentFileActionList;
    QString curFile;
    QFile file;
    QFile hexfile;
    QString diffFile;
    bool isUntitled;
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *helpMenu;
    QMenu *analysisMenu;
    QMenu *toolsMenu;
    QMenu *recentFilesMenu;
    QString currentFilePath;
    QToolBar *infoToolBar;
    QToolBar *fileToolBar;
    QToolBar *editToolBar;
    QToolBar *analysisToolBar;

    QAction *openAct;
    QAction *saveAct;
    QAction *saveAsAct;
    QAction *saveReadable;
    QAction *closeAct;
    QAction *exitAct;
    QAction *binaryAct;
    QAction *optionsAct;
    QAction *overwriteAct;
    QAction *hashAct;
    QAction *diffAct;
    QAction *tagsAct;
    QAction *stringsAct;
    QAction *byteMapAct;
    QAction *disasmAct;

    QAction *undoAct;
    QAction *redoAct;
    QAction *copyAct;
    QAction *pasteAct;
    QAction *cutAct;
    QAction *saveSelectionReadable;

    QAction *aboutAct;
    QAction *aboutQtAct;
    QAction *findAct;
    QAction *findNextAct;
    QAction *advancedFindAct;
    QAction *entropyAct;
    QAction *converterAct;
    void createActions();
    void createMenus();
    void createStatusBar();
    void createToolBars();
    void setCurrentFile(const QString &fileName);
    void readSettings();
    void writeSettings();
    bool saveFile(const QString &fileName);
    QString strippedName(const QString &fullFileName);
    Ui::HexWalkMain *ui;
    QHexEdit *hexEdit;

    EntropyDialog *entropyDialog;
    ByteMapDialog *byteMapDialog;
    HashDialog * hashDialog;
    SearchDialog *searchDialog;
    binanalysisdialog * analysisDialog;
    AdvancedSearchDialog *advancedSearchDialog;
    OptionsDialog *optionsDialog;
    DiffDialog *diffDialog;
    StringsDialog *stringsDialog;
    DisasmWidget * disasmWidget;
    ConverterWidget * converterWidget;
    QLabel *lbAddress, *lbAddressName;
    QLabel *lbOverwriteMode, *lbOverwriteModeName;
    QLabel *lbSize, *lbSizeName;
    QLabel * gotoLbl;
    QLineEdit * gotoText;
    QLabel * widthLbl;
    QLineEdit * widthText;
    QSettings * appSettings;
    
    // Tags pane members (replacing TagsDialog)
    BytePattern *bytePattern;
    EditTagDialog *edittagDialog;
    QString curFileTag;
};

#endif // HEXWALKMAIN_H
