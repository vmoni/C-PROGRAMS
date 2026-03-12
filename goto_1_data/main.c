#include <stdio.h>
#include <stdlib.h>

int main()
{
int n=5;
start://4
    printf("%d\n",n);//5//4
    n--;//4//3
    if(n>3)//4>3//false
    goto start;//start

printf("done");
}
