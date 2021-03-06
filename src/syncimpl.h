/*
 * This file is part of PoolViewer
 * Copyright (c) 2011-2015 Ivor Hewitt
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

#ifndef SYNCIMPL_H
#define SYNCIMPL_H
//
#include <QDialog>

#include "ui_sync.h"
#include "exerciseset.h"

class PodBase;

class SyncImpl : public QDialog, public Ui::syncDlg
{
Q_OBJECT
public:
    typedef enum {
        PODA,
        POD,
        PODLIVE } PODTYPE;

    SyncImpl( QWidget * parent = 0, Qt::WindowFlags f = 0 );
    ~SyncImpl();

    void getData(std::vector<ExerciseSet>& data);

private slots:
    void podMsg(QString);
    void podProgress(int);

private:
    void start();
    
    PodBase *pod;
    PODTYPE mDevice;  
};

#endif
