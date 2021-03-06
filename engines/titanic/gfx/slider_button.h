/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef TITANIC_SLIDER_BUTTON_H
#define TITANIC_SLIDER_BUTTON_H

#include "titanic/gfx/st_button.h"

namespace Titanic {

class CSliderButton : public CSTButton {
	DECLARE_MESSAGE_MAP;
	bool MouseButtonUpMsg(CMouseButtonUpMsg *msg);
	bool MouseButtonDownMsg(CMouseButtonDownMsg *msg);
	bool MouseDragMoveMsg(CMouseDragMoveMsg *msg);
	bool StatusChangeMsg(CStatusChangeMsg *msg);
	bool EnterViewMsg(CEnterViewMsg *msg);
private:
	int _field114;
	int _field118;
	int _field11C;
	Point _pos1;
public:
	CLASSDEF;
	CSliderButton();

	/**
	 * Save the data for the class to file
	 */
	virtual void save(SimpleFile *file, int indent);

	/**
	 * Load the data for the class from file
	 */
	virtual void load(SimpleFile *file);
};

} // End of namespace Titanic

#endif /* TITANIC_SLIDER_BUTTON_H */
