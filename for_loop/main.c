

//TYPE 1
/*#include <stdio.h>

int main()
{
    int i = 0;
    for (i;;)   // Initialization done before; no condition → infinite loop
    {
        printf("%d ", i);
        i++;    // increment manually
        if (i == 10)    // stop after 10 to avoid infinite loop
            break;
    }
    return 0;
}*/
//TYPE 2

/* #include <stdio.h>

int main()
{
    int i = 0, n = 5;

    for (; i < n; )   // no initialization or increment here
    {
        printf("%d ", i);
        i++;    // increment inside manually
    }

    return 0;
} */

//TYPE 3


/* #include <stdio.h>

int main()
{
    int i = 0;

    for (;; i++)   // no initialization, no condition → infinite loop
    {
        printf("%d ", i);
        if (i == 9)   // stop after 10 numbers to avoid infinite output
            break;
    }

    return 0;
}
*/

//TYPE 4

/* #include <stdio.h>

int main()
{
    int i=0;
    for (;;)
    {
        printf("%d", i);
    }
    return 0;
} */


