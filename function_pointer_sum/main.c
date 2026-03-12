#include <stdio.h>
#include <stdlib.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
  int a=5;
  int b=37;
  int c;
  int (*p)(int,int);
  p=&sum;
  c=sum(a,b);
  printf("the sum from the function is %d\n",c);
  c=(*p)(a,b);
  printf("the sum from the pointer function is %d\n",c);
}
