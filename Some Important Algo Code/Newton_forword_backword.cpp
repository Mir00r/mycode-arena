/*
    Author :- Abdur Razzak
    Date   :- 3/12/13
    Topic name    :- Using Newton Raphson Method for finding root
    Sub :- Numerical Method
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 999
#define row 100
#define col 100
#define maxn_itr 100
#define new_line printf ("\n")
#define eps 1e-9

double x[row], y[row][col], tmp, res, value, h, p, sum, d, f, store;
int n;
void forword (int i, int j){
    store = 1;
    sum = y[1][0];
    // Forword Interval Table
    for (i = 0; i < n; i++){
        for (j = 0; j < n-i; j++)
            y[i][j] = y[i-1][j+1] - y[i-1][j];
        store *= (p - i+1) / i;
        sum += (store * y[i][0]);
    }
    new_line;
    h = x[2] - x[1];
    printf ("h => %.3lf\n", h);
    p = (f - x[1]) / h;
    printf ("p = %.3lf\n", p);
    printf ("The Approximate value is: %.3lf\n", sum);
        // Display forword Interval Table
        printf ("\n******Forword Interval Table******\n");
        for (i = 0; i < n; i++){
            printf ("\t%.3lf", x[i]);
            for (j = 0; j < n-i; j++)
                printf ("\t%.3lf", y[i][j]);
            new_line;
        }
}

void backword (int i, int j){
    // Backword Interval Table
    for (i = 0; i < n; i++)
        for (j = n-1; j > i-1; j--)
            y[j][i] = y[j][i-1] - y[j-1][i-1];

    h = x[2] - x[1];
    printf ("h => %.3lf\n", h);
    p = (f - x[1]) / h;
    printf ("p = %.3lf\n", p);

    // Display Backword Interval Table
    printf ("\n******Backword Interval Table******\n");
        for (i = 1; i < n; i++){
            printf ("\t%.3lf", x[i]);
            for (j = 0; j < i; j++)
                printf ("\t%.3lf", y[i][j]);
            new_line;
        }
}

int main(){
    int tc, cs=1, i, j, k, cnt;
    printf ("Enter Number of Test Case: ");
    scanf ("%d", &tc);
    new_line;
    while (tc--){
        printf ("How many record you will be entered: ");
        scanf ("%d", &n);
        new_line;

        for (i = 0; i < n; i++){
            printf ("Enter value of x %d: ", i);
            scanf ("%lf", &x[i]);
            printf ("Enter value of y %d: ", i);
            scanf ("%lf", &y[i][0]);
        }
        printf ("Enter value that you want to search: ");
        scanf ("%lf", &f);
        forword(i, j);
        backword(i, j);
    }
    return 0;
}
