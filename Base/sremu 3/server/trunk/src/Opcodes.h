
/* 
 * Copyright (C) 2005-2008 SREmu <http://www.sremu.org/>
 *
 * This program is free software; you can redistribute it and/or modify
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

enum CLIENT_OPCODES 
{
	GAME_CLIENT_INFO				= 0x2001,
	GAME_CLIENT_KEEP_ALIVE			= 0x2002,
	GAME_CLIENT_PATCH_REQUEST		= 0x6100,
	GAME_CLIENT_AUTH				= 0x6103,
	GAME_CLIENT_ITEM_MOVE			= 0x706d,
	GAME_CLIENT_INGAME_NOTIFY		= 0x707b,
	GAME_CLIENT_CLOSE				= 0x70b7,
	GAME_CLIENT_CHARACTER			= 0x72F7,
	GAME_CLIENT_CHAT				= 0x7367,
	GAME_CLIENT_INGAME_REQUEST		= 0x7426,
	GAME_CLIENT_TARGET				= 0x745A,
	GAME_CLIENT_GM					= 0x75B6,
	GAME_CLIENT_MOVEMENT			= 0x7738,
	GAME_CLIENT_ACCEPT_HANDSHAKE 	= 0x9000,
	GAME_CLIENT_EMOTION             = 0x324B,//update carlosx
    GAME_CLIENT_SIT                 = 0x7017,//update carlosx
	GAME_CLIENT_ESTRELLA            = 0x7683,//update carlosx
	GAME_CLIENT_ADDSKILL            = 0x72CB,//update carlosx
	GAME_CLIENT_MASTERY             = 0x7165,//update carlosx
	GAME_CLIENT_ATSKILL             = 0x72CD,//update carlosx
	GAME_CLIENT_ADDSTR              = 0x727A,//update carlosx
	GAME_CLIENT_ADDINT              = 0x7552,//update carlosx

	LOGIN_CLIENT_INFO				= 0x2001,
	LOGIN_CLIENT_KEEP_ALIVE			= 0x2002,
	LOGIN_CLIENT_PATCH_REQUEST		= 0x6100,
	LOGIN_CLIENT_SERVERLIST_REQUEST	= 0x6101,
	LOGIN_CLIENT_AUTH				= 0x6102,
	LOGIN_CLIENT_ACCEPT_HANDSHAKE 	= 0x9000,
	LOGIN_CLIENT_LAUNCHER			= 0x6104
};

enum SERVER_OPCODES 
{
	GAME_SERVER_INFO				= 0x2001,
	GAME_SERVER_SPAWN				= 0x30D7,	/* This is actually used for all objects (items, players) */
	GAME_SERVER_QUIT_GAME			= 0x315A,
	GAME_SERVER_LOADING_END			= 0x31DB,
	GAME_SERVER_CHARDATA			= 0x32B3,
	GAME_SERVER_GUILD_UPDATE		= 0x32C4,
	GAME_SERVER_ITEM_EQUIP			= 0x3314,
	GAME_SERVER_STATS				= 0x343C,
	GAME_SERVER_GUILD_UNKNOWN1		= 0x365F,
	GAME_SERVER_CHAT				= 0x3667,
	GAME_SERVER_DESPAWN_PLAYER		= 0x36AB,
	GAME_SERVER_ITEM_UNEQUIP		= 0x377C,
	GAME_SERVER_LOADING_START		= 0x379D,
	GAME_SERVER_HANDSHAKE			= 0x5000,
	GAME_SERVER_PATCH_INFO			= 0x600D,
	GAME_SERVER_ITEM_MOVEMENT		= 0xB06D,
	GAME_SERVER_COUNTDOWN			= 0xB0B7,
	GAME_SERVER_CHARACTER			= 0xB2F7,
	GAME_SERVER_CHAT_ACCEPT			= 0xB367,
	GAME_SERVER_INGAME_ACCEPT		= 0xB426,
	GAME_SERVER_TARGET				= 0xB45A,
	GAME_SERVER_GUILD_INFO			= 0xB6B8,
	GAME_SERVER_MOVEMENT			= 0xB738,
	
	LOGIN_SERVER_INFO				= 0x2001,
	LOGIN_SERVER_HANDSHAKE			= 0x5000,
	LOGIN_SERVER_PATCH_INFO			= 0x600D,
	LOGIN_SERVER_LAUNCHER			= 0x600D,
	LOGIN_SERVER_LIST				= 0xA101,
	LOGIN_SERVER_AUTH_INFO			= 0xA102
};