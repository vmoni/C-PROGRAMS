#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i,*p;
printf("enter the no of integers\n");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));//void pointer
if(p==NULL)
{
    printf("memory allocation failed\n");
    return 1;
}
printf("enter the value\n");
for(i=0;i<n;i++)
{
    scanf("%d",(p+i));
}



int ns;
printf("the new memory size is\n");
scanf("%d",&ns);
//reallocate
int *s;
s=(int*)realloc(p,ns*sizeof(int));
printf("the entered value is \n");
if(p==NULL)
{
    printf("memory allocation failed\n");
    return 1;
}
if(ns>n)
{
    printf("the additional values are\n");
    for(i=n;i<ns;i++)
        {
    scanf("%d",(s+i));
    }
}

printf("the final entered value is \n");
for(i=0;i<ns;i++)
{
    printf("%d\n",*(s+i));

}

free(p);//clear the memory
printf("the address of the pointer is %p\n",p);

p=NULL;
printf("the address of the pointer is %p",p);




}
