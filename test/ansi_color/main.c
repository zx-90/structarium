/*
 * Copyright (c) 2018, Evgenii Zaitcev <zx_90@mail.ru>
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
*/

#include <stdio.h>
#include "ansi_color/ansi_color.h"

#define ZX_ANSI_COLOR_WORD "XXX" ZX_ANSI_COLOR_RESET " "

#define ZX_ANSI_COLOR_LINE(STYLE, BACKGROUND) \
    printf("%-39s ", #BACKGROUND); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_BLACK          ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_RED            ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_GREEN          ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_YELLOW         ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_BLUE           ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_MAGENTA        ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_CYAN           ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_WHITE          ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_BRIGHT_BLACK   ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_BRIGHT_RED     ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_BRIGHT_GREEN   ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_BRIGHT_YELLOW  ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_BRIGHT_BLUE    ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_BRIGHT_MAGENTA ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_BRIGHT_CYAN    ZX_ANSI_COLOR_WORD); \
    printf(STYLE BACKGROUND ZX_ANSI_COLOR_BRIGHT_WHITE   ZX_ANSI_COLOR_WORD); \
    printf("\n");

#define ZX_ANSI_COLOR_BLOCK(STYLE) \
    printf("STYLE: " #STYLE "\n\n"); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_NONE); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_BLACK); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_RED); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_GREEN); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_YELLOW); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_BLUE); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_MAGENTA); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_CYAN); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_WHITE); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_BRIGHT_BLACK); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_BRIGHT_RED); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_BRIGHT_GREEN); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_BRIGHT_YELLOW); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_BRIGHT_BLUE); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_BRIGHT_MAGENTA); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_BRIGHT_CYAN); \
    ZX_ANSI_COLOR_LINE(STYLE, ZX_ANSI_COLOR_BACKGROUND_BRIGHT_WHITE); \
    printf("\n");

int main(void)
{
    printf("ANSI COLOR TEST.\n");
    printf("\n");
    ZX_ANSI_COLOR_BLOCK()
    ZX_ANSI_COLOR_BLOCK(ZX_ANSI_COLOR_BRIGHT)
    ZX_ANSI_COLOR_BLOCK(ZX_ANSI_COLOR_DIM)
    ZX_ANSI_COLOR_BLOCK(ZX_ANSI_COLOR_UNDERSCORE)
    ZX_ANSI_COLOR_BLOCK(ZX_ANSI_COLOR_BLINK)
    ZX_ANSI_COLOR_BLOCK(ZX_ANSI_COLOR_REVERSE)
    ZX_ANSI_COLOR_BLOCK(ZX_ANSI_COLOR_HIDDEN)
}

