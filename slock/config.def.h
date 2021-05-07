/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#cc3333",   /* wrong password */
};

/* lock screen opacity */
static const float alpha = 0.7;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 120;

/* default message */
static const char * message = "Enter password to unlock";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * text_size = "fixed";
//static const char * text_size = "-*-dejavu sans mono-bold-r-normal--22-*-*-*-*-*-iso10646-1";
