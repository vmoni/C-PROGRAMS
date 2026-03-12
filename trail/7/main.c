#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main()
{
    char a[50];
    int b;

    printf("Enter a number: ");
    scanf("%d", &b);

    strcpy(a, (b > 5 ? "greater" : "smaller"));  // copy string into array

    printf("The number is %d %s than 5\n", b, a);

    return 0;
}
