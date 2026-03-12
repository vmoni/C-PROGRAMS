#include <stdio.h>
#include <stdlib.h>
struct info{
    int rollno;
    char name[30];
    float height;
};


int main()
{
struct info s[3];
struct info *p;
p=s;//base address of s

for(int i=0;i<3;i++)
{
printf("enter the details");
scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].height);
}
for(int i=0;i<3;i++)
{
printf("roll no : %d \n name:%s \n height: %f \n",p->rollno,p->name,p->height);
p++;
}


}
