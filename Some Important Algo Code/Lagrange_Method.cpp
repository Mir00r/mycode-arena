/*
    Author :- Abdur Razzak
    Topic Name    :- Lagrange Method
    Data    :- 4/12/13
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
#define MAX 1000
#define row 100
#define col 100
#define new_line printf ("\n")
#define eps 1e-9

double n, x[row], y[row], store, tmp, multi, sum, value;

void lagrange(){
    //multi = 1;
    sum = 0;
    int i, j;
    for (i = 0; i < n; i++){
        multi = 1;
        for (j = 0; j < n; j++){
            if (j != i)
                multi *= (value - x[j]) / (x[i] - x[j]);
        }
        sum += multi*y[i];
    }
    printf ("The Approximate Value of y(x) is %.3lf\n", sum);
}

int main(){
    int tc, cs=1, i, j, k, cnt;
    printf ("Enter Test Case: ");
    scanf ("%d", &tc);
    new_line;
    while (tc--){
        printf ("Enter number of sample Point: ");
        scanf ("%lf", &n);
        new_line;
        for (i = 0; i < n; i++){
            printf ("Enter the value of x%d: ", i);
            scanf ("%lf", &x[i]);
            printf ("Enter the value of y%d: ", i);
            scanf ("%lf", &y[i]);
        }
        new_line;
        printf ("Enter value of X that you want to calculate: ");
        scanf ("%lf", &value);
        lagrange();
    }
    return 0;
}
