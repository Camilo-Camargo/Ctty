#ifndef __CTTY__H_
#define __CTTY__H_ 

#include "csi.h" 
 

/* Strips parenthesis with preprocessor */
#define _ARGS(...) __VA_ARGS__
#define _STRIP_PARENTHESIS(X) X
#define STRIP_PARENTHESIS(X) _STRIP_PARENTHESIS(_ARGS X)
#define STRIP2_PARENTHESIS(X) STRIP_PARENTHESIS(_ARGS X)

#define CTTY_COLORS(fg, bg) (STRIP2_PARENTHESIS(SGR_SET_FOREGROUND(fg)) STRIP2_PARENTHESIS(SGR_SET_BACKGROUND(bg)))

#define CTTY_PROMPT(str, fg, bg) (STRIP_PARENTHESIS(CTTY_COLORS(fg, bg)) str)



#endif

