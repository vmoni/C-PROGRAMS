#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>

union data//template
{
uint16_t info;//integer data type(16 bit)
struct{ //structure nam
uint16_t a:1;
uint16_t b:2;
uint16_t c:3;
uint16_t d:4;
uint16_t e:6;
}bit;
};

int main()
{
union data r;//r union
r.info=0b1010101001010101;//bit

printf("a: %u \n",r.bit.a);
printf("b: %u \n",r.bit.b);
printf("c: %u \n",r.bit.c);
printf("d: %u \n",r.bit.d);
printf("e: %u \n",r.bit.e);




}
