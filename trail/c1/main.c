#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[500],t[100];
    fgets(s,sizeof(s),stdin);
    printf("Hello, World!\n");
    fputs(s,stdout);
    scanf("%[^\n]*c",&t)
    printf("%s",t);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
