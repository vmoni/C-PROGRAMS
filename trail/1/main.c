#include <stdio.h>
#include <stdlib.h>
int a=4;
int sub_main();
int main()
{
    int b,h,count_length,v ;
    char c[50],e[257];
    printf("the user input is ");
    scanf("%d",&b);
    printf("%d is the user input\n",b);
    count_length=sprintf(c,"hey");
    printf("%d is the total length of words \n",count_length);
    sscanf("hey 4","%s %d",e,&h);
    printf("I have extracted the integer as %d and character or string as %s \n",h,e);
    v=sub_main();
    printf("\n the value outside the loop is %d",v);

    return 0;
}
int sub_main()
{
    a++;
    printf("%d",a);
    return a;

}
