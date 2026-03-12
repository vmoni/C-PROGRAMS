#include <stdio.h>
#include <stdlib.h>

int main(void)
{
FILE *f;//file pointer
char v[100];
f=fopen("abc.txt","a+");//append mode
if(f==NULL)
{
    printf("file does not exist");
    exit(1);//exist the entire program
}
//fseek(f,3,SEEK_SET);
fputs(" is fine",f);
rewind(f);
while(fgets(v,sizeof(v),f)!=NULL)
{
    puts(v);
}
fclose(f);



}
