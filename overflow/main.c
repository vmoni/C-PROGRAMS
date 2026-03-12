#include <stdio.h>
#include <stdlib.h>

enum day
{
    sun=5,mon,tue,wed,thu,fri
};
typedef enum day weeks;
typedef int number;

int main()
{
weeks tod,tomm;
int count;

tod=sun;
tomm=mon;
number a=4;
count=sizeof(a);
printf("%d\n",mon);
printf("%d\n",a);
printf("%d",count);
}
