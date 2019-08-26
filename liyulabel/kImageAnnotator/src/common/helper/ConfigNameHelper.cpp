/*
 * Copyright (C) 2018 Damir Porobic <damir.porobic@gmx.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "ConfigNameHelper.h"

namespace kImageAnnotator {

QString ConfigNameHelper::annotator()
{
	return QStringLiteral("KImageAnnotator/");
}

QString ConfigNameHelper::toolType()
{
	return annotator() + QStringLiteral("ToolType");
}

QString ConfigNameHelper::toolWidth(ToolTypes tool)
{
	return annotator() + QStringLiteral("ToolWidth_") + QString::number(static_cast<int>(tool));
}

QString ConfigNameHelper::toolColor(ToolTypes tool)
{
	return annotator() + QStringLiteral("ToolColor_") + QString::number(static_cast<int>(tool));
}

QString ConfigNameHelper::toolTextColor(ToolTypes tool)
{
	return annotator() + QStringLiteral("ToolTextColor_") + QString::number(static_cast<int>(tool));
}

QString ConfigNameHelper::toolFillType(ToolTypes tool)
{
	return annotator() + QStringLiteral("ToolFillType_") + QString::number(static_cast<int>(tool));
}

QString ConfigNameHelper::toolFontSize(ToolTypes tool)
{
	return annotator() + QStringLiteral("ToolFontSize_") + QString::number(static_cast<int>(tool));
}

QString ConfigNameHelper::blurRadius()
{
	return annotator() + QStringLiteral("BlurRadius");
}

}