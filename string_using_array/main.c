#include <stdio.h>
#include <stdlib.h>

int main()
{
char a[4];
printf("enter the name\n");
fgets(a,sizeof(a),stdin);
int b=atoi(a)*500;
printf("%d\n",b);
printf("entered name is \n");
puts(a);
}
