#include <stdio.h>
#include <stdlib.h>

int *value()
{
    static int b=10;
    return &b;

}



int main()
{
int *p;
int **q;
int ***r;
void *v;

int a=4;
p=&a;
q=&p;
r=&q;
v=&a;


int *c =value();
printf("the pointer is %d",*p);
printf("\nthe double pointer is %d",**q);
printf("\nthe triple pointer is %d",***r);
//printf("\nthe void pointer is %d",*v);
printf("\nthe void pointer after typecate is %d",*(int *)v);
printf("\nthe value from function is %d",*c);

}
