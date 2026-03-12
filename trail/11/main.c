/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j;
    printf("enter the no of lines");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
 */
 #include <stdio.h>
 #include<stdlib.h>

 int main()
 {
     int input,count=0;
     scanf("%d",&input);
     if(input==1){
        printf("total digit is 1");
     }
     else
    {

     while(input!=0)
     {
         input=input/10;
         count++;
     }
     printf("total digit is %d",count);
      }
     return 0;
 }
