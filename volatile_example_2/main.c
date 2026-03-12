#include <stdio.h>

int main() {
    volatile int x = 0;

    for (x = 0; x < 1000000000; x++) ;  // loop removed!
    printf("Done\n");

    return 0;
}
