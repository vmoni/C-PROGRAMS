#include <stdio.h>
#include <stdlib.h>
int count(int n);
int main()
{
    int a,count_no;
    scanf("%d",&a);
    count_no = count(a);
    printf("total no is %d",count_no);
    return 0;
}
int count(int n)
{
    int c=0;
    if(n == 0)
    {
        return 0;
    }
    while(n!=0)
    {
       n=n/10;
       c++;
    }
    return c;
}
