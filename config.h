/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =   "black",     /* after initialization */
	[INIT] =   "#a8a8a8",     /* after initialization #2d2d2d*/
	[INPUT] =  "#00afff",   /* during input #005577*/
	[FAILED] = "#ff0000",   /* wrong password #CC3333*/
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
static const int logow = 14;	/* grid width and height for right center alignment*/
static const int logoh = 9;

static XRectangle rectangles[9] = {
	/* x	y	w	h */
	{ 1,	2,	1,	5 },

	{ 2,	1,	5,	1 },

	{ 3,	3,	3,	1 },

	{ 2,	6,	3,	1 },

	{ 5,	4,	1,	4 },


	{ 9,	3,	1,	4 },

	{ 10,	3,	2,	1 },

	{ 10,	6,	2,	1 },

	{ 12,	3,	1,	4 },

};
