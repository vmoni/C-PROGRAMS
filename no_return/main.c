#include <stdio.h>
#include <stdlib.h>
#include<stdnoreturn.h>

_Noreturn void  fatalerror()
{
    printf("wrong creditinals");
    while(1);
}


int main()
{
int password=0;
if(password)
{
    printf("authentication is successful\n");
}
else
{
    fatalerror();
}
printf("this program\n");
}
