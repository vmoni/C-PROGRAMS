#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
char a[6]="hellonewword";//198
char b[10]="world";
char *z= strstr(a,b);//200
printf("%ld",(z-a));
/*int res = strcmp(a,b);
if(res==0)
{
  printf("result is %d\n",res);
  printf("they are equal");
}else if(res>0)
{
 printf("result is %d\n",res);
  printf("string a is larger");
}else
{
   printf("result is %d\n",res);
  printf("string a is smaller");
}
printf("result is %d",res);
//printf("%s\n",b);
}*/
//strrev(b);
//printf("%s\n",b);
}
