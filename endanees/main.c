#include <stdio.h>
#include <stdint.h>
#define hbe 0 //big endian
#define lbe 1 //little endian
#define cpu hbe// my system works in little endian
#if(cpu==hbe)//1==1
   #define SWAP(x) (((x)<<8) | ((x)>>8))
#else
   #define SWAP(x) (x)
#endif

int main()
{
    uint16_t data=0x1234;
    uint16_t result=SWAP(data);
    printf("0x%X is the original value\n",data);
    printf("0x%X is the swapped value\n",result);
}
