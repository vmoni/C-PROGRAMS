#include <stdio.h>
#include <stdlib.h>
union stud{
int a;
char b;
float c;
};
int main()
{
 union stud s1;
 s1.a=256;
 printf("the integer is %d\n",s1.a);
 s1.b='a';
 printf("the char is %c\n",s1.b);
 printf("the integer after character is %d\n",s1.a);
 s1.c=6.2;
 printf("the float value is %f\n",s1.c)
 printf("the integer after float is %d\n",s1.a);
}
