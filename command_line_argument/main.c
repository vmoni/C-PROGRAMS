#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int a[10],sum=0;
printf("the name of the program is %s\n",argv[0]);
for(int i=1;i<argc;i++)
{
    printf("the data in a[%d] = %s\n",i,argv[i]);
}
for(int i=2;i<argc;i++)
{
    a[i]=atof(argv[i]);
    sum = sum + a[i];
}
printf("the total sum is %d\n",sum);
}
