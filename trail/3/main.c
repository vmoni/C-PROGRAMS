#include <stdio.h>

// enum declaration
enum Jam { kissan , amul, lion, herses };

int main() {
    enum Jam fav;
    printf("Enter your favourite (0=kissan, 1=amul, 2=lion, 3=herses):");
    scanf("%d",&fav);
    char* jamNames[] = { "kissan", "amul", "lion", "herses" };
    printf("My favorite is %d\n", fav);// only give the poistion of the string in thr array
    printf("My favorite is %s\n", jamNames[fav]);

    return 0;
}
