
//c99 standards

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
int a=8, b=10,c=5;
int and_1 = a & b;
int or_1 = a | c;
int xor_1 = a^b;
int not_1 =~a;
int rs = a>>2;
int ls = a<<4;

printf("and_1 %d\n",and_1);
printf("or_1%d\n",or_1);
printf("xor_1 %d\n",xor_1);
printf("not_1 %d\n",not_1);
printf("rs %d\n",rs);
printf("ls %d\n",ls);



}
