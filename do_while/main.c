// DO WHILE

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
scanf("%d", &num);
do
{
    printf("the positive number is %d \n ",num);
    num=num/2;

} while (num %2== 0);

printf("the non positive number  is %d\n", num);

} */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
scanf("%d", &num);
while(num %2== 0)
    {
    printf("the positive number is %d \n ",num);
    num=num/2;
}
printf("the non positive number  is %d\n", num);

}
