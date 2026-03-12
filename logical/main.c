#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
int temp ;
int pulse ;
scanf("%d",&temp);
scanf("%d",&pulse);
bool original_condition=temp < 38 && pulse < 100,compliment_original_condition;
printf("this the original condition %d\n",original_condition);

if (original_condition) {
    printf("Patient is stable\n");
}
compliment_original_condition=!(original_condition);
printf("this the compliment of the original condition %d",compliment_original_condition);
return 0;
}
