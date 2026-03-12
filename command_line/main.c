#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
 printf("name is %s",argv[1]);
 if(argc<2)
 {
     printf("few arguments are passed\n");
 }else
 {
    printf("good arguments are passed\n");
 }
 return 0;
}
