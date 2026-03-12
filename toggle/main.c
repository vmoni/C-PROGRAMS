#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    uint16_t num = 1096;       // initial value: 0000 0100 0100 1000
    uint8_t bit_position = 6;  // choosing bit 6 (counting from LSB = 0)

    num = num ^ (1 << bit_position);  // TOGGLE bit 6 → flips 0→1 or 1→0

    printf("After toggling bit %d: %u (0x%04X)\n", bit_position, num, num);
    return 0;
}
