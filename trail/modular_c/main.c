#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "divi.h"

int main()
{
    int input, a, b, c;

    printf("Enter the operation you need to perform:\n");
    printf("1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n");
    scanf("%d", &input);

    printf("Enter the operands: ");
    scanf("%d %d", &a, &b);

    switch(input)
    {
        case 1:
            c = add(a, b);
            printf("The addition value is %d\n", c);
            break;
        case 2:
            c = sub(a, b);
            printf("The subtraction value is %d\n", c);
            break;
        case 3:
            c = mul(a, b);
            printf("The multiplication value is %d\n", c);
            break;
        case 4:
            if(b == 0) {
                printf("Error: Division by zero!\n");
            } else {
                c = divi(a, b);
                printf("The division value is %d\n", c);
            }
            break;
        default:
            printf("Invalid operation selected!\n");
    }

    return 0;
}
