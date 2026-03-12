#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>

int main()
{
int a=1025;
int *p;
p=&a;
printf("address : %p\n",p);//referencing
printf("value :%d\n",*p);//deferencing
//changing pointer types
char *c;
c=(char*)p;//typecasting
//printf("address is %p\n",c);
//arthmetic
printf("new address : %p\n",c);
printf("new value : %d\n",*c);//0 byte

printf("new address c+1 : %p\n",(c+1));//1
printf("new value c+1 : %d\n",*(c+1));

printf("new address c+2 : %p\n",(c+2));//2
printf("new value c+2 : %d\n",*(c+2));

printf("new address c+3 : %p\n",(c+3));//4
printf("new value c+3 : %d\n",*(c+3));

void *vp;
//void->integer
vp=p;
printf("the void pointer int address is %p\n",vp);
printf("the void pointer value is %d\n",*(int*)vp);
//void->char
vp=c;
printf("the void pointer char address is %p\n",vp);
printf("the void pointer value is %d\n",*(char*)vp);




}
