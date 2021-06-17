/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 8;
static unsigned int min_lineheight = 8;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"CaskaydiaCove Nerd Font:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#fff", "#222222" },
	[SchemeSel] = { "#fff", "#98b379" },
	[SchemeOut] = { "#000000", "#282c34" },
	[SchemeMid] = { "#fff", "#282c34" },
	[SchemeSelHighlight] = { "#000000", "#98c379" },
	[SchemeNormHighlight] = { "#000000", "#98c379" },
	[SchemeOutHighlight] = { "#000000", "#282c34" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
