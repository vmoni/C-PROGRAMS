/*
#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        result = a + b;
    else
    {
        if (choice == 2)
            result = a - b;
        else
        {
            if (choice == 3)
                result = a * b;
            else
            {
                if (choice == 4)
                    result = a / b;
                else
                    printf("Invalid choice!\n");
            }
        }
    }

    if (choice >= 1 && choice <= 4)
        printf("Result = %.2f\n", result);

    return 0;
}
*/
#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            result = a + b;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            result = a / b;
            printf("Result = %.2f\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
