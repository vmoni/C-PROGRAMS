#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{

    uint16_t a=1024,b=1,c,d,e,f,t;
    b=b<<6;
    c=a|b;
    printf("%d %d %d \n",a,b,c);
    e=(1<<6);
    d=c & ~e;
    printf("%d\n",d);
    d=15;
    e=(1<<3);
    printf("%d %d \n",e,d);
    f=d^e;
    printf("%d\n",f);
    t=5;
    printf("%d",~t);

    return 0;
}
