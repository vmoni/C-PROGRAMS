#include <stdio.h>

int main() {

    int a = 25, b = 15;

    // ✅ Without variable assignment
    (a > b) ? printf("a is greater\n") : printf("b is greater\n");

    // ✅ With variable assignment
    int max = (a > b) ? a : b;
    printf("Maximum value stored = %d\n", max);

    // ⚠️ Improper way to assign
    int mat = (a > b)
              ? printf("a which has a value of %d is greater", a)
              : printf("b which has a value of %d is greater\n", b);

    printf("\nMaximum value is: %d\n", mat);
    return 0;
}
