#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,k;
    int a[3][2][2]={{{2,2},{3,3}},{{4,4},{5,5}}};


    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                a[2][i][j] += a[0][i][k] * a[1][k][j];
            }
        }
    }


    printf("Result Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", a[2][i][j]);
        }
        printf("\n");
    }

    return 0;
}
