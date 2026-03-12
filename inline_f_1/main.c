#include <stdio.h>

inline void modify(char str1[], char str2[]);

int main()
{
    char str1[] = "jenny";
    char str2[] = "khatri";

    modify(str1, str2);

    return 0;
}

void modify(char str1[], char str2[])
{
    int i, l = 0;

    for(i = 0; str1[i] != '\0'; i++)
    {
        l = l + 1;
    }

    str2[1] = 'z';  // modifying string

    printf("Length of string 1 is: %d\n", l);
    printf("Both the strings are: %s %s\n", str1, str2);
}
