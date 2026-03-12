// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char gender;
    int mark[10];
    int sum = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         scanf("%d ",&mark[i]);
    }
    scanf("%c", &gender);
    if(gender == 'b'){
       sum = mark[0] + mark[2];
    }
    else if(gender == 'g' ){
        sum = mark[1] + mark[3];
    }
      printf("sum is %d\n",sum);
      //printf("%d",mark[5]);
    return 0;
}
