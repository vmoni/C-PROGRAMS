/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    printf("%d\t%d\n",a+b,a-b);
    printf("%1f\t%1f",c+d,c-d);
    return 0;
}*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d);


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
 int max;
 max=a;
 if(b>max) max=b;
 if(c>max) max=c;
 if (d>max) max=d;
 return max;

}
