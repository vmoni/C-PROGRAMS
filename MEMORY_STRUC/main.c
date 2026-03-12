#include <stdio.h>
#include <stdlib.h>
#pragma pack(2)

struct num{
char c;
char a;
int i;
char b;
char d;

};

int main()
{
struct num v1;
v1.i=25;
v1.c='A';
v1.a='A';
v1.b='A';
v1.d='A';
printf("THE SIZE OF STRUCTURE IS %zu\n",sizeof(v1));
printf("%d",v1.i);

}
