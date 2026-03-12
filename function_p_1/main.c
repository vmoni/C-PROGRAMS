#include <stdio.h>
#include <stdlib.h>

int a=10;//global intialised store
int b;//.bss

int view()
{

     b=0;
     static int d=1;
     return d;

}
int main()
{
 int c=10;//stack
 int f=view();
 printf("%d\n",f);
}
