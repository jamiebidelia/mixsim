#include "mix_characters.h"


// NOTE:  users of this code must:
// #include <locale.h>
// setlocale(LC_CTYPE, "");

wchar_t num_to_char(const unsigned int NUMBER)
{
    wchar_t ret_val = 0;
    switch (NUMBER)
    {
    case 0:  ret_val = ' ';    break;
    case 1:  ret_val = 'A';    break;
    case 2:  ret_val = 'B';    break;
    case 3:  ret_val = 'C';    break;
    case 4:  ret_val = 'D';    break;
    case 5:  ret_val = 'E';    break;
    case 6:  ret_val = 'F';    break;
    case 7:  ret_val = 'G';    break;
    case 8:  ret_val = 'H';    break;
    case 9:  ret_val = 'I';    break;
    case 10: ret_val = 0x0394; break;  // Big Delta
    case 11: ret_val = 'J';    break;
    case 12: ret_val = 'K';    break;
    case 13: ret_val = 'L';    break;
    case 14: ret_val = 'M';    break;
    case 15: ret_val = 'N';    break;
    case 16: ret_val = 'O';    break;
    case 17: ret_val = 'P';    break;
    case 18: ret_val = 'Q';    break;
    case 19: ret_val = 'R';    break;
    case 20: ret_val = 0x03A3; break;  // Big Sigma
    case 21: ret_val = 0x03A0; break;  // Big Pi
    case 22: ret_val = 'S';    break;
    case 23: ret_val = 'T';    break;
    case 24: ret_val = 'U';    break;
    case 25: ret_val = 'V';    break;
    case 26: ret_val = 'W';    break;
    case 27: ret_val = 'X';    break;
    case 28: ret_val = 'Y';    break;
    case 29: ret_val = 'Z';    break;
    case 30: ret_val = '0';    break;
    case 31: ret_val = '1';    break;
    case 32: ret_val = '2';    break;
    case 33: ret_val = '3';    break;
    case 34: ret_val = '4';    break;
    case 35: ret_val = '5';    break;
    case 36: ret_val = '6';    break;
    case 37: ret_val = '7';    break;
    case 38: ret_val = '8';    break;
    case 39: ret_val = '9';    break;
    case 40: ret_val = '.';    break;
    case 41: ret_val = ',';    break;
    case 42: ret_val = '(';    break;
    case 43: ret_val = ')';    break;
    case 44: ret_val = '+';    break;
    case 45: ret_val = '-';    break;
    case 46: ret_val = '*';    break;
    case 47: ret_val = '/';    break;
    case 48: ret_val = '=';    break;
    case 49: ret_val = '$';    break;
    case 50: ret_val = '<';    break;
    case 51: ret_val = '>';    break;
    case 52: ret_val = '@';    break;
    case 53: ret_val = ';';    break;
    case 54: ret_val = ':';    break;
    case 55: ret_val = '\'';   break;
    };

    return ret_val;
}


unsigned int char_to_num(const wchar_t CHAR)
{
    wchar_t ret_val = 0;
    switch (CHAR)
    {
    case ' ':    ret_val = 0;  break;
    case 'A':    ret_val = 1;  break;
    case 'B':    ret_val = 2;  break;
    case 'C':    ret_val = 3;  break;
    case 'D':    ret_val = 4;  break;
    case 'E':    ret_val = 5;  break;
    case 'F':    ret_val = 6;  break;
    case 'G':    ret_val = 7;  break;
    case 'H':    ret_val = 8;  break;
    case 'I':    ret_val = 9;  break;
    case 0x0394: ret_val = 10; break;  // Big Delta
    case 'J':    ret_val = 11; break;
    case 'K':    ret_val = 12; break;
    case 'L':    ret_val = 13; break;
    case 'M':    ret_val = 14; break;
    case 'N':    ret_val = 15; break;
    case 'O':     ret_val = 16; break;
    case 'P':    ret_val = 17; break;
    case 'Q':    ret_val = 18; break;
    case 'R':    ret_val = 19; break;
    case 0X03A3: ret_val = 20; break;  // Big Sigma
    case 0x03A0: ret_val = 21; break;  // Big Pi
    case 'S':    ret_val = 22; break;
    case 'T':    ret_val = 23; break;
    case 'U':    ret_val = 24; break;
    case 'V':    ret_val = 25; break;
    case 'W':    ret_val = 26; break;
    case 'X':    ret_val = 27; break;
    case 'Y':    ret_val = 28; break;
    case 'Z':    ret_val = 29; break;
    case '0':    ret_val = 30; break;
    case '1':    ret_val = 31; break;
    case '2':    ret_val = 32; break;
    case '3':    ret_val = 33; break;
    case '4':    ret_val = 34; break;
    case '5':    ret_val = 35; break;
    case '6':    ret_val = 36; break;
    case '7':    ret_val = 37; break;
    case '8':    ret_val = 38; break;
    case '9':    ret_val = 39; break;
    case '.':    ret_val = 40; break;
    case ',':    ret_val = 41; break;
    case '(':    ret_val = 42; break;
    case ')':    ret_val = 43; break;
    case '+':    ret_val = 44; break;
    case '-':    ret_val = 45; break;
    case '*':    ret_val = 46; break;
    case '/':    ret_val = 47; break;
    case '=':    ret_val = 48; break;
    case '$':    ret_val = 49; break;
    case '<':    ret_val = 50; break;
    case '>':    ret_val = 51; break;
    case '@':    ret_val = 52; break;
    case ';':    ret_val = 53; break;
    case ':':    ret_val = 54; break;
    case '\'':   ret_val = 55; break;
    };

    return ret_val;
}
