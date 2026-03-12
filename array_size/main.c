#include <stdio.h>
int main() {
    int arr[3][4]; // 3 rows, 4 columns
    for(int i=0;i<3;i++)

    int total_size = sizeof(arr);
    int row_size   = sizeof(arr[0]);       // size of one row
    int element_size = sizeof(arr[0][0]);  // size of one element

    printf("total_size : %d\n",total_size);
    printf("row_size : %d\n",row_size);
    printf("element_size : %d\n",element_size);

    int rows = total_size / row_size;
    int cols = row_size / element_size;

    printf("2D Array Rows = %d, Columns = %d\n", rows, cols);
}
