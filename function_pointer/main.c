#include <stdio.h>
#include <stdlib.h>

int sum()
{
 int a=4,b=3;
 int sum=a+b; //memory allocated
 printf("%d\n",sum);
 return sum; //memory deallocated
}


int main()
{
  int (*fptr)();//data type function (*pointer name ) (int,int)
  fptr = &sum;

  int result =sum();
  int fn_result=fptr();

  printf("the sum by function is %d\n",result);
  printf("the sum by function pointer is %d\n",fn_result);



}
