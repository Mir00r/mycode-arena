#include <stdio.h>

int main()
{
    int size, row, col, result, matrix[100][100], t;
    scanf ("%d", &t);
    while(t--)
    {
        //size = row = col = 0;
        scanf ("%d", &size);
        for (row = 1; row <= size; row++){
            for (col = 1; col <= size; col++){
                scanf ("%d", &matrix[row][col]);
            }
        }
        int sum = 0;
        row = 1;
        while (size > 0){
            for (col = row; col < size+1; col++){
                //sum1 += matrix[row][col];
                //printf ("Sum1 = %d\n", sum1);
                printf ("%4d", matrix[row][col]);
            }
            for (col = row+1; col < size+1; ++col){
                printf ("%4d", matrix[col][size]);
            }
            for (col = size-1; col > row-1; col--){
                printf ("%4d", matrix[size][col]);
            }
            for (col = size-1; col > row; col--){
                printf ("%4d", matrix[col][row]);
            }
            row += 1;
            size -= 1;
            sum += matrix[row][col] + matrix[col][size] + matrix[size][col] + matrix[col][row];
        }
        printf ("%d\n", sum);
    }

    return 0;
}
