#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
printf("enter the choice\n");
scanf("%d",&i);
for(int j=0;j<i;j++)
{

    printf("%d\n",j);
    if(j==10)
    {
       printf("i will leave the loop\n");
       quick_exit(0);
    }
}
printf("i am here");
}
