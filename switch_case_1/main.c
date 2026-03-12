#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
printf("enter the choice\n");
scanf("%d",&i);
switch(i) //3
{
case 1:
    printf("this is choice 1\n");
    break;
case 2:
    printf("this is choice 2\n");
    break;
case 3: //3
    printf("this is choice 3\n");
    break;
}
printf("switch case completed\n");
}
