/*#include <stdio.h>

int main ()
{
    int n = 0, row=0, col=0, result, sum1, sum2, sum3, sum4, matrix[100][100];
    scanf ("%d", &n);
    while (n != 0)
    {
        //row = col = 0;
        sum1 = sum2 = sum3 = sum4 = result = 0;
        for (row = 1; row <= n; row++){
            for (col = 1; col <= n; col++){
                scanf ("%d", &matrix[row][col]);
            }
        }
        row = 1;
        while (n > 0){
            for (col = row; col < n+1; col++){
                sum1 += matrix[row][col];
                printf ("Sum1 = %d\n\n", sum1);
                //printf ("%4d", matrix[row][col]);
            }
            for (col = row+1; col < n+1; ++col){
                sum2 += matrix[col][n];
                printf ("Sum2 = %d\n\n", sum2);
                //printf ("%4d", matrix[col][n]);
            }
            for (col = n-1; col > row-1; col--){
                sum3 += matrix[n][col];
                printf ("Sum3 = %d\n\n", sum3);
                //printf ("%4d", matrix[n][col]);
            }
            for (col = n-1; col > row; col--){
                sum4 += matrix[col][row];
                printf ("Sum4 = %d\n\n", sum4);
                //printf ("%4d", matrix[col][row]);
            }
            row += 1;
            n -= 1;
            //result += sum1+sum2+sum3+sum4;
        }
        //printf ("Result = %d\n", result);
        scanf ("%d", &n);
    }
    return 0;
}*/


#include <stdio.h>

int main ()
{
    int n, row, col, c = 0, result, sum,  matrix[10][10];

    scanf ("%d", &n);
    while (n != 0)
    {
        for (row = 0; row < n; row++){
            for (col = 0; col < n; col++){
                scanf ("%d", &matrix[row][col]);
            }
        }
        printf ("Case %d:", ++c);
        for (row = 0; row < n/2; row++)
        {
            sum = 0;
            sum += matrix[row][row] + matrix[row][n-1-row] + matrix[n-1-row][row] + matrix[n-1-row][n-1-row];
            for (col = row+1; col < n-1-row; col++)
                sum += matrix[row][col] + matrix[col][row] + matrix[n-1-col][n-1-row] + matrix[n-1-row][n-1-col];
            printf (" %d", sum);
        }
        if (n % 2 != 0)
            printf (" %d", matrix[n/2][n/2]);
    printf ("\n");
    scanf ("%d", &n);
    }
    return 0;
}

