#include <stdio.h>
#include <stdlib.h>
//call by value

void increment(int *a)//205
{
   *a =*a+1;
    printf("the function value of incremented value is %d\n",*a);

}



int main()
{
int a=19;//205
increment(&a);//205
printf("the value of incremented value is %d\n",a);
}
