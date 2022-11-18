/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static const char *fonts[] = {
	font,
	"monospace:size=10",
};

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char color0[] = "#bbbbbb";
static char color1[] = "#222222";
static char color2[]  = "#eeeeee";
static char color3[]  = "#005577";
static char *colors[SchemeLast][2] = {

	/*     fg         bg       */
	[SchemeNorm] = { color0, color1 },
	[SchemeSel]  = { color2,  color3  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "color0", STRING, &color0 },
	{ "color1", STRING, &color1 },
	{ "color2",  STRING, &color2 },
	{ "color3",  STRING, &color3 },
	{ "prompt",      STRING, &prompt },
};

