#include <stdio.h>
#include <stdlib.h>

void add(int a,int b)
{
    printf("%d is the sum\n",a+b);

}
void sub(int a,int b)
{
    printf("\n %d is the subtract \n",a-b);

}

void mul(int a,int b)
{
    printf("\n %d is the multiply \n",a*b);
}

void divid(int a,int b)
{
    printf("\n %d is the divide \n",a/b);

}


int main()
{
void (*p[5])(int,int)={add,sub,mul,divid};
int c;
printf("enter the choice\n");
scanf("%d",&c);
(*p[c])(10,2);
printf("the process is complete\n");
}
