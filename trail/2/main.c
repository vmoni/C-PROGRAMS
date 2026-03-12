#include <stdio.h>
#include <stdint.h>  // for uint16_t

int main() {
    unsigned int a = 3;  // your number

    // Count how many bits are needed to represent 'a'
    int bits_needed = 0;
    unsigned int temp = a;
    while (temp > 0) {
        temp = temp >> 1;  // shift right by 1 bit
        bits_needed++;
    }

    printf("Number of bits needed: %d\n", bits_needed);

    if(bits_needed < 16) {
        uint16_t b = a;  // promote to 16-bit unsigned int
        printf("Promoted to uint16_t: %u\n", b);
    } else {
        printf("No promotion needed. Already uses >=16 bits.\n");
    }

    return 0;
}
