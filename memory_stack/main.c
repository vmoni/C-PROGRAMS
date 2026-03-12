#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n = 4;
    printf("%d\n", factorial(n));
}
