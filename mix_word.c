#include "mix_word.h"

#include <stdio.h>

#define BUFF_LEN 17

void MixWordByteAssign(byte* target, const byte VALUE)
{
    // We can can use the modulus operator to enforce
    // a 0-64 constraint on the allowable value of a byte.
    *target = VALUE % (BYTE_MAX + 1);
}

void MixWordDebugPrint(const MixWord* const TARGET)
{
    const char ASCII_NUM_OFFSET = 48;
    
    char buffer[BUFF_LEN];

    // buffer layout:
    // 0     : SIGN
    // 1     : (space)
    // 2-3   : Byte 1
    // 4     : (space)
    // 5-6   : Byte 2  
    // 7     : (space)
    // 8-9   : Byte 3
    // 10    : (space)
    // 11-12 : Byte 4
    // 13    : (space)
    // 14-15 : Byte 5
    // 16    : NULL terminator.
    
    if (PLUS == TARGET->leading_sign)
    {
        buffer[0] = '+';
    }
    else if (MINUS == TARGET->leading_sign)
    {
        buffer[0] = '-';
    }
    
    buffer[1] = ' ';

    int j = 2;
    for (int i = 0; i < BYTES_PER_WORD; ++i)
    {
        char tens = (TARGET->bytes[i] / 10) + ASCII_NUM_OFFSET;
        char ones = (TARGET->bytes[i] % 10) + ASCII_NUM_OFFSET;

        buffer[j++] = tens;
        buffer[j++] = ones;
        buffer[j++] = ' ';
    }

    buffer[BUFF_LEN-1] = 0;

    printf("%s\n", buffer);
}


MixWord MixWordNew(void)
{
    MixWord ret_val;
    ret_val.leading_sign = PLUS;
    ret_val.bytes[0]     = 0;
    ret_val.bytes[1]     = 0;
    ret_val.bytes[2]     = 0;
    ret_val.bytes[3]     = 0;
    ret_val.bytes[4]     = 0;

    return ret_val;
}

MixWord MixWordNewFull(const Sign S,
                       const byte B1,
                       const byte B2,
                       const byte B3,
                       const byte B4,
                       const byte B5)
{
    MixWord ret_val;
    ret_val.leading_sign = S;
    ret_val.bytes[0]     = B1;
    ret_val.bytes[1]     = B2;
    ret_val.bytes[2]     = B3;
    ret_val.bytes[3]     = B4;
    ret_val.bytes[4]     = B5;

    return ret_val;
}
