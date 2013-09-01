// PreferencesDialog.hh
//
// Copyright (C) 2001 - 2013 Rob Caelers & Raymond Penners
// All rights reserved.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef PREFERENCESDIALOG_HH
#define PREFERENCESDIALOG_HH

#include <QtGui>
#include <QtWidgets>

#include "SizeGroup.hh"
#include "DataConnector.hh"

class PreferencesDialog : public QDialog
{
  Q_OBJECT
  
public:
  PreferencesDialog();
  virtual ~PreferencesDialog();

protected:

private:
  void add_page(const char *label, const char *image, QWidget *widget);

  QWidget *create_timer_page();

  QWidget *create_ui_page();
  QWidget *create_ui_general_page();
  QWidget *create_ui_sounds_page();
  QWidget *create_ui_main_window_page();
  QWidget *create_ui_applet_page();

  QTabWidget *notebook;

  SizeGroup* hsize_group;
  SizeGroup* vsize_group;

  DataConnector *connector;
};

#endif // PREFERENCESDIALOG_HH