#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,reversed=0,remainder,ab;
scanf("%d",&n);
ab=n;
while(n!=0)
{
remainder = n % 10 ;
reversed = reversed * 10 + remainder;
n=n/10;
}

if(ab==reversed)
    {
    printf("It is a palindrome \n");
}
else
    {
    printf("It is not a palindrome \n");
}
return 0;

}
