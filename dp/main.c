#include <stdio.h>
#include <stdlib.h>

int* sum()
{
 int a=4,b=3;
 int c=a+b; //memory allocated
 printf("%p",&c);
 return &c; //memory deallocated
}

int main()
{
int *p = sum();//
printf("the sum value %d",*p);
}

