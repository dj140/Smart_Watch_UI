/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --font C:\Users\nuc\Documents\SquareLine\examples\Smartwatch\assets\fonts\Montserrat-Black.ttf -o C:\Users\nuc\Documents\SquareLine\examples\Smartwatch\assets\fonts\ui_font_Font1.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONT1
#define UI_FONT_FONT1 1
#endif

#if UI_FONT_FONT1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xf,

    /* U+0022 "\"" */
    0xff, 0xf0,

    /* U+0023 "#" */
    0x2c, 0x5b, 0xff, 0xf6, 0xdf, 0xff, 0xb4,

    /* U+0024 "$" */
    0x18, 0x79, 0xf7, 0x7, 0xc7, 0x93, 0xbe, 0x7c,
    0x30,

    /* U+0025 "%" */
    0x62, 0x7a, 0x3d, 0xd, 0x0, 0xb0, 0xbc, 0x5e,
    0x46,

    /* U+0026 "&" */
    0x38, 0xf1, 0xe3, 0xcf, 0xfb, 0xff, 0xbe,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x6f, 0x6d, 0xb6, 0x6c,

    /* U+0029 ")" */
    0xd9, 0xb6, 0xdb, 0xd8,

    /* U+002A "*" */
    0x33, 0xff, 0xcc,

    /* U+002B "+" */
    0x37, 0xfe, 0x63, 0x0,

    /* U+002C "," */
    0xfe,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0x19, 0x8c, 0x66, 0x31, 0x98, 0xc6, 0x0,

    /* U+0030 "0" */
    0x79, 0xec, 0xf3, 0xcf, 0x37, 0x9e,

    /* U+0031 "1" */
    0xfd, 0xb6, 0xdb,

    /* U+0032 "2" */
    0x7b, 0xf5, 0xc7, 0x39, 0xcf, 0xff,

    /* U+0033 "3" */
    0xfb, 0xe3, 0x1e, 0x7a, 0x6f, 0xbc,

    /* U+0034 "4" */
    0x18, 0x70, 0xc3, 0x86, 0xdf, 0xff, 0x86,

    /* U+0035 "5" */
    0x7c, 0xf9, 0x83, 0xe7, 0xc1, 0xdf, 0x3c,

    /* U+0036 "6" */
    0x3d, 0xfc, 0x3e, 0xff, 0x3f, 0xde,

    /* U+0037 "7" */
    0xff, 0xfd, 0xc6, 0x38, 0xe3, 0x1c,

    /* U+0038 "8" */
    0x7b, 0xfe, 0xff, 0xff, 0x3f, 0xde,

    /* U+0039 "9" */
    0x7b, 0xec, 0xff, 0x7c, 0x3f, 0xbc,

    /* U+003A ":" */
    0xff, 0xf0,

    /* U+003B ";" */
    0xfc, 0xfe,

    /* U+003C "<" */
    0x9, 0xfd, 0xc7, 0x8c,

    /* U+003D "=" */
    0xff, 0xc1, 0xff, 0x80,

    /* U+003E ">" */
    0x87, 0x1e, 0x7f, 0x60,

    /* U+003F "?" */
    0x7b, 0xf5, 0xc7, 0x38, 0x3, 0xc,

    /* U+0040 "@" */
    0x1e, 0x1f, 0xe7, 0xfb, 0xff, 0xf3, 0xfc, 0xff,
    0xfd, 0xf6, 0x7f, 0x7, 0x80,

    /* U+0041 "A" */
    0x18, 0x3c, 0x3c, 0x3e, 0x76, 0x7e, 0xff, 0xc3,

    /* U+0042 "B" */
    0xf9, 0xfb, 0x37, 0xef, 0xf8, 0xff, 0xfe,

    /* U+0043 "C" */
    0x3c, 0xff, 0x96, 0xc, 0x18, 0x9f, 0x9e,

    /* U+0044 "D" */
    0xf9, 0xfb, 0x3e, 0x3c, 0x79, 0xff, 0x7c,

    /* U+0045 "E" */
    0xff, 0xfc, 0x3f, 0xff, 0xf, 0xff,

    /* U+0046 "F" */
    0xff, 0xfc, 0x30, 0xff, 0xfc, 0x30,

    /* U+0047 "G" */
    0x3c, 0xff, 0x96, 0xc, 0x7c, 0xdf, 0x9e,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1f, 0xff, 0xf8, 0xf1, 0xe3,

    /* U+0049 "I" */
    0xff, 0xff,

    /* U+004A "J" */
    0xff, 0xc6, 0x31, 0x8f, 0xfe,

    /* U+004B "K" */
    0xcd, 0xbb, 0xe7, 0x8f, 0x9b, 0x37, 0x67,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xf, 0xff,

    /* U+004D "M" */
    0xc3, 0xe7, 0xe7, 0xff, 0xff, 0xdb, 0xdb, 0xc3,

    /* U+004E "N" */
    0xc7, 0xcf, 0xdf, 0xff, 0xfb, 0xf3, 0xe3,

    /* U+004F "O" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c,

    /* U+0050 "P" */
    0xfb, 0xfc, 0xf3, 0xff, 0xec, 0x30,

    /* U+0051 "Q" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c,
    0x1f, 0x7,

    /* U+0052 "R" */
    0xfb, 0xfc, 0xf3, 0xff, 0xed, 0xb3,

    /* U+0053 "S" */
    0x7b, 0xec, 0x3e, 0x7c, 0x3f, 0xfe,

    /* U+0054 "T" */
    0xff, 0xf3, 0xc, 0x30, 0xc3, 0xc,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xff, 0xbc,

    /* U+0056 "V" */
    0xe3, 0xe7, 0x66, 0x7e, 0x7c, 0x3c, 0x3c, 0x18,

    /* U+0057 "W" */
    0xe6, 0x36, 0x77, 0x6f, 0x66, 0xf6, 0x7f, 0xe3,
    0xdc, 0x39, 0xc3, 0x9c,

    /* U+0058 "X" */
    0xe6, 0x7e, 0x3c, 0x38, 0x3c, 0x7c, 0x6e, 0xe6,

    /* U+0059 "Y" */
    0x66, 0x76, 0x3c, 0x3c, 0x18, 0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0xf1, 0x8e, 0x71, 0x8f, 0xff,

    /* U+005B "[" */
    0xff, 0x6d, 0xb6, 0xfc,

    /* U+005C "\\" */
    0x61, 0x86, 0xc, 0x30, 0xc1, 0x86, 0x18, 0x30,

    /* U+005D "]" */
    0xfd, 0xb6, 0xdb, 0xfc,

    /* U+005E "^" */
    0x30, 0xc7, 0x9a, 0x4c,

    /* U+005F "_" */
    0xff, 0xc0,

    /* U+0060 "`" */
    0xcc,

    /* U+0061 "a" */
    0x71, 0xe1, 0xbf, 0xff, 0xf0,

    /* U+0062 "b" */
    0xc3, 0xf, 0xbf, 0xcf, 0x3f, 0xfe,

    /* U+0063 "c" */
    0x7b, 0xec, 0x30, 0xfd, 0xe0,

    /* U+0064 "d" */
    0xc, 0x37, 0xff, 0xcf, 0x3f, 0xdf,

    /* U+0065 "e" */
    0x7b, 0xff, 0xf2, 0xf9, 0xe0,

    /* U+0066 "f" */
    0x37, 0xff, 0x66, 0x66,

    /* U+0067 "g" */
    0x7f, 0xfc, 0xf3, 0xfd, 0xf7, 0xde,

    /* U+0068 "h" */
    0xc3, 0xf, 0xbf, 0xcf, 0x3c, 0xf3,

    /* U+0069 "i" */
    0xf3, 0xff, 0xc0,

    /* U+006A "j" */
    0x33, 0x3, 0x33, 0x33, 0x37, 0x60,

    /* U+006B "k" */
    0xc3, 0xd, 0xfe, 0xf3, 0xed, 0xb7,

    /* U+006C "l" */
    0xff, 0xff,

    /* U+006D "m" */
    0xfb, 0xbf, 0xfc, 0xcf, 0x33, 0xcc, 0xf3, 0x30,

    /* U+006E "n" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x30,

    /* U+006F "o" */
    0x7b, 0xfc, 0xf3, 0xfd, 0xe0,

    /* U+0070 "p" */
    0xfb, 0xfc, 0xf3, 0xff, 0xec, 0x30,

    /* U+0071 "q" */
    0x7f, 0xfc, 0xf3, 0xfd, 0xf0, 0xc3,

    /* U+0072 "r" */
    0xff, 0xcc, 0xcc,

    /* U+0073 "s" */
    0x7f, 0xf8, 0x7f, 0xf8,

    /* U+0074 "t" */
    0x66, 0xff, 0x66, 0x73,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xfd, 0xf0,

    /* U+0076 "v" */
    0xcd, 0xd9, 0xb3, 0xc7, 0x87, 0x0,

    /* U+0077 "w" */
    0xcc, 0xfb, 0x67, 0xf9, 0xfe, 0x7f, 0xc, 0xc0,

    /* U+0078 "x" */
    0xec, 0xf0, 0xe1, 0xc7, 0xdd, 0x80,

    /* U+0079 "y" */
    0xcd, 0xd9, 0xf3, 0xc3, 0x87, 0x3c, 0x70,

    /* U+007A "z" */
    0xff, 0xcc, 0xcf, 0xfc,

    /* U+007B "{" */
    0x37, 0x66, 0xee, 0x66, 0x73,

    /* U+007C "|" */
    0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xce, 0x66, 0x77, 0x66, 0xec,

    /* U+007E "~" */
    0x6b, 0xed, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 50, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 78, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 105, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 21, .adv_w = 147, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 41, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 38, .adv_w = 61, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 42, .adv_w = 61, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 46, .adv_w = 76, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 49, .adv_w = 99, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 53, .adv_w = 49, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 54, .adv_w = 62, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 55, .adv_w = 49, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 70, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 63, .adv_w = 111, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 67, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 99, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 49, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 49, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 126, .adv_w = 99, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 130, .adv_w = 99, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 134, .adv_w = 99, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 138, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 166, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 157, .adv_w = 129, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 132, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 123, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 56, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 153, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 271, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 126, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 193, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 122, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 114, .box_w = 8, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 66, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 342, .adv_w = 70, .box_w = 6, .box_h = 10, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 350, .adv_w = 66, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 354, .adv_w = 99, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 358, .adv_w = 80, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 360, .adv_w = 96, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 361, .adv_w = 102, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 98, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 104, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 68, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 398, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 52, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 53, .box_w = 4, .box_h = 11, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 413, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 52, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 166, .box_w = 10, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 108, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 445, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 451, .adv_w = 73, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 90, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 74, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 103, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 156, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 103, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 103, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 494, .adv_w = 91, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 70, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 503, .adv_w = 51, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 506, .adv_w = 70, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 511, .adv_w = 99, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 6, 7, 8, 9, 10, 9, 10,
    11, 12, 0, 13, 14, 15, 16, 17,
    18, 19, 12, 20, 20, 0, 0, 0,
    21, 22, 23, 24, 25, 22, 26, 27,
    28, 0, 0, 29, 30, 31, 0, 0,
    22, 32, 33, 34, 3, 35, 29, 36,
    36, 37, 38, 39, 40, 41, 0, 0,
    42, 0, 43, 44, 45, 46, 47, 48,
    49, 43, 50, 50, 51, 46, 43, 43,
    44, 44, 52, 53, 54, 55, 49, 56,
    56, 57, 56, 58, 40, 0, 0, 9
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 0, 6, 7, 8, 9, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 11,
    17, 18, 19, 20, 20, 0, 0, 0,
    21, 22, 23, 24, 22, 24, 24, 24,
    22, 24, 24, 25, 24, 24, 24, 24,
    22, 24, 22, 24, 3, 26, 27, 28,
    28, 29, 30, 31, 0, 32, 33, 0,
    34, 0, 35, 0, 36, 36, 36, 0,
    36, 0, 37, 38, 0, 0, 39, 39,
    36, 39, 36, 39, 40, 41, 42, 43,
    43, 44, 43, 45, 0, 0, 33, 8
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 2, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 7, 0,
    3, -2, 0, 0, 0, -9, -10, 0,
    6, 2, 2, -6, 0, 5, 0, 5,
    2, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    -3, 2, 3, 0, 0, -2, 0, 0,
    2, 0, -2, 0, -2, -1, -3, 0,
    0, 0, 0, -2, 0, 0, -2, -2,
    0, -2, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, 0, 0,
    -3, 0, -21, 0, -3, 0, 3, 5,
    0, 0, -3, 2, 2, 5, 3, -2,
    3, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -5, 0, -6,
    0, 0, 0, 0, -2, 3, 0, -5,
    -3, -2, 2, 0, -2, 0, 0, -2,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 2, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    8, 3, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 3, 2, 5, -2,
    0, 3, -2, -6, -20, 0, 3, 3,
    -1, -2, 0, 2, 0, 3, 0, 3,
    0, -16, 0, -2, 5, 0, 5, -2,
    3, 2, 0, 2, -2, 0, -2, 13,
    0, 13, 0, 5, 0, 5, 3, 2,
    0, 0, 0, -5, 0, 0, 0, 2,
    -2, 0, 0, -4, -3, -3, 0, 0,
    -2, 0, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, -9, 0,
    -11, 0, 0, 0, -2, 0, 13, -2,
    -3, 2, 2, 2, 0, -3, 2, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -14, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, -5, 6,
    0, -12, -14, -13, -3, 5, 0, 0,
    -10, 0, 0, -5, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, -18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -3, 0, -2, -2, -2, 0, 0, 0,
    0, 0, 0, -3, 0, -2, 0, -5,
    -3, 0, -4, -6, -6, -2, -3, 0,
    -3, 0, 0, 0, -1, 0, 0, 2,
    0, 0, -2, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 2, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 3, 0, 0, -2,
    0, -3, 0, 0, 0, 5, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -1, 0,
    -2, -1, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -2, -2, -2, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, -2, -3, 0, 0, -5,
    0, -5, 3, 0, -3, 2, 3, 3,
    0, -4, 0, 0, 0, 0, -6, 2,
    0, 2, -10, 2, 0, 0, 2, -9,
    0, -10, -2, -14, 0, -8, 0, 3,
    4, 3, 0, 0, 0, 0, 1, 0,
    -5, -3, 0, 0, 0, 0, -2, 0,
    0, -2, 0, 0, 0, 0, 0, -1,
    -1, 0, -1, -2, 0, 0, 0, 0,
    0, 0, 0, -2, -2, 0, -2, -2,
    -1, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    0, 0, 0, -3, 2, 0, 0, 1,
    2, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 1, 0, -1, 0, 0,
    0, 0, -3, -2, 0, 0, 5, 0,
    2, -3, 0, 3, -8, -7, -6, -3,
    2, 0, -1, -10, -2, 0, -2, 0,
    -3, 2, -2, -9, 0, -3, 0, 0,
    1, 0, 2, 0, 2, 3, -5, -6,
    -8, -2, -4, -2, -5, 0, -3, 2,
    0, -2, 0, 0, 0, -2, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    -1, 0, 0, -2, 0, -3, -4, -4,
    0, -5, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, -1, -2, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, -5, 0, 0,
    0, -2, -8, 0, 0, -2, 2, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, -3, -3, 0, -2, -2, -2, 0,
    0, 0, 0, 0, 0, -5, 0, -2,
    0, -2, -2, 0, -4, -4, -5, -1,
    -3, 3, -5, 0, 0, 0, 13, 0,
    0, 1, 0, 0, -3, 0, 0, -6,
    0, 0, 0, 0, -16, -5, 5, 5,
    -2, -7, 0, 2, -2, 0, -8, -1,
    -2, 2, -11, -2, 6, 0, 2, -6,
    -2, -6, -6, -7, 0, -10, 0, 8,
    0, -1, 0, 0, 0, -1, -1, -2,
    -5, -6, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, -1, -2,
    -2, 0, -3, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -3, 0, 3, -2,
    2, 0, -2, 2, 0, 0, 0, -2,
    0, -2, -2, -2, 0, -2, -2, 0,
    0, -1, -2, 0, -2, 0, 0, -2,
    0, 2, 0, -2, 0, 0, 0, -3,
    0, -2, 0, -2, -2, 0, 0, 0,
    0, 0, 0, 0, -3, 2, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -1, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 6, 0, 0, -2, 0,
    3, 0, -2, -6, -2, 2, 2, 0,
    -6, -2, 2, -2, 2, 0, 2, -1,
    -4, 0, -2, 1, 0, 0, -2, 0,
    0, 2, 2, -3, -2, -2, -2, -2,
    -2, -2, 0, -2, 1, -2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -2, 0, 0,
    -2, -2, 0, 0, 0, -2, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -3, 0, 0,
    -6, 0, 0, -4, 3, 1, 0, -6,
    0, 0, -4, -2, 0, -6, -4, -6,
    0, 0, -9, -2, -6, -7, -9, 0,
    0, 3, 10, -2, -3, -2, 0, -2,
    -2, -3, -2, -6, -8, -5, 0, 0,
    0, 0, 2, 0, -11, 2, 5, 2,
    -2, -5, 0, 2, 0, 0, -8, 0,
    -2, 3, -13, -2, 2, 0, 0, -10,
    -1, -7, -2, -11, 0, -11, 0, 6,
    2, 0, 0, 0, 0, 0, -1, 0,
    -6, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -2, -4, -6, 0, 0, -1,
    -2, -5, -2, 0, -2, 0, 0, 0,
    0, -7, -2, -5, -4, -3, -3, -4,
    -2, -2, -3, 0, -6, -2, -2, 0,
    -2, 0, 0, 1, 0, 0, -5, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    -3, 10, 0, -2, -2, -2, 0, 0,
    0, 0, 0, 0, -5, 0, -2, 0,
    -2, -2, 0, -4, -4, -5, -1, -3,
    3, 6, 0, 0, 0, 13, 0, 0,
    1, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, -1, 0, 0, 0, -2, -2, 0,
    0, -3, -2, 0, -3, 0, 2, -1,
    0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 3, 3, 0, 0, -3, 0,
    5, -6, -6, -3, -3, 6, 5, 2,
    -13, -2, 3, -2, 0, -2, 5, -2,
    -6, 0, -2, 2, -2, -3, -5, -3,
    0, 5, 3, 0, -4, -9, -2, 10,
    -2, -6, 2, -2, -5, -5, -2, 2,
    0, -2, 0, -3, 3, 5, -5, -6,
    -6, -4, 5, 0, 2, -13, -2, 2,
    -3, -2, -5, 0, -4, -6, -2, -2,
    -3, 0, 0, -5, -5, -2, 5, 5,
    -2, -9, -9, 1, 0, -6, -10, -2,
    -6, -3, -5, -6, 0, 0, -2, 0,
    -3, 0, -2, -4, 0, 2, -6, 2,
    0, 0, -10, 0, -2, -4, -3, -2,
    -5, -4, -6, -3, 0, -5, -2, -5,
    0, -5, -2, 0, 2, 6, -3, -5,
    -2, 0, -2, -3, -5, -5, -6, -8,
    -3, 3, 0, -2, 0, -8, 2, 3,
    -6, -6, -3, -6, 6, -2, 1, -16,
    -4, 3, -4, -3, -6, 0, -5, -7,
    0, -2, -3, -2, -5, -5, -2, 0,
    5, 6, 0, -10, -10, 1, 8, -6,
    -12, -3, -6, -7, -8, -6, 0, 0,
    0, 0, 0, 0, 2, 0, 3, 0,
    -2, 3, 0, 0, 0, 0, 0, 0,
    0, 2, 2, -1, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 3, 5,
    1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 3, 0, 0, 0,
    3, 0, 0, 0, 8, 0, 5, 2,
    2, -3, 0, 3, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, -2, 2, 5, 0, 0,
    13, 0, -3, -3, 2, 2, 0, 2,
    -8, 0, 0, 10, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    8, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 2, 0, 0, 2, 18, -3,
    -1, 3, 3, -3, 2, 0, 0, 2,
    2, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -21, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    -3, 0, 0, 0, 0, -2, -1, 0,
    0, 0, -2, 0, 0, 0, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    -2, 0, -3, 0, 0, -2, 2, 0,
    0, 0, -3, -2, -3, 0, 0, -3,
    0, -2, 0, -6, 0, -5, 0, 0,
    -7, 0, -6, -5, -7, 0, -10, 0,
    -3, -2, 0, 0, 0, 0, 0, 0,
    0, -2, -2, -1, 0, 0, 0, 0,
    -2, -4, 3, -5, 3, 0, 0, -3,
    0, -2, 0, 0, 0, -1, 0, 2,
    -3, -2, 0, 0, 0, -8, -3, -6,
    0, -10, 0, -6, 0, 0, 0, -1,
    0, 0, 0, 0, 2, 0, -2, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, -3, 2, 0, 0,
    0, -3, -2, -3, 0, 0, -4, 0,
    -2, 0, -6, 0, 0, 0, 0, -14,
    0, -3, -6, -8, 0, -10, 0, -2,
    -2, 0, 0, 0, 0, 0, 0, 0,
    -2, -2, -1, 2, 0, 0, 2, -3,
    8, 5, -2, -2, -5, 0, 5, 2,
    2, -3, 0, 5, 0, 3, 2, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 6, -5, -2, -1, 13,
    8, 13, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0,
    0, -6, 0, -3, -4, -5, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, -6, 0,
    -3, -4, -5, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -5, 2, 0, -2, 3, 5, 2,
    -5, 0, 2, -2, 2, 0, 3, 0,
    0, 0, 0, 2, 0, 0, 0, -3,
    0, -6, 0, 8, -2, -4, 0, 0,
    0, -3, 0, -2, -6, -3, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0,
    -6, 0, -3, -4, -5, 0, -10, 0,
    0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 5, -2, -2, -6, 2, 3,
    2, 0, -2, 1, 4, 1, 3, 2,
    3, -2, -8, 0, 0, 0, 0, -3,
    -6, -5, 0, -3, 0, -3, -1, -1,
    0, 0, 0, 0, 2, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    0, -3, 0, -1, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -2, 0, 0, 0,
    0, 0, -1, 0, -2, -2, 2, 0,
    -2, -2, 0, 0, -2, 0, -2, -2,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -10, 0, 3,
    0, -2, 0, 0, 0, 0, -2, 0,
    -2, 0, 0, 0, 0, 0, 0, -5,
    0, 5, -3, -5, -6, 0, 5, 5,
    2, -6, 0, 2, 0, 5, 0, 6,
    0, -5, 0, 0, 2, 0, 0, -5,
    -3, 0, -3, 0, -3, -3, -2, 0,
    -2, 0, -2, 2, 0, -3, -5, -2,
    0, 0, 0, 0, -3, 0, 3, -5,
    0, 2, -2, 3, 3, 0, -6, 0,
    0, -2, 0, -2, 5, -3, 0, 0,
    0, 0, 0, -4, 0, -5, 0, -6,
    0, 5, -2, -2, 0, 8, 0, -2,
    0, -2, -5, 0, -2, 0, 0, 0,
    0, 0, 0, 2, -2, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, 0, 2, 0,
    -1, 0, 0, 0, 0, 1, 0, -2,
    -2, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 58,
    .right_class_cnt     = 45,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Font1 = {
#else
lv_font_t ui_font_Font1 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONT1*/

