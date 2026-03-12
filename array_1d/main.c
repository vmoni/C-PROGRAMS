#include <stdio.h>
#include <stdlib.h>
void tan(int (*m)[3][2])
{
printf("%p",m);

}
int main()
{
int m[2][3][2]={{{10,9},{5,4},{5,1}},{{5,9},{19,4},{55,1}}};
int i,j,k;
int (*p)[3][2]=m;
int ts=sizeof(m);
int t=sizeof(m[0]);
int er=sizeof(m[0][0]);
int e=sizeof(m[0][0][0]);
int r=t/er;
int c=er/e;
int a=ts/t;
printf("the size of the array is %d and its row is %d and column is %d\n",a,r,c);
for(k=0;k<a;k++)
{
  for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
       printf("%d ",*(*(*(p+k)+i)+j));
    }
    printf("\n");
}
printf("the next array is\n");

}
tan(&m);
}
