#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool rain;
    scanf("%d",&rain);
    int a=5,b=10;
    int c=a>b;
    printf("c is %d \n",c);
    if(rain)
    {
        printf("it is raining");

    }else
    {
        printf("it is not raining");

    }

}
