/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "boxes/generic_box.h"

namespace Window {

class Controller;

namespace Theme {

void CreateBox(
	not_null<GenericBox*> box,
	not_null<Window::Controller*> window);
void SaveThemeBox(
	not_null<GenericBox*> box,
	not_null<Window::Controller*> window,
	const QByteArray &palette);

} // namespace Theme
} // namespace Window