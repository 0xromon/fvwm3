/* This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _BORDERS_H
#define _BORDERS_H

void SetBorder (FvwmWindow *, Bool,int,Bool, Window);
void RedrawBorder (FvwmWindow *, Bool,int,Bool, Window);
void SetTitleBar(FvwmWindow *, Bool,Bool);
void SetupTitleBar(FvwmWindow *tmp_win, int w, int h);
void SetupFrame(FvwmWindow *,int,int,int,int,Bool,Bool);
void ForceSetupFrame(FvwmWindow *,int,int,int,int,Bool,Bool);
void SetShape(FvwmWindow *, int);
void cmd_button_state(F_CMD_ARGS);
#ifdef BORDERSTYLE
void SetBorderStyle(F_CMD_ARGS);
#endif

#endif /* _BORDERS_H */
