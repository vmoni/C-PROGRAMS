#include <stdio.h>
#include <stdlib.h>

void display(int b)
{
    printf("%d is the squared value",b);

}
int square(int a)
{
    int b=a*a;
    return b;

}
void operation()
{
    int n,b;
    printf("enter the value");
    scanf("%d",&n);
    b=square(n);
    display(b);
}
int main()
{
operation();
}
