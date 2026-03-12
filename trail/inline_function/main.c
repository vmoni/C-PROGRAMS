#include <stdio.h>
#include <stdlib.h>
int square(int a);
static inline int square_t(int a );
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=square(a);
    c=square_t(a);
    printf("Normal function %d\n",b);
    printf("Inline Function %d\n",c);
}
int square(int a)
{
    int b;
    b=a*a;
    return b;

}
static inline int square_t(int a )
{
    int b;
    b=a*a;
    return b;
}
