#include <stdio.h>

extern int X;  // memory NOT allocated here

void display();

int main() {
    printf("Value of X in main(): %d\n", X);
    display();
    return 0;
}
