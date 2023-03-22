#ifndef MIX_ARCHITECTURE_H
#define MIX_ARCHITECTURE_H

#include "mix_word.h"

#include <stdbool.h>

typedef MixWord MixRegister;

#define BYTES_PER_INDEX 2
#define NUM_CELLS 4000
#define NUM_INDICES 6

typedef struct MixIndex
{
    Sign leading_sign;
    byte bytes[BYTES_PER_INDEX];
} MixIndex;

typedef enum Compare {LESS, GREATER, EQUAL} Compare;

typedef struct MixArchitecture
{
    MixRegister register_a;
    MixRegister register_x;
    MixIndex    indices[NUM_INDICES];
    MixIndex    register_j;

    byte        memory_cells[NUM_CELLS];
    bool        overflow_toggle;
    Compare     compare_indicator;
} MixArchitecture;

#endif