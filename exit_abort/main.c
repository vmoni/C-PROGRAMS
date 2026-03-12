#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Using break statement:\n");
    scanf("%d",&i);

    for (; i <= 5; i++)
    {
        if (i == 3)
            _Exit(0);    // exits the loop when i = 3

        printf("%d ", i);
    }

    printf("\nLoop stopped when i = %d\n", i);
    return 0;
}
