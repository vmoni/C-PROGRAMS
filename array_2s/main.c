#include <stdio.h>
#include <stdlib.h>
int display(int m[],int size)//call by reference
{
int i=0,sum=0;

for(;i<size;)
{
    printf("%d \n",*(m+i));//dereferencing
    //printf("%p \n",(m+i));
    i++;
    sum +=*(m+1);
}
return sum;
}
int main()
{
int mark[]={55,65,75,56,78};
printf("%zu this is the size \n",sizeof(mark));
int size = sizeof(mark)/sizeof(mark[0]);
printf("% d this is the size of the mark \n",size);


int sum=display(mark,size);
printf("this is the sum %d",sum);
}


