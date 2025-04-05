static const char *colorname[NUMCOLS] = {
	[INIT]      = "#000000", /* after initialization */
	[INPUT]     = "#928374", /* during input */
	[INPUT_ALT] = "#A89984", /* during input, second color */
	[FAILED]    = "#CC241D", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
