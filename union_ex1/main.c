#include <stdio.h>
#include <stdlib.h>
#pragma pack(0)

struct s{
int a;
char b;
float c;
};

int main()
{
struct s d;
printf("the total size in bytes is %lu\n",sizeof(d));
d.a=4;
printf("integer is :%d\n",d.a);
d.b='c';
printf("character is :%c\n",d.b);
d.c=6.2;
printf("float is :%f\n",d.c);
printf("the final value is \n");
printf("integer is :%d\n",d.a);
printf("character is :%c\n",d.b);
printf("float is :%f\n",d.c);

}
