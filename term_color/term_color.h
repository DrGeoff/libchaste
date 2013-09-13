/*
 * ch_term_colors.h
 *
 *  Created on: Jul 2, 2013
 *      Author: mgrosvenor
 */
#include <stdarg.h>

#include "../types/types.h"
#include "../string/string.h"


#ifndef CH_TERM_COLORS_H_
#define CH_TERM_COLORS_H_

//Private definitions, don't use directly
#define CH_TERM_ATTR_RAW_RESET       "0"
#define CH_TERM_ATTR_RAW_BRIGHT      "1"
#define CH_TERM_ATTR_RAW_DIM         "2"
#define CH_TERM_ATTR_RAW_UNDERLINE   "3"
#define CH_TERM_ATTR_RAW_BLINK       "4"
#define CH_TERM_ATTR_RAW_REVERSE     "7"
#define CH_TERM_ATTR_RAW_HIDDEN      "8"

//Private definitions, don't use directly
#define CH_TERM_COL_RAW_BLACK       "0"
#define CH_TERM_COL_RAW_RED         "1"
#define CH_TERM_COL_RAW_GREEN       "2"
#define CH_TERM_COL_RAW_YELLOW      "3"
#define CH_TERM_COL_RAW_BLUE        "4"
#define CH_TERM_COL_RAW_MAGENTA     "5"
#define CH_TERM_COL_RAW_CYAN        "6"
#define CH_TERM_COL_RAW_WHITE       "7"

//Private definitions, don't use directly
#define CH_TERM_COLOR(col)              CH_STR_CONST_LIT("\x1B[3"col"m")
#define CH_TERM_COLOR_ATTR(col,attr)    CH_STR_CONST_LIT("\x1B["attr";3"col"m")
#define CH_TERM_ATTR(attr)              CH_STR_CONST_LIT("\x1B["attr"m")

//Colors to be used by users - Please use directly!
#define CH_TERM_COL_NONE    CH_TERM_ATTR(CH_TERM_ATTR_RAW_RESET)
#define CH_TERM_COL_BLACK   CH_TERM_COLOR(CH_TERM_COL_RAW_BLACK)
#define CH_TERM_COL_BLUE    CH_TERM_COLOR(CH_TERM_COL_RAW_BLUE)
#define CH_TERM_COL_CYAN    CH_TERM_COLOR(CH_TERM_COL_RAW_CYAN)
#define CH_TERM_COL_GREEN   CH_TERM_COLOR(CH_TERM_COL_RAW_GREEN)
#define CH_TERM_COL_MAGENTA CH_TERM_COLOR(CH_TERM_COL_RAW_MAGENTA)
#define CH_TERM_COL_RED CH_TERM_COLOR(CH_TERM_COL_RAW_RED)
#define CH_TERM_COL_WHITE   CH_TERM_COLOR(CH_TERM_COL_RAW_WHITE)
#define CH_TERM_COL_YELLOW  CH_TERM_COLOR(CH_TERM_COL_RAW_YELLOW)

#define CH_TERM_COL_BRIGHT_BLACK   CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_BLACK, CH_TERM_ATTR_RAW_BRIGHT)
#define CH_TERM_COL_BRIGHT_BLUE    CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_BLUE, CH_TERM_ATTR_RAW_BRIGHT)
#define CH_TERM_COL_BRIGHT_CYAN    CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_CYAN, CH_TERM_ATTR_RAW_BRIGHT)
#define CH_TERM_COL_BRIGHT_GREEN   CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_GREEN, CH_TERM_ATTR_RAW_BRIGHT)
#define CH_TERM_COL_BRIGHT_MAGENTA CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_MAGENTA, CH_TERM_ATTR_RAW_BRIGHT)
#define CH_TERM_COL_BRIGHT_RED     CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_RED, CH_TERM_ATTR_RAW_BRIGHT)
#define CH_TERM_COL_BRIGHT_WHITE   CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_WHITE, CH_TERM_ATTR_RAW_BRIGHT)
#define CH_TERM_COL_BRIGHT_YELLOW  CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_YELLOW, CH_TERM_ATTR_RAW_BRIGHT)

#define CH_TERM_COL_DIM_BLACK   CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_BLACK, CH_TERM_ATTR_RAW_DIM)
#define CH_TERM_COL_DIM_BLUE    CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_BLUE, CH_TERM_ATTR_RAW_DIM)
#define CH_TERM_COL_DIM_CYAN    CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_CYAN, CH_TERM_ATTR_RAW_DIM)
#define CH_TERM_COL_DIM_GREEN   CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_GREEN, CH_TERM_ATTR_RAW_DIM)
#define CH_TERM_COL_DIM_MAGENTA CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_MAGENTA, CH_TERM_ATTR_RAW_DIM)
#define CH_TERM_COL_DIM_WHITE   CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_WHITE, CH_TERM_ATTR_RAW_DIM)
#define CH_TERM_COL_DIM_RED     CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_RED, CH_TERM_ATTR_RAW_DIM)
#define CH_TERM_COL_DIM_YELLOW  CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_YELLOW, CH_TERM_ATTR_RAW_DIM)

#define CH_TERM_COL_EMPH_BLACK   CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_BLACK, CH_TERM_ATTR_RAW_UNDERLINE)
#define CH_TERM_COL_EMPH_BLUE    CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_BLUE, CH_TERM_ATTR_RAW_UNDERLINE)
#define CH_TERM_COL_EMPH_CYAN    CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_CYAN, CH_TERM_ATTR_RAW_UNDERLINE)
#define CH_TERM_COL_EMPH_GREEN   CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_GREEN, CH_TERM_ATTR_RAW_UNDERLINE)
#define CH_TERM_COL_EMPH_MAGENTA CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_MAGENTA, CH_TERM_ATTR_RAW_UNDERLINE)
#define CH_TERM_COL_EMPH_WHITE   CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_WHITE, CH_TERM_ATTR_RAW_UNDERLINE)
#define CH_TERM_COL_EMPH_RED     CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_RED, CH_TERM_ATTR_RAW_UNDERLINE)
#define CH_TERM_COL_EMPH_YELLOW  CH_TERM_COLOR_ATTR(CH_TERM_COL_RAW_YELLOW, CH_TERM_ATTR_RAW_UNDERLINE)


typedef ch_str ch_colour_t;

int dprintf_color_va(int fd, ch_colour_t color, ch_str format, va_list va);
int dprintf_color(int fd, ch_colour_t color, ch_str format, ...);
int printf_color_va( ch_colour_t color, ch_str format, va_list va);
int printf_color( ch_colour_t color, ch_str format, ...);



#endif /* CH_TERM_COLORS_H_ */
