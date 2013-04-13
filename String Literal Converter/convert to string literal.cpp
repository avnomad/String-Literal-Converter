//	Copyright (C) 2008, 2012 Vaptistis Anogeianakis <nomad@cornercase.gr>
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


#include "stdafx.h"
#include "convert to string literal.h"


char *convertToStringLiteral(const char *source, char conversionCharacter, char breakCharacter, bool for_printf)
{
	char *convertedString;
	char *destination;
	size_t currentSize, allocatedSize;

	if(!source) return 0;

	destination = convertedString = (char *)malloc(allocatedSize = 10);
	*destination = '\"';
	currentSize = 1;
	while(*source)
	{
		switch (*source)
		{
		case '\n':
			*++destination = '\\';
			*++destination = 'n';
			break;
		case '\t':
			*++destination = '\\';
			*++destination = 't';
			break;
		case '\v':
			*++destination = '\\';
			*++destination = 'v';
			break;
		case '\b':
			*++destination = '\\';
			*++destination = 'b';
			break;
		case '\r':
			/**++destination = '\\';	// the textBoxes seem to but extra '\r' before the '\n's so I exclude '\r'
			*++destination = 'r';*/		// to avoid possible future complications. Though no such complications have occured yet.
			currentSize -= 2;
			break;
		case '\f':
			*++destination = '\\';
			*++destination = 'f';
			break;
		case '\a':
			*++destination = '\\';
			*++destination = 'a';
			break;
		case '\\':
			*++destination = '\\';
			*++destination = '\\';
			break;
		case '\'':
			*++destination = '\\';
			*++destination = '\'';
			break;
		case '\"':
			*++destination = '\\';
			*++destination = '\"';
			break;
		case '%':
			if(for_printf)
			{
				*++destination = '%';
				*++destination = '%';
			}
			else
			{
				*++destination = '%';
				--currentSize;
			}
			break;
		default:
			if(*source == conversionCharacter)
			{
				*++destination = '%';
				*++destination = 's';
			}
			else if(*source == breakCharacter)
			{
				*++destination = '\"';
				*++destination = ',';
				*++destination = '\n';
				*++destination = '\"';
				currentSize += 2;
			}
			else
			{
				*++destination = *source;
				--currentSize;
			}
			break;
		} // end switch
		currentSize += 2;
		if(currentSize > allocatedSize - 4)
			destination = (convertedString = (char *)realloc(convertedString , allocatedSize <<= 1)) + currentSize-1;
		++source;
	} // end while
	*++destination = '\"';
	*++destination = '\0';
	currentSize += 2;
	convertedString = (char *)realloc(convertedString , currentSize);
	return convertedString;
} // end function convertToStringLiteral
