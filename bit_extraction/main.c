#include <stdio.h>
#include <stdlib.h>
struct data{
unsigned int g:3;
unsigned int p:1;
};
int main()
{
    struct data d;
    d.g=7;
    d.p=0;
    printf("Bit0=%d\n",d.g);
    printf("Bit1=%d\n",d.p);
    printf("Bit0=%d\n",(d.g>>0)&1);
    printf("Bit1=%d\n",(d.g>>1)&1);
    printf("Bit2=%d\n",(d.g>>2)&1);
    /*printf("Bit3=%d\n",(d.v>>3)&1);
    printf("Bit4=%d\n",(d.v>>4)&1);
     printf("Bit5=%d\n",(d.v>>5)&1);
    printf("Bit6=%d\n",(d.v>>6)&1);
    printf("Bit7=%d\n",(d.v>>7)&1);*/


}
