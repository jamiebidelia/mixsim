#ifndef MIX_CHARACTERS_H
#define MIX_CHARACTERS_H

#include <wchar.h>

// NOTE:  users of this code must:
// #include <locale.h>
// setlocale(LC_CTYPE, "");

wchar_t  num_to_char(const unsigned int NUMBER);
unsigned int char_to_num(const wchar_t CHAR);

#endif
