#include <stdio.h>
#include <stdlib.h>

int main()
{
char name[20];
int age,count;
float gpa;
count=sscanf("siva 24 4.15","%s %d %f",name,&age,&gpa);
printf("%s\n",name);
printf("%d\n",count);
printf("%f",gpa);
return 0;
}
