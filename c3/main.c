
#include <stdio.h>

#define A 10
#define B 20
#define SUM(x, y) ((x) + (y))   // Macro expansion, not a function call

int main() {
    printf("Sum = %d\n", SUM(A, B));  // Evaluated at compile-time
    return 0;
}
