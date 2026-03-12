#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>

int main()
{
  int a;
  char b;
  float c;
  double d;
  char e[1];
  uint8_t f;
  uint16_t g;
  uint32_t h;

 printf("%d bytes\n",sizeof(a));
 printf("%d bytes\n",sizeof(b));
 printf("%d bytes \n",sizeof(c));

 printf("%d bytes\n",sizeof(d));
 printf("%d bytes\n",sizeof(e));
  printf("%d bytes \n",sizeof(f));

 printf("%d bytes\n",sizeof(g));
  printf("%d bytes\n",sizeof(h));


}
