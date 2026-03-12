#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[2][2][3]={{{1,2,3},{4,5,6}},{{1,2,3},{4,5,6}}};
int c =((sizeof(a)/sizeof(a[0][0][0])))/2;
printf("%d is the size of the array\n",c);
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
            for(int k=0;k<3;k++)
            {
                printf("%d ",a[i][j][k]);
            }

             printf("\n");

    }
    printf("\n");
}
 printf("\n");
}
