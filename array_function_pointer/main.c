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
void mul(int a,int b)
{
    printf("the mul is %d\n",a*b);
}
void dive(int a,int b)
{
    printf("the div is %d\n",a/b);
}
int main()
{
  void (*f[4])(int,int)={sum,sub,mul,dive};
  int i;
  printf("the index of fun\n");
  scanf("%d",&i);
  (*f[i])(100,10);

}
