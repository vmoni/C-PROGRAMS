#include <stdio.h>
#include <stdlib.h>
void sum(void)
{
    int a,b;
    printf("enter the number\n");
    scanf("%d %d",&a,&b);
    printf("the sum is %d\n",a+b);

}
void sub(void)
{
    int a,b;
    printf("enter the number\n");
    scanf("%d %d",&a,&b);
    printf("the sub is %d\n",a-b);

}
void divd(void)
{
    int a,b;
    printf("enter the number\n");
    scanf("%d %d",&a,&b);
    printf("the div is %d\n",a/b);

}
void mul(void)
{
    int a,b;
    printf("enter the number\n");
    scanf("%d %d",&a,&b);
    printf("the mul is %d\n",a*b);

}
int main()
{
 void (*s[3])(void);
 s[0]=sum;
 s[1]=sub;
 s[2]=divd;
 s[3]=mul;
  int c;
  printf("the choice is \n");
  scanf("%d",&c);
  s[c]();
}
