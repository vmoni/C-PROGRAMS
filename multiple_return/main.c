#include <stdio.h>
#include <stdlib.h>
void rect(int l,int b,int *area,float *peri,char *c)
{
    *area=l*b;
    *peri=2*l*b;
    *c='h';
}
int main()
{
int area;
float peri;
char c;
rect(10,5,&area,&peri,&c);
printf("%d is the area\n",area);
printf("%f is the perimeter\n",peri);
printf("%c is the character\n",c);
}
