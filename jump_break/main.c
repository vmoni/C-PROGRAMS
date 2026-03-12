#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0;
for(;i<10;i++)
{
   if(i==3 | i==8)
   {
       continue;
   }
   printf("%d\n",i);
}
printf("%d at this value the loop exited",i);

}

