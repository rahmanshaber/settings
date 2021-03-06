/*
Settings is for setup CoreApps settings

Settings is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; version 2
of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, see {http://www.gnu.org/licenses/}. */

#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDir>
#include <QFile>
#include <QIcon>
#include <QFileDialog>
#include <QTreeWidgetItem>
#include <QtConcurrent>
#include <QWidget>
#include <QTreeWidgetItem>
#include <QPushButton>
#include <QMessageBox>

//#include "corefm/mimeutils.h"
//#include "applicationdialog.h"
//#include "corearchiver/corearchiver.h"
#include <cprime/themefunc.h>
#include <cprime/settingsmanage.h>
#include <cprime/appopenfunc.h>


namespace Ui {
class settings;
}

class settings : public QWidget
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = nullptr);
    ~settings();

protected slots:
    void onMimeSelected(QTreeWidgetItem* current, QTreeWidgetItem* previous);
    void updateMimeAssoc(QTreeWidgetItem* item);
    void showAppDialog();
    void removeAppAssoc();
    void moveAppAssocUp();
    void moveAppAssocDown();

private slots:
    void on_cancel_clicked();
    void on_ok_clicked();
    void on_browseF_clicked();
    void on_browseS_clicked();
    void pageClick(QPushButton *btn, int i, QString title);
    void on_coreapps_clicked();
    void on_coreaction_clicked();
    void on_corefm_clicked();
    void on_coreshot_clicked();
    void on_backUp_clicked();
    void on_restore_clicked();
    void on_setDefaultApp_toggled(bool checked);

    void on_setTerminals_clicked();

    void on_setFileManger_clicked();

    void on_setTextEditor_clicked();

    void on_seImageViewer_clicked();

    void on_setImageEditor_clicked();

    void on_setPdfViewer_clicked();

    void on_setMediaPlayer_clicked();

private:
    Ui::settings *ui;
    SettingsManage sm;

    void setupCoreBoxPage();
    void setupCoreActionPage();
    void setupCoreFMPage();
    void setupCoreShotPage();
    void setupMime();
};

#endif // SETTINGS_H
