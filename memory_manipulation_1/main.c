#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
int src[2]={1,2};
int dest[2]={3,4};
//copy
printf("%d %d is the old value \n",dest[0],dest[1]);
memcpy(dest,src,2*sizeof( int));
printf("%d %d is the new value \n",dest[0],dest[1]);
//set any value to memory
memset(dest,0,2*sizeof(int));
printf("%d %d is the set value \n",dest[0],dest[1]);
//search
void *p=memchr(src,2,2*sizeof(int));
if(p==NULL)
{
    printf("the data is not found\n");
}else{
    printf("the data is found at %p\n",p);
}
int a[5]={0,1,2,3,4};
printf("before\n");
for(int i=0;i<5;i++)
{
    printf("%d\n",a[i]);
}
memmove(&a[1],&a[0],4*sizeof(int));
printf("after\n");
for(int i=0;i<5;i++)
{
    printf("%d\n",a[i]);
}

}
