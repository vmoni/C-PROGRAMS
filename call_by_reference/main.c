#include <stdio.h>
#include <stdlib.h>

void swap_data(int *x,int *y)//1024//1030
{
printf("the address before swap  is %p and y address is %p\n",x,y);
int temp=*x;
*x=*y;
*y=temp;//1030//1024
printf("the address after swap  is %p and y address is %p\n",x,y);
}

int main()
{
int a=10,b=20;
printf("the before swap ise is %d and y value is %d\n",a,b);

swap_data(&a,&b);//1024//1030
printf("the swapped x value is %d and y value is %d\n",a,b);

}
