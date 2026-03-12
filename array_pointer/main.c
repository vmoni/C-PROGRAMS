#include <stdio.h>
#include <stdlib.h>

void sum(void)
{

    int a=4,b=5;
    int sum=a+b;
    printf("sum is %d",sum);
}

void sub(void)
{
    int a=4,b=5;
    int sub=a-b;
    printf("sub is %d",sub);
}
void mul(void)
{
    int a=4,b=5;
    int mul=a*b;
    printf("mul is %d",mul);
}


int main()
{
  void (*cal[3])(void);
  //int choice;
  cal[0]=sum;
  cal[1]=sub;
  cal[2]=mul;
  //printf("choice is");
  //scanf("%d",choice);
  cal[2]();

}
