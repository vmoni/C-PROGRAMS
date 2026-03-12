#include <stdio.h>

typedef unsigned int uint8;

#define TYPE(x) _Generic((x), int: "int", unsigned int: "unsigned int", float: "float", double: "double")

int main() {
    uint8 a = 255;
    printf("Type of a = %s\n", TYPE(a));  // prints "unsigned int"
    return 0;
}
