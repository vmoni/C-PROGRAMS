#include <stdio.h>

int main() {
    int x = 3;    //Binary: 0000 0011
    int y = 24;   // Binary: 0001 1000
    //multiplying by left shift
    printf("x after multiplying 2 or x << 1 = %d\n", x << 1); // 3 * 2 = 6
    printf("x after multiplying 4 or x << 2 = %d\n", x << 2); // 3 * 4 = 12
    printf("x after multiplying 8 or  x << 3 = %d\n", x << 3); // 3 * 8 = 24

//dividing by right shift
    printf("y after dividing by 2 or  y >> 1 = %d\n", y >> 1);  // 24 / 2 = 12
    printf("y after dividing by 4 or y >> 2 = %d\n", y >> 2);  // 24 / 4 = 6
    printf("y after dividing by 8 or y >> 3 = %d\n", y >> 3);  // 24 / 8 = 3
    return 0;
}
