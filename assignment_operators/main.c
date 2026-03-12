#include <stdio.h>

int main() {
    int x = 10;

    x += 5;  // x = x + 5
    printf("After += : %d\n", x);

    x -= 3;  // x = x - 3
    printf("After -= : %d\n", x);

    x *= 2;  // x = x * 2
    printf("After *= : %d\n", x);

    x /= 4;  // x = x / 4
    printf("After /= : %d\n", x);

    x %= 3;  // x = x % 3
    printf("After %%= : %d\n", x);

    return 0;
}
