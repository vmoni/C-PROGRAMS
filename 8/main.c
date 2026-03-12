#include <stdio.h>

typedef unsigned char BYTE;   // Create an alias 'BYTE' for 'unsigned char'

int main() {
    BYTE a = 255;   // maximum value an unsigned char can hold
    BYTE b = 10;
    BYTE sum = a + b;   // will overflow (wrap around) since max = 255

    printf("a = %u\n", a);
    printf("b = %u\n", b);
    printf("sum (after overflow) = %u\n", sum);

    return 0;
}
