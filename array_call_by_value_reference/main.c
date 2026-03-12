#include <stdio.h>
#include <stdlib.h>
void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
     printf("%d\n",*(a+i));
    }

}
int main()
{
    int a[10]={1,2,5,4,6,50};
    int i = sizeof(a)/sizeof(a[0]);
     display(a,i);

}
