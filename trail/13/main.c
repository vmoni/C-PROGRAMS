#include <stdio.h>
#include <stdlib.h>
void rectangle();
void square();
void circle();
int squared(int a);

int main()
{
    int a;
    printf("What calculation you are performing today \n press 1 for area of rectangle \n press 2 for area of square \n press 3 for area of circle\n");
    scanf("%d",&a);
    switch(a){
    case 1:
        rectangle();
        break;
    case 2 :
        square();
        break;
    case 3 :
        circle();
        break;
    default:
        printf("invalid input\n");
        break;
    }
    return 0;
}

void rectangle()
{
    float a,b,c;
    printf("enter length and breadth\n");
    scanf("%f  %f",&a,&b);
    c=a*b;
    printf("%f",c);
 }
void square()
{
    float a,c;
    printf("enter the length");
    scanf("%f",&a);
    c=a*a;
    printf("%f",c);
 }
void circle()
{
    float a,c;
    printf("enter the radius");
    scanf("%f",&a);
    c = squared(a)*3.14;
    printf("%f",c);
 }
int squared(int a)
{
    return a*a;
}
