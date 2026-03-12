#include <stdio.h>

int main()
{
    int a, b, c, greatest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using nested ternary operator
    greatest = (a>b)?(a>c? a : c):(c>b? c:b)

    printf("The greatest number is: %d", greatest);

    return 0;
}
