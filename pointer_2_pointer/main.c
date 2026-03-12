#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>

int main()
{
int a=1025;
int *p;
p=&a;
printf("address stored in p : %p\n",p);
printf("value stored in p:%d\n",*p);
int **q;//pointer to pointer
q = &p;
printf("address stored in q : %p\n",q);
printf("value stored in q:%p\n",*q);
printf("value stored in dereferenced from q: %d \n",**q);
int ***r;
r=&q;
printf("address stored in r : %p\n",r);
printf("value stored in r:%p\n",*r);
printf("value stored in dereferenced from r to q: %p \n",**r);
printf("value stored in dereferenced from r to q to p: %d \n",***r);


}
