
/*
//When the End Condition Is Not Known Beforehand
#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
printf("Enter numbers (0 to stop): ");
scanf("%d", &num);

while (num != 0)  // You don't know when user will enter 0
{
    printf("You entered: %d\n", num);
    scanf("%d", &num);
}

}
*/

//Condition change during runtime or continue untill something happens
#include <stdio.h>

int main()
{
    int temperature;

    printf("Enter current temperature: ");
    scanf("%d", &temperature);

    while (temperature < 100)   // continue until temperature reaches 100°C
    {
        printf("Current temperature: %d°C\n", temperature);

        printf("Enter new temperature reading: ");
        scanf("%d", &temperature);   // get updated reading each time
    }

    printf("Temperature reached or exceeded safe limit (%d°C)\n", temperature);

    return 0;
}
