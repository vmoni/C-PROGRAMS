#include <stdio.h>
#include <stdlib.h>
void add (int *restrict a,int *restrict b,int *restrict c,int n)
{

  for(int i=0;i<n;i++)
{
    c[i]=a[i]+b[i];
}
}

int main()
{
int x[3]={1,2,3};
int y[3]={3,4,5};
int z[3];
add(x,x,z,3);
for(int i=0;i<3;i++)
{
    printf("%d\n",z[i]);
}

}
