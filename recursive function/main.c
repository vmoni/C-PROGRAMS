#include <stdio.h>
#include <stdlib.h>

int addnumer(int n)
{
    if(n!=0)
    {
        return (n + addnumer(n-1));//4+ addnumer(3)
    }else
    {
    return n;
    }
}




int main()
{
int num,sum;
scanf("%d",&num);
sum=addnumer(num);
printf("the sum %d",sum);
}
