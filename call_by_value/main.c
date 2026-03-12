#include <stdio.h>
#include <stdlib.h>

void swap_data(int x,int y)
{

int temp=x;
x=y;
y=temp;
printf("the swapped x value is %d and y value is %d",x,y);

}

int main()
{
int a=10,b=20;
swap_data(a,b);
printf("the before swap ise is %d and y value is %d",a,b);
}
