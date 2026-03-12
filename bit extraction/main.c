#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    uint16_t num = 189;       // binary: 0000 0100 0100 1000
    uint8_t START = 2;  // choose bit to extract
    uint8_t END = 5;

   // uint8_t bit_value = (num >> bit_position) & 1; // extract bit 6
    uint8_t bit_value=  1 << (END-START+1);
    bit_value = bit_value -1;
    num=num&(bit_value<<START);
    num=num>>START;

    printf("Bit %d \n",num);
    return 0;
}
