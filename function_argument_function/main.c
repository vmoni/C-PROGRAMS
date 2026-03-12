#include <stdio.h>
#include <stdlib.h>
void sum(int a,int b)
{
    printf("the sum is %d\n",a+b);
}
void sub(int a,int b)
{
    printf("the sub is %d\n",a-b);
}
void data(void(*p)(int,int))
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d %d",&a,&b);
    (*p)(a,b);
}


int main()
{
  printf("the sum fun is called \n");
  data(&sum);
  printf("the sub fun is called \n");
  data(&sub);
}
