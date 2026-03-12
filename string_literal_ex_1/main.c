#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
  char s1[50]="hello";
  char s2[50]="zello";
  char s3[50];
  char s4[50]="la";
  //length
  printf("length of s1 is %d \n",strlen(s1));
  //copy
  strncpy(s3,s1,3);
  printf("copied string is %s\n",s3 );
  //concat
  strncat(s3,s1,3);
 printf("concat string is %s\n",s3 );
 //compare
 int d=strcmp(s1,s2);
 if(d==0)
 {
     printf("Equal\n");
 }else if(d>0)
 {
    printf("s1 has ASCII value high\n");
 }else if(d<0)
 {
    printf("s2 has ASCII value high\n");
 }

 //search
 char *f=strstr(s1,s4);
 if(f != NULL)
 {
     printf("the string %s is found in string %s at the index %d\n",s4,s1,(f-s1));
 }else{
 printf("not found\n");
 }
}
