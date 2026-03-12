#include <stdio.h>
#include <stdlib.h>

int main()
{
 volatile int i=1;
 for (i = 0; i < 100000; ++i) ;
}
