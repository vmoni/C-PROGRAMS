#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = NULL;
    char str[30];

    /* Open file in append mode */
    fp = fopen("abc.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Enter the content you want to append: ");
    fgets(str, sizeof(str), stdin);

    /* Write to file */
    fputs(str, fp);

    /* Close file */
    fclose(fp);

    printf("Data successfully appended\n");

    return 0;
}
