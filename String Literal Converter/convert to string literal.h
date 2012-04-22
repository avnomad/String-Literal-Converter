//	Copyright (C) 2008, 2012 Vaptistis Anogeianakis <el05208@mail.ntua.gr>
/*
 *	This file is part of String Literal Converter.
 *
 *	String Literal Converter is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	String Literal Converter is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with String Literal Converter.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CONVERT_TO_STRING_LITERAL_H
#define CONVERT_TO_STRING_LITERAL_H

char *convertToStringLiteral(const char *source, char conversionCharacter, char breakCharacter, bool for_printf);

#endif