#include <stdio.h>
#include <stdlib.h>  // for atoi()

int main(int argc, char *argv[])
{
    if(argc < 3)
    {
        printf("Please enter two numbers!\n");
        return 0;
    }

    int num1 = atoi(argv[1]);  // convert string to integer
    int num2 = atoi(argv[2]);
    int sum = num1 + num2;

    printf("Sum = %d\n", sum);

    return 0;
}
