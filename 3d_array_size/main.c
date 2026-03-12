#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[2][3][4];
int ts=sizeof(a);
int s1a=sizeof(a[0]);
int soer=sizeof(a[0][0]);
int soes = sizeof(a[0][0][0]);
int col =(soer)/soes;
int row = s1a /soer;
int array = ts/s1a;
printf("array size :%d\n",array);
printf("col size :%d row size : %d \n",col,row);

}
