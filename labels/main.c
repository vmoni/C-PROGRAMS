/*

#include <stdio.h>
#include <stdlib.h>

//Jumps Out of the Current Loop or switch

int main()
{
    int i;

    printf("Using break statement:\n");
    scanf("%d",&i);

    for (; i <= 5; i++)
    {
        if (i == 3)
            break;     // exits the loop when i = 3

        printf("%d ", i);
    }

    printf("\nLoop stopped when i = %d\n", i);
    return 0;
}
*/

//continue — Skips the Rest of the Loop and Goes to Next Iteration
/*

#include <stdio.h>

int main()
{
    int i;

    printf("Using continue statement:\n");
    scanf("%d",&i);

    for (; i <= 5; i++)
    {
        if (i == 3)
            continue;   // skip printing when i = 3

        printf("%d ", i);
    }

    printf("\nLoop finished.\n");
    return 0;
}
*/

/*
//return — Jumps Out of a Function
#include <stdio.h>

void checkNumber(int n)
{
    if (n < 0)
    {
        printf("Negative number detected!\n");
        return;   // exits the function immediately
    }

    printf("Number is positive: %d\n", n);
}

int main()
{
    checkNumber(10);
    checkNumber(-5);
    printf("Program ended.\n");

    return 0;
}
*/
//goto — Jumps to a User-Defined Label
/*
#include <stdio.h>

int main()
{
    int i = 1;

    printf("Using goto statement:\n");

start:// label
    printf("%d ", i);
    i++;

    if (i <= 5)
        goto start;   // jump back to label

    printf("\nLoop ended using goto.\n");
    return 0;
}
*/

