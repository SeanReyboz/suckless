//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/                	/*Command*/		            /*Update Interval*/  /*Update Signal*/
	{"^c#a3be8c^ 󰓇  ^c#e5e9f0^",   "~/scripts/dwm-status/spotify.sh",	        1,	0},
	{"^c#88c0d0^󰤨  ^c#e5e9f0^",   "~/scripts/dwm-status/network.sh",	        5,	0},
	{"^c#bf616a^󰋑  ^c#e5e9f0^",   "~/scripts/dwm-status/battery.sh",	        10,	0},
	//{"󰍛  ",   "~/scripts/dwm-status/ram-usage.sh",			       	        5,	0},
	//{"󰔏  ",   "~/scripts/dwm-status/cpu.sh",			        	5,	0},
	{"^c#b48ead^󰕾  ^c#e5e9f0^",   "~/scripts/dwm-status/volume.sh",			1,	0},
	{"^c#eceff4^󰃞  ^c#e5e9f0^",   "~/scripts/dwm-status/brightness.sh",	    	1,	0},
	{"^c#ebcb8b^󰃭  ^c#e5e9f0^",   "date '+%a %d %b'",			        30,	0},
	{"^c#81a1c1^󰥔  ^c#e5e9f0^",   "date '+%R ' ",				        5,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  |  ";
static unsigned int delimLen = 9;
