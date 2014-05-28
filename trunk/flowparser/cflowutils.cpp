/*
 * codimension - graphics python two-way code editor and analyzer
 * Copyright (C) 2014  Sergey Satskiy <sergey.satskiy@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * $Id$
 *
 * Python extension module - utility functions
 */

#include <string.h>
#include "cflowutils.hpp"



const char *  trimStart( const char *  str )
{
    while ( memchr( " \t\n\r", *str, 4 ) )
        ++str;
    return str;
}

const char *  trimEnd( const char *  end )
{
    while ( memchr( " \t\n\r", end[ -1 ], 4 ) )
        --end;
    return end;
}

std::string  trim( const char *  buffer, int  len )
{
    return std::string( trimStart( buffer ),
                        trimEnd( buffer + len ) );
}

void trimInplace( std::string &  str )
{
    str.assign( trimStart( str.c_str() ),
                trimEnd( str.c_str() + str.length() ) );
}

