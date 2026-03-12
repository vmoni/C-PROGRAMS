#include <stdio.h>

struct pet {
    char name[20];
    int age;
};

void showAll(struct pet p[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%s - %d years\n", p[i].name, p[i].age);
}

int main()
{
    struct pet pets[3] = {
        {"Dog", 5},
        {"Cat", 3},
        {"Parrot", 2}
    };

    showAll(pets, 3); // passing array of structure
}
