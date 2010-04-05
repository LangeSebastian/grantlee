/*
  This file is part of the Grantlee template system.

  Copyright (c) 2010 Stephen Kelly <steveire@gmail.com>

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either version
  2 of the Licence, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Library General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef AUDIO_TEXTEDIT_H
#define AUDIO_TEXTEDIT_H

#include <QTextEdit>

class AudioTextEdit : public QTextEdit
{
  Q_OBJECT
public:
  AudioTextEdit(QWidget* parent = 0);

protected:
 bool eventFilter(QObject *obj, QEvent *event);

};

#endif