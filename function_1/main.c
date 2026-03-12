#include <stdio.h>
#include <stdlib.h>

float greet(float b) //void a() ,void a(int a),int a(),int a(int a)
{
  float a;
  printf("what is the time");
  scanf("%f",&a);
  return (a+b);//a

}

int main()
{
float b,a=1;
b=greet(a);//a
printf("wake me after 1 hour which is at %f",b);
}
