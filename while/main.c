#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
scanf("%d",&num);
while(num%2==0)
{
    printf("%d is a even number\n",num);
    printf("i am inside the loop\n");
    num=num/2;
}
printf("%d is a not even number",num);

}
