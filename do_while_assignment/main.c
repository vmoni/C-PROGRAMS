#include <stdio.h>
#include <stdlib.h>


int main()
{
    int choice;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Add\n2. Subtract\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: printf("You selected Add\n"); break;
            case 2: printf("You selected Subtract\n"); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 3);   // repeat until user chooses Exit

    return 0;
}
