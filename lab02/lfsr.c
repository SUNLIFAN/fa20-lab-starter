#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

#define get_bit(val, n) ((val >> n) & 1)

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t val = *reg;
    uint16_t bit = get_bit(val, 0) ^ get_bit(val, 2) ^ get_bit(val, 3) ^ get_bit(val, 5);
    val = val >> 1;
    val = val & ((1 << 16) - 1);
    val = val | (bit << 15);
    *reg = val;
}

