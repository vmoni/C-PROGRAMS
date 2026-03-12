#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i;
    p=(int *)malloc(5*sizeof(int));
    if(p==NULL)
    {
        printf("the memory is full");
        return 1;
    }

    for(i=0;i<5;i++)
    {
        p[i]=i+1;
    }
printf("assigned data\n");
        for(i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
 p= (int *)realloc(p,3*sizeof(int));

 printf("assigned data after realloc\n");
for(i=0;i<3;i++)
    {
        printf("%d\n",*(p+i));
    }
   free(p) ;
}
