#include <stdio.h>
#include <stdlib.h>



void sum(int a, int b)
{
    printf("sum = %d\n", a + b);
}

void sub(int a, int b)
{
    printf("sub = %d\n", a - b);
}

void display(void (*fptr)(int, int))
{
    fptr(5, 1);  // calling the passed function
}

int main()
{
    display(sum);  // passing function as an argument
    display(sub);  // passing another function
    return 0;
}

