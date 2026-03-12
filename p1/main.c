#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count1,count2;
    char a[100],Name[20]="Hari";
    int age=24;

    count1=printf("Hello world\n");
    printf("the count is %d\n",count1);


    count2=sprintf(a,"hello Name : %s Age : %d \n",Name,age);//will store the data as string


    printf("%s",a);
    printf("the count is %d\n",count2);





    return 0;
}

