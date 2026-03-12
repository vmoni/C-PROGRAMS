#include <stdio.h>
#include <stdlib.h>

int main()
{
   int value;
   int data[11];
   FILE *f=fopen("nb.bin","ab+");
   if(f==NULL)
   {
     printf("file does not exist");
     exit(1);
   }
   value=99999;
   fwrite(&value,sizeof(int),1,f);
   rewind(f);
   fread(data,sizeof(int),13,f);
   for(int i=0;i<13;i++)
   {
       printf("%d\n",data[i]);
   }
   fclose(f);

}
