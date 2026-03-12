#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,count,m1,m2;
 char b,s1[50],s2[50];
 bool a=0
 count=scanf("%d %c",&a,&b);
 printf("the successfully scaneed input is %d\n",count);
 sscanf(" science 86 social 75","%s %d %s %d\n",s1,&m1,s2,&m2);
 printf("the subjects are %s %s\n",s1,s2);
 printf("the marks are %d %d\n",m1,m2);
}
