#include <stdio.h>
#include <time.h>

void delay_volatile(int ticks) {
    volatile int t;// try int t also
    for (t = 0; t < ticks; ++t) ; // compiler MUST execute loop
}

int main() {
    clock_t start = clock();

    printf("Running VOLATILE delay...\n");
    delay_volatile(1000000000);

    clock_t end = clock();
    printf("Time: %.6f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
