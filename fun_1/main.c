#include <stdio.h>
#include <stdlib.h>

int sumnumber(int n)
{
    if(n!=0)
        return n + sumnumber(n-1);
    else
        return n;
}
_Noreturn void stopprogram()
{
    printf("it will  print but function\n");
    exit(0);
}

int main()
{

int num;
printf("give the number\n");
scanf("%d",&num);
int sum=sumnumber(num);
printf("the total sum is %d\n",sum);
if(sum>10)
{
 stopprogram();
}

printf("it will not print\n");


}
