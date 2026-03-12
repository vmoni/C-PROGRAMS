//Pointers Aliasing (NO restrict)
/*#include <stdio.h>

void alias_demo(int *p, int *q, int *r) {
    printf("Inside alias_demo:\n");
    printf("Address of p: %p\n", (void*)p);
    printf("Address of q: %p\n", (void*)q);
    printf("Address of r: %p\n", (void*)r);

    *p += 10;   // If p, q, r overlap → ALL affected
    *q += 20;
    *r += 30;
}

int main() {
    int x = 100;

    // ALIASING: All pointers point to SAME variable x
    alias_demo(&x, &x, &x);

    printf("\nFinal value of x: %d\n", x);
    return 0;
}*/
//NO aliasing (Separate pointers)
/*#include <stdio.h>

void noalias_demo(int *p, int *q, int *r) {
    printf("Inside noalias_demo:\n");
    printf("Address of p: %p\n", (void*)p);
    printf("Address of q: %p\n", (void*)q);
    printf("Address of r: %p\n", (void*)r);

    *p += 10;
    *q += 20;
    *r += 30;
}

int main() {
    int a = 100, b = 200, c = 300;

    // NO ALIASING: pointers point to different variables
    noalias_demo(&a, &b, &c);

    printf("\nFinal values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}*/

//Using restrict (fast version)
#include <stdio.h>

void fast_demo(int * restrict p,
               int * restrict q,
               int * restrict r) {
    printf("Inside fast_demo:\n");
    printf("p: %p\n", (void*)p);
    printf("q: %p\n", (void*)q);
    printf("r: %p\n", (void*)r);

    *p += 10;   // compiler knows these do NOT overlap
    *q += 20;
    *r += 30;
}

int main() {
    int a = 100, b = 200, c = 300;

    fast_demo(&a, &b, &c);

    printf("\nFinal values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
