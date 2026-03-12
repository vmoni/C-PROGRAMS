#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10],b[10];
    long i,j,k;
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    i=atol(a);
    j=atol(b);
    k=i+j;
    printf("%ld",k);

}
