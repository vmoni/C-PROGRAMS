#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=3,*b;
b=&a;
float c=3,*d;
d=&c;
void *vp;
vp=&a;//int address;
printf("address of int data types is %d \n ",*b);
printf("address of int data types is %d \n ",*(int*)vp);
vp=&c;//int address;
printf("address of float data types is %f \n ",*d);
printf("address of int data types is %f \n",*(float*)vp);


}
