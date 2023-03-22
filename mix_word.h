#ifndef MIX_WORD_H
#define MIX_WORD_H

#include <stdint.h>

// MIX uses six-bit bytes.
// A MIX machine word is a sign and five bytes.
#define BYTES_PER_WORD 5
#define BYTE_MIN 0
#define BYTE_MAX 64

typedef enum Sign {PLUS, MINUS} Sign;
typedef uint8_t byte;

typedef struct MixWord
{
    Sign leading_sign;
    byte bytes[BYTES_PER_WORD];
} MixWord;

void    MixWordByteAssign(byte* target, const byte VALUE);
void    MixWordDebugPrint(const MixWord* const TARGET);
MixWord MixWordNew(void);
MixWord MixWordNewFull(const Sign S,
                       const byte B1,
                       const byte B2,
                       const byte B3,
                       const byte B4,
                       const byte B5);

#endif
