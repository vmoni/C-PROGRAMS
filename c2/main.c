
#include <stdio.h>

int a = 10;     // Global variable -> stored in .data section
int b = 20;     // Global variable -> stored in .data section

int sum(int x, int y) {   // Function -> stored in .text (code) section
    return x + y;
}

int main() {
    int result;           // Local variable -> stored in stack (RAM)
    result = sum(a, b);   // Function call at runtime
    printf("Sum = %d\n", result);
    return 0;
}
