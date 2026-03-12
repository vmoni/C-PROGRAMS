#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("the three numbers are as follows\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)//A IS GREATER THAN B
    {
        if(a>c)//A IS GREATER THAN C
        {

            printf("a is greatest number");
        }if(b>a)
        {
          printf("b is greatest number");

        }
        else
            {
            printf("c is greatest number");
        }
    }
    else if(c>b)
    {
       printf("c is greatest number");
    }
    else{
         printf("b is greatest number");
    }
    return 0;
}
