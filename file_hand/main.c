#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *f;
char s[100];
int c;
f=fopen("abc.txt","a+");
if(f==NULL)
{
    printf("File doesnt exit");
    exit(1);
}


fputs("happy",f);
rewind(f);

while((c=(fgetc(f)))!=EOF)
      {
        printf("%c",c);
      }
      fclose(f);
}
