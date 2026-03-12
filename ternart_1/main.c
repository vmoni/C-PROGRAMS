#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a=25,b=15,c=75;

  int max,greatest;
  max=a>b? a:b;// variable based ternary operator
//method 1
  printf("%d is the maximum value\n",max);
//method
  a>b? printf("a is greater\n") : printf("b is greater\n");// no variable based ternary operator
  //wrong way
  max= a>b? printf("a is greater\ who value is %d \n",max) : printf("b is greater\ who value is %d \n",max);


  greatest=(a>b)?(a>c?a:c):(c>b?b:c);//  75:15

  printf("%d",greatest);
}
