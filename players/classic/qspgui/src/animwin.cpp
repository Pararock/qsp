// Copyright (C) 2005-2010 Valeriy Argunov (nporep AT mail DOT ru)
/*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/

#include "animwin.h"

wxIMPLEMENT_CLASS(QSPAnimWin, wxGenericAnimationCtrl);

BEGIN_EVENT_TABLE(QSPAnimWin, wxGenericAnimationCtrl)
    EVT_KEY_UP(QSPAnimWin::OnKeyUp)
    EVT_MOUSEWHEEL(QSPAnimWin::OnMouseWheel)
    EVT_LEFT_DOWN(QSPAnimWin::OnMouseClick)
END_EVENT_TABLE()

QSPAnimWin::QSPAnimWin(wxWindow *parent) :
    wxGenericAnimationCtrl(parent, wxID_ANY, wxNullAnimation, wxDefaultPosition, wxDefaultSize, wxNO_BORDER | wxAC_NO_AUTORESIZE)
{
}

void QSPAnimWin::RefreshUI()
{
    IncrementalUpdateBackingStore();
    Refresh();
}

void QSPAnimWin::OnKeyUp(wxKeyEvent& event)
{
    event.Skip();
    event.ResumePropagation(wxEVENT_PROPAGATE_MAX);
}

void QSPAnimWin::OnMouseWheel(wxMouseEvent& event)
{
    event.Skip();
    event.ResumePropagation(wxEVENT_PROPAGATE_MAX);
}

void QSPAnimWin::OnMouseClick(wxMouseEvent& event)
{
    event.Skip();
    event.ResumePropagation(wxEVENT_PROPAGATE_MAX);
}
