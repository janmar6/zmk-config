/*
 * Localized Keys for Estonian
 *
 * This file was generated from data with the following license:
 *
 * UNICODE, INC. LICENSE AGREEMENT - DATA FILES AND SOFTWARE
 *
 * See Terms of Use for definitions of Unicode Inc.'s
 * Data Files and Software.
 *
 * NOTICE TO USER: Carefully read the following legal agreement.
 * BY DOWNLOADING, INSTALLING, COPYING OR OTHERWISE USING UNICODE INC.'S
 * DATA FILES ("DATA FILES"), AND/OR SOFTWARE ("SOFTWARE"),
 * YOU UNEQUIVOCALLY ACCEPT, AND AGREE TO BE BOUND BY, ALL OF THE
 * TERMS AND CONDITIONS OF THIS AGREEMENT.
 * IF YOU DO NOT AGREE, DO NOT DOWNLOAD, INSTALL, COPY, DISTRIBUTE OR USE
 * THE DATA FILES OR SOFTWARE.
 *
 * COPYRIGHT AND PERMISSION NOTICE
 *
 * Copyright © 1991-2022 Unicode, Inc. All rights reserved.
 * Distributed under the Terms of Use in https://www.unicode.org/copyright.html.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of the Unicode data files and any associated documentation
 * (the "Data Files") or Unicode software and any associated documentation
 * (the "Software") to deal in the Data Files or Software
 * without restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, and/or sell copies of
 * the Data Files or Software, and to permit persons to whom the Data Files
 * or Software are furnished to do so, provided that either
 * (a) this copyright and permission notice appear with all copies
 * of the Data Files or Software, or
 * (b) this copyright and permission notice appear in associated
 * Documentation.
 *
 * THE DATA FILES AND SOFTWARE ARE PROVIDED "AS IS", WITHOUT WARRANTY OF
 * ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT OF THIRD PARTY RIGHTS.
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS INCLUDED IN THIS
 * NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT OR CONSEQUENTIAL
 * DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THE DATA FILES OR SOFTWARE.
 *
 * Except as contained in this notice, the name of a copyright holder
 * shall not be used in advertising or otherwise to promote the sale,
 * use or other dealings in these Data Files or Software without prior
 * written authorization of the copyright holder.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

#define ET_ESCAPE_CHARACTER                                                    \
  (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)))

#define ET_FILE_SEPARATOR                                                      \
  (LC(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))

#define ET_GROUP_SEPARATOR                                                     \
  (LC(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))

#define ET_SPACE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR))

/* ! */
#define ET_EXCLAMATION                                                         \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))
#define ET_EXCL (ET_EXCLAMATION)

/* " */
#define ET_DOUBLE_QUOTES                                                       \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define ET_DQT (ET_DOUBLE_QUOTES)

/* # */
#define ET_HASH                                                                \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))
#define ET_POUND (ET_HASH)

/* $ */
#define ET_DOLLAR                                                              \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define ET_DLLR (ET_DOLLAR)

/* % */
#define ET_PERCENT                                                             \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
#define ET_PRCNT (ET_PERCENT)

/* & */
#define ET_AMPERSAND                                                           \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))
#define ET_AMPS (ET_AMPERSAND)

/* ' */
#define ET_SINGLE_QUOTE                                                        \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))
#define ET_SQT (ET_SINGLE_QUOTE)
#define ET_APOSTROPHE (ET_SINGLE_QUOTE)
#define ET_APOS (ET_SINGLE_QUOTE)

/* ( */
#define ET_LEFT_PARENTHESIS                                                    \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define ET_LPAR (ET_LEFT_PARENTHESIS)

/* ) */
#define ET_RIGHT_PARENTHESIS                                                   \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define ET_RPAR (ET_RIGHT_PARENTHESIS)

/* * */
#define ET_ASTERISK                                                            \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))
#define ET_ASTRK (ET_ASTERISK)
#define ET_STAR (ET_ASTERISK)

/* + */
#define ET_PLUS                                                                \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))

/* , */
#define ET_COMMA                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))

/* - */
#define ET_MINUS                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))

/* . */
#define ET_PERIOD                                                              \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))
#define ET_DOT (ET_PERIOD)

/* / */
#define ET_SLASH                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define ET_FSLH (ET_SLASH)

/* 0 */
#define ET_N0                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS))

/* 1 */
#define ET_N1                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))

/* 2 */
#define ET_N2 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))

/* 3 */
#define ET_N3 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))

/* 4 */
#define ET_N4                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))

/* 5 */
#define ET_N5                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))

/* 6 */
#define ET_N6 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))

/* 7 */
#define ET_N7                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))

/* 8 */
#define ET_N8                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))

/* 9 */
#define ET_N9                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))

/* : */
#define ET_COLON                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))

/* ; */
#define ET_SEMICOLON                                                           \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))
#define ET_SEMI (ET_SEMICOLON)

/* < */
#define ET_LESS_THAN                                                           \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))
#define ET_LT (ET_LESS_THAN)

/* = */
#define ET_EQUAL                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))

/* > */
#define ET_GREATER_THAN                                                        \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))
#define ET_GT (ET_GREATER_THAN)

/* ? */
#define ET_QUESTION                                                            \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define ET_QMARK (ET_QUESTION)

/* @ */
#define ET_AT_SIGN                                                             \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define ET_AT (ET_AT_SIGN)

/* [ */
#define ET_LEFT_BRACKET                                                        \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define ET_LBKT (ET_LEFT_BRACKET)

/* \ */
#define ET_BACKSLASH                                                           \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define ET_BSLH (ET_BACKSLASH)

/* ] */
#define ET_RIGHT_BRACKET                                                       \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define ET_RBKT (ET_RIGHT_BRACKET)

/* ^ */
#define ET_CARET                                                               \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))

/* _ */
#define ET_UNDERSCORE                                                          \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)))
#define ET_UNDER (ET_UNDERSCORE)

/* ` */
#define ET_GRAVE                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* a */
#define ET_A (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))

/* b */
#define ET_B (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B))

/* c */
#define ET_C (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C))

/* d */
#define ET_D (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D))

/* e */
#define ET_E (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E))

/* f */
#define ET_F (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))

/* g */
#define ET_G (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G))

/* h */
#define ET_H (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))

/* i */
#define ET_I (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))

/* j */
#define ET_J (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))

/* k */
#define ET_K (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))

/* l */
#define ET_L (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))

/* m */
#define ET_M (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M))

/* n */
#define ET_N (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))

/* o */
#define ET_O (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O))

/* p */
#define ET_P (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P))

/* q */
#define ET_Q (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q))

/* r */
#define ET_R (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))

/* s */
#define ET_S (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S))

/* t */
#define ET_T (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T))

/* u */
#define ET_U (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))

/* v */
#define ET_V (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V))

/* w */
#define ET_W (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W))

/* x */
#define ET_X (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))

/* y */
#define ET_Y (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))

/* z */
#define ET_Z (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))

/* { */
#define ET_LEFT_BRACE                                                          \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define ET_LBRC (ET_LEFT_BRACE)

/* | */
#define ET_PIPE                                                                \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))

/* } */
#define ET_RIGHT_BRACE                                                         \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))
#define ET_RBRC (ET_RIGHT_BRACE)

/* ~ */
#define ET_TILDE                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))

/* £ */
#define ET_POUND_SIGN                                                          \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))

/* ¤ */
#define ET_CURRENCY_SIGN                                                       \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define ET_CURREN (ET_CURRENCY_SIGN)

/* § */
#define ET_SECTION                                                             \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))
#define ET_SECT (ET_SECTION)

/* ´ */
#define ET_ACUTE                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))

/* ½ */
#define ET_ONE_HALF                                                            \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))
#define ET_FRAC_1_2 (ET_ONE_HALF)

/* ä */
#define ET_A_UMLAUT                                                            \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE))

/* õ */
#define ET_O_TILDE                                                             \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))

/* ö */
#define ET_O_UMLAUT                                                            \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))

/* ü */
#define ET_U_UMLAUT                                                            \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))

/* š */
#define ET_S_CARON (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S)))

/* ž */
#define ET_Z_CARON (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z)))

/* ˇ */
#define ET_CARON                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))

/* € */
#define ET_EURO                                                                \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
