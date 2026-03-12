#include <stdio.h>
#include <stdlib.h>

int main()
{
int b[4]={1,2,3,4};
int c[4]={1,3,4};
int d[4]={1,2,3};
int *a[4];
a[0]=b;
a[1]=c;
a[2]=d;
for(int i=0;i<3;i++)
{
    printf("the address of %d array  is %p\n",i,a[i]);
    printf("the value of %d array \n",i);
    for(int j=0;j<4;j++)
    {
     printf("%d ",*(a[i]+j));
    }


}
}
