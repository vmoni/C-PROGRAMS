#include <stdio.h>
#include <string.h>

char* display(char a[],char b[])
{
    int i=0;
    while(a[i]!=  '\0' )
    {
        printf("%c",a[i]);
        i++;
    }
    printf("\n");
    i=0;
    while(b[i]!='\0')
    {
        printf("%c",b[i]);
        i++;
    }
    const char* s="hi";
    return s;
}


int main()
{
char a[]="hello";
char b[]="word";
char *p;
p=display(a,b);
printf("\n%s",p);
}

