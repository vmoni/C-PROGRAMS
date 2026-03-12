#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[4][2]={{1,2},{3,4},{7,8},{0,1}};
 int rows,columns,i,j,min,max;
 rows = sizeof(a)/sizeof((a[0]));
 columns=sizeof(a[0])/sizeof(a[0][0]);
 min=a[0][0],max=a[0][0];
 for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(min>a[i][j])
            {
               min= a[i][j];
            }
            if(max<a[i][j])
            {
               max= a[i][j];
            }

            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
    printf("\n");
    printf("max is %d\n min is %d\n",max,min);


}
