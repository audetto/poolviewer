/*
 * This file is part of PoolViewer
 * Copyright (c) 2011 Ivor Hewitt
 *
 * PoolViewer is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * PoolViewer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PoolViewer.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef CONFIGIMPL_H
#define CONFIGIMPL_H
//
#include <QDialog>
#include "ui_config.h"

#include "exerciseset.h"

//
class Usb;

class ConfigImpl : public QDialog, public Ui::ConfigDlg
{
Q_OBJECT
public:
    ConfigImpl( QWidget * parent = 0, Qt::WindowFlags f = 0 );

private slots:

    void on_buttonBox_accepted();

    void on_podLive_clicked(bool checked);

    void on_podOriginal_clicked(bool checked);

    void on_podTypeA_clicked(bool checked);

private:
};

#endif
