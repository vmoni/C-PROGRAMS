#include <stdio.h>

int main() {
    volatile int x = 0;

    for (x = 0; x < 1000000000; x++) ;  // compiler cannot remove

    printf("Done\n");

    return 0;
}
