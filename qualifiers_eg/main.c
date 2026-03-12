#include <stdio.h>

int main() {
    // Case 1: const
    const int temp1;
    printf("Enter a value for const variable x: ");
    scanf("%d", &temp1);
    //const int x = temp1;   // Initialization allowed
    //x = 50;  //❌ Error: cannot modify

    // Case 2: volatile
    volatile int y;
    printf("Enter a value for volatile variable y: ");
    scanf("%d", &y);
    y=05;      // ✔ Allowed

    // Case 3: const volatile
    int temp2;
    printf("Enter a value for const volatile variable z: ");
    scanf("%d", &temp2);
    const volatile int z = temp2; // Initialization allowed
    //z = 100; //❌ Error: cannot modify later

    printf("\n--- Output ---\n");
    printf("x = %d (const)\n", temp1);
    printf("y = %d (volatile)\n", y);
    printf("z = %d (const volatile)\n", z);

    return 0;
}
