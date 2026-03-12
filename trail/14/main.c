#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,size,j,count,b[]={2,5,66,7};
    printf("Enter the size of the array");
    scanf("%d",&size);

    for(i=0;i<=size;i++)
    {
      scanf("%d",&a[i]);
    }
    for(j=0;j<=size;j++)
        {
        printf("value is %d\n",a[j]);
        printf("the index is %d and the address is this %d\n",j,&a[j]);
        }
        count = sizeof(b)/sizeof(b[0]);
        printf("%d",count);
    return 0;
}


