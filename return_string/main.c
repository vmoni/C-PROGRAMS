#include <stdio.h>
#include <stdlib.h>
char *display()
{
    char *a="hi";
    return a;

}
int main()
{
const char *s;
s=display();
printf("the funstion says %s",s);
}
