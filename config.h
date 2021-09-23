/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =   "black",     /* after initialization */
	[INIT] =   "#a8a8a8",     /* after initialization #2d2d2d*/
	[INPUT] =  "#ffaf00",   /* during input #005577*/
	[FAILED] = "#ff0000",   /* wrong password #CC3333*/
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
static const int logow = 18;	/* grid width and height for right center alignment*/
static const int logoh = 7;

static XRectangle rectangles[15] = {
	/* x	y	w	h */
	{ 0,	5,	4,	1 },
	{ 3,	0,	1,	5 },

	{ 5,	3,	1,	3 },
	{ 6,	3,	1,	1 },
	{ 6,	5,	1,	1 },
	{ 7,	3,	1,	3 },
	{ 8,	5,	1,	1 },

	{ 10,	3,	1,	2 },
	{ 11,	5,	1,	1 },
	{ 12,	3,	1,	2 },

	{ 14,	3,	1,	3 },
	{ 15,	3,	1,	1 },
	{ 15,	5,	1,	1 },
	{ 16,	3,	1,	3 },
	{ 17,	5,	1,	1 },

};
