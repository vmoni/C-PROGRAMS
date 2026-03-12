#include <stdio.h>
#include <stdlib.h>

struct ex{
unsigned int a : 3;
unsigned char b : 2;
};


int main()
{
struct ex ax;
ax.a=5;
ax.b=0;
printf("size is : %zu",sizeof(ax));
}
