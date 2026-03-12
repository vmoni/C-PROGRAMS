#include <stdio.h>
#include <stdlib.h>

struct num{

int i;
char c;
struct num *p;
};

int main()
{
struct num v1;
struct num v2;
v1.i=25;
v1.c='A';
v1.p=NULL;
v2.i=19;
v2.c='Z';
v2.p=NULL;
v1.p=&v2;
printf("the number is %d and the char is %c",v1.p->i,v1.p->c);

}
