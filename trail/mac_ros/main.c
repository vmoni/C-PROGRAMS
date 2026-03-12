#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define AREA(r) PI*r*r
#define GREATER(r) ((r) > (10) ? (1) : (0))

int main()
{
    int size,x=0,r;
    printf("Enter the radius of the circle");
    scanf("%d",&r);
    size = AREA(r);
    x=GREATER(size);
    if(x) printf("Circle size is %d and it is big",size);
    else  printf("Circle size is %d and it is is small",size);
    return 0;
}
