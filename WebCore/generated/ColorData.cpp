/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: gperf --key-positions='*' -D -s 2 /home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 2 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
struct NamedColor {
    const char *name;
    int RGBValue;
};
#include <string.h>
enum
  {
    TOTAL_KEYWORDS = 149,
    MIN_WORD_LENGTH = 3,
    MAX_WORD_LENGTH = 20,
    MIN_HASH_VALUE = 3,
    MAX_HASH_VALUE = 1055
  };

/* maximum key range = 1053, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
colordata_hash_function (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056,    5,    0,  105,
         0,    0,   30,   40,   40,   10,    0,    0,   15,   60,
         0,    5,  255,   40,    0,   10,   15,  130,  300,  215,
         5,    0,    0, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[19]];
      /*FALLTHROUGH*/
      case 19:
        hval += asso_values[(unsigned char)str[18]];
      /*FALLTHROUGH*/
      case 18:
        hval += asso_values[(unsigned char)str[17]];
      /*FALLTHROUGH*/
      case 17:
        hval += asso_values[(unsigned char)str[16]];
      /*FALLTHROUGH*/
      case 16:
        hval += asso_values[(unsigned char)str[15]];
      /*FALLTHROUGH*/
      case 15:
        hval += asso_values[(unsigned char)str[14]];
      /*FALLTHROUGH*/
      case 14:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
        hval += asso_values[(unsigned char)str[10]+1];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct NamedColor wordlist[] =
  {
#line 135 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"red", 0xff0000},
#line 47 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkred", 0x8b0000},
#line 152 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"tan", 0xd2b48c},
#line 100 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"linen", 0xfaf0e6},
#line 143 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"sienna", 0xa0522d},
#line 74 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"indianred", 0xcd5c5c},
#line 153 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"teal", 0x008080},
#line 69 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"grey", 0x808080},
#line 70 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"green", 0x008000},
#line 68 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"gray", 0x808080},
#line 40 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkgrey", 0xa9a9a9},
#line 41 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkgreen", 0x006400},
#line 20 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"beige", 0xf5f5dc},
#line 121 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"orange", 0xffa500},
#line 39 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkgray", 0xa9a9a9},
#line 122 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"orangered", 0xff4500},
#line 77 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"khaki", 0xf0e68c},
#line 141 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"seagreen", 0x2e8b57},
#line 66 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"gold", 0xffd700},
#line 45 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkorange", 0xff8c00},
#line 42 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkkhaki", 0xbdb76b},
#line 75 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"indigo", 0x4b0082},
#line 67 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"goldenrod", 0xdaa520},
#line 102 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"maroon", 0x800000},
#line 64 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"gainsboro", 0xdcdcdc},
#line 98 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lime", 0x00ff00},
#line 71 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"greenyellow", 0xadff2f},
#line 38 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkgoldenrod", 0xb8860b},
#line 148 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"slategrey", 0x708090},
#line 147 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"slategray", 0x708090},
#line 139 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"salmon", 0xfa8072},
#line 49 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkseagreen", 0x8fbc8f},
#line 142 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"seashell", 0xfff5ee},
#line 48 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darksalmon", 0xe9967a},
#line 155 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"tomato", 0xff6347},
#line 154 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"thistle", 0xd8bfd8},
#line 52 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkslategrey", 0x2f4f4f},
#line 35 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"cyan", 0x00ffff},
#line 62 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"forestgreen", 0x228b22},
#line 58 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"dimgrey", 0x696969},
#line 51 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkslategray", 0x2f4f4f},
#line 114 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"mistyrose", 0xffe4e1},
#line 57 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"dimgray", 0x696969},
#line 37 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkcyan", 0x008b8b},
#line 22 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"black", 0x000000},
#line 101 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"magenta", 0xff00ff},
#line 99 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"limegreen", 0x32cd32},
#line 31 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"coral", 0xff7f50},
#line 43 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkmagenta", 0x8b008b},
#line 19 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"azure", 0xf0ffff},
#line 24 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"blue", 0x0000ff},
#line 118 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"oldlace", 0xfdf5e6},
#line 33 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"cornsilk", 0xfff8dc},
#line 36 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkblue", 0x00008b},
#line 145 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"skyblue", 0x87ceeb},
#line 60 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"firebrick", 0xb22222},
#line 123 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"orchid", 0xda70d6},
#line 87 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightgrey", 0xd3d3d3},
#line 88 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightgreen", 0x90ee90},
#line 97 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightyellow", 0xffffe0},
#line 86 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightgray", 0xd3d3d3},
#line 46 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkorchid", 0x9932cc},
#line 137 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"royalblue", 0x4169e1},
#line 17 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"aqua", 0x00ffff},
#line 151 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"steelblue", 0x4682b4},
#line 21 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"bisque", 0xffe4c4},
#line 34 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"crimson", 0xdc143c},
#line 146 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"slateblue", 0x6a5acd},
#line 59 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"dodgerblue", 0x1e90ff},
#line 23 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"blanchedalmond", 0xffebcd},
#line 91 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightseagreen", 0x20b2aa},
#line 95 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightslategrey", 0x778899},
#line 94 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightslategray", 0x778899},
#line 26 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"brown", 0xa52a2a},
#line 90 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightsalmon", 0xffa07a},
#line 149 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"snow", 0xfffafa},
#line 84 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightcyan", 0xe0ffff},
#line 136 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"rosybrown", 0xbc8f8f},
#line 140 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"sandybrown", 0xf4a460},
#line 50 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkslateblue", 0x483d8b},
#line 162 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"yellow", 0xffff00},
#line 83 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightcoral", 0xf08080},
#line 113 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"mintcream", 0xf5fffa},
#line 18 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"aquamarine", 0x7fffd4},
#line 138 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"saddlebrown", 0x8b4513},
#line 72 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"honeydew", 0xf0fff0},
#line 131 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"pink", 0xffc0cb},
#line 82 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightblue", 0xadd8e6},
#line 28 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"cadetblue", 0x5f9ea0},
#line 159 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"wheat", 0xf5deb3},
#line 80 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lawngreen", 0x7cfc00},
#line 160 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"white", 0xffffff},
#line 15 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"aliceblue", 0xf0f8ff},
#line 30 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"chocolate", 0xd2691e},
#line 163 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"yellowgreen", 0x9acd32},
#line 115 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"moccasin", 0xffe4b5},
#line 117 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"navy", 0x000080},
#line 29 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"chartreuse", 0x7fff00},
#line 76 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"ivory", 0xfffff0},
#line 125 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"palegreen", 0x98fb98},
#line 78 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lavender", 0xe6e6fa},
#line 73 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"hotpink", 0xff69b4},
#line 119 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"olive", 0x808000},
#line 63 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"fuchsia", 0xff00ff},
#line 107 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"mediumseagreen", 0x3cb371},
#line 144 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"silver", 0xc0c0c0},
#line 120 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"olivedrab", 0x6b8e23},
#line 53 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkturquoise", 0x00ced1},
#line 156 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"turquoise", 0x40e0d0},
#line 157 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"violet", 0xee82ee},
#line 158 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"violetred", 0xd02090},
#line 54 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkviolet", 0x9400d3},
#line 124 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"palegoldenrod", 0xeee8aa},
#line 161 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"whitesmoke", 0xf5f5f5},
#line 150 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"springgreen", 0x00ff7f},
#line 27 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"burlywood", 0xdeb887},
#line 130 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"peru", 0xcd853f},
#line 61 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"floralwhite", 0xfffaf0},
#line 89 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightpink", 0xffb6c1},
#line 44 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"darkolivegreen", 0x556b2f},
#line 65 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"ghostwhite", 0xf8f8ff},
#line 104 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"mediumblue", 0x0000cd},
#line 105 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"mediumorchid", 0xba55d3},
#line 96 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightsteelblue", 0xb0c4de},
#line 93 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightslateblue", 0x8470ff},
#line 56 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"deepskyblue", 0x00bfff},
#line 92 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightskyblue", 0x87cefa},
#line 85 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lightgoldenrodyellow", 0xfafad2},
#line 132 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"plum", 0xdda0dd},
#line 103 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"mediumaquamarine", 0x66cdaa},
#line 108 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"mediumslateblue", 0x7b68ee},
#line 25 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"blueviolet", 0x8a2be2},
#line 112 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"midnightblue", 0x191970},
#line 55 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"deeppink", 0xff1493},
#line 81 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lemonchiffon", 0xfffacd},
#line 16 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"antiquewhite", 0xfaebd7},
#line 126 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"paleturquoise", 0xafeeee},
#line 133 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"powderblue", 0xb0e0e6},
#line 116 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"navajowhite", 0xffdead},
#line 109 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"mediumspringgreen", 0x00fa9a},
#line 32 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"cornflowerblue", 0x6495ed},
#line 127 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"palevioletred", 0xd87093},
#line 111 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"mediumvioletred", 0xc71585},
#line 134 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"purple", 0x800080},
#line 79 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"lavenderblush", 0xfff0f5},
#line 110 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"mediumturquoise", 0x48d1cc},
#line 129 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"peachpuff", 0xffdab9},
#line 106 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"mediumpurple", 0x9370d8},
#line 128 "/home/hg/repos/qtwebkit-rel/WebCore/platform/ColorData.gperf"
    {"papayawhip", 0xffefd5}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,   0,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,   1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,   2,  -1,  -1,  -1,  -1,  -1,  -1,
      3,   4,  -1,  -1,   5,  -1,  -1,  -1,  -1,   6,
     -1,  -1,  -1,  -1,   7,   8,  -1,  -1,  -1,   9,
     -1,  -1,  -1,  10,  11,  12,  13,  -1,  14,  15,
     16,  -1,  -1,  17,  18,  19,  -1,  -1,  -1,  20,
     -1,  21,  -1,  -1,  22,  -1,  -1,  -1,  -1,  -1,
     -1,  23,  -1,  -1,  24,  -1,  -1,  -1,  -1,  25,
     -1,  26,  -1,  27,  28,  -1,  -1,  -1,  -1,  29,
     -1,  30,  31,  32,  -1,  -1,  -1,  -1,  -1,  -1,
     33,  34,  35,  36,  37,  -1,  38,  39,  40,  41,
     -1,  -1,  42,  43,  -1,  -1,  -1,  -1,  -1,  -1,
     44,  -1,  45,  -1,  46,  47,  48,  -1,  -1,  -1,
     49,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  50,
     -1,  -1,  51,  52,  -1,  -1,  -1,  -1,  53,  -1,
     -1,  -1,  54,  -1,  55,  -1,  56,  -1,  -1,  57,
     58,  59,  -1,  -1,  60,  61,  -1,  -1,  -1,  62,
     -1,  -1,  -1,  -1,  63,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  64,  -1,  65,  66,  -1,  67,
     68,  -1,  -1,  -1,  69,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  70,  71,
     -1,  -1,  -1,  -1,  72,  73,  -1,  -1,  -1,  -1,
     -1,  74,  -1,  -1,  75,  -1,  -1,  -1,  -1,  76,
     -1,  -1,  -1,  -1,  77,  78,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  79,  -1,  -1,  80,  -1,  -1,  -1,
     81,  -1,  -1,  -1,  82,  83,  84,  -1,  85,  86,
     -1,  -1,  -1,  -1,  87,  -1,  -1,  -1,  -1,  88,
     89,  -1,  -1,  -1,  90,  91,  -1,  -1,  -1,  92,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  93,  -1,  94,  -1,  95,  96,
     -1,  -1,  -1,  -1,  -1,  97,  -1,  -1,  -1,  -1,
     98,  -1,  -1,  -1,  99,  -1,  -1,  -1, 100,  -1,
     -1,  -1, 101,  -1,  -1, 102,  -1, 103,  -1, 104,
     -1, 105,  -1,  -1, 106,  -1,  -1,  -1, 107, 108,
     -1, 109,  -1,  -1, 110,  -1,  -1,  -1,  -1,  -1,
    111,  -1,  -1, 112,  -1, 113,  -1,  -1,  -1,  -1,
     -1, 114,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 115,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 116,
     -1, 117,  -1,  -1, 118,  -1,  -1,  -1,  -1, 119,
    120,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 121,  -1,  -1,  -1,  -1,
     -1,  -1, 122,  -1, 123,  -1,  -1,  -1,  -1, 124,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 125,  -1,  -1,  -1,  -1,  -1, 126,  -1,  -1,
    127,  -1,  -1,  -1, 128,  -1,  -1,  -1,  -1,  -1,
     -1, 129,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 130,  -1,  -1,  -1,  -1,
    131,  -1, 132,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 133,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 134,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 135,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 136,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    137,  -1,  -1,  -1,  -1,  -1, 138, 139,  -1, 140,
     -1,  -1,  -1, 141,  -1,  -1,  -1,  -1,  -1,  -1,
    142,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 143,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 144,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 145,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 146,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 147,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 148
  };

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct NamedColor *
findColor (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = colordata_hash_function (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &wordlist[index];
            }
        }
    }
  return 0;
}
