#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* int main()
{
    char a[100];
    int len,i,j,palindrome=1;
    gets(a);
    j= strlen(a)-1;
    for(int i=0; i<j;i++,j--)
    {
       if (a[i]!=a[j])
       {
          palindrome=0;
          break;
       }
    }
    if(palindrome)
    {
        puts("palindrome");
    }
    else
    {
         puts("not a palindrome");
    }
    puts(a);
    return 0;

} */

int main()
{
    char a[100],b[100];
    int i;
    gets(a);
    strcpy(b,a);
    strrev(a);
    i=strcmp(a,b);
    if(i==0) puts("palindrome");
    else puts("not a palindrome");
    return 0;

}
