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
#define MAX 9999
#define row 100
#define col 100
#define mx_it 100
#define new_line printf ("\n")
#define eps 1e-9

double y_1, y2, x1, a, n, h, k;
    int tc, i, j;
double calculation (double a, double b){
    double root;
    root = sqrt (a+b);
    return root;
}
void Eular(){
    x1 = a; i = 0;
    while(x1 <= n){
        k = calculation(x1, y_1);
        y2 = y_1 + h * k;
        printf("\n\n  x = %.3lf => y%d = %.3lf ", x1, i, y2);
        x1 = x1 + h;
        y_1 = y2; i++;
    }
}
int main(){
    printf ("Enter number of Test Case: ");
    scanf ("%d", &tc);
    while (tc--){
        printf("\nEnter the value of range: ");
        scanf("%lf %lf", &a, &n);
        printf("\nEnter the value of y0: ");
        scanf("%lf", &y_1);
        printf("\nEnter the h: ");
        scanf("%lf", &h);
        Eular();
        printf("\n");
    }
    return 0;
}

/*double x, x0, Y_1, y_0, res, tmp, h, k, sum;
    int tc, cs=1, n, itr, i, j,cnt;
double calculation (double a, double b){
    double root;
    root = sqrt (a+b);
    return root;
}

void Eular(){
    for (i = 1; i <= itr; i++){
        k = h * calculation(x0, y_0);
        Y_1 = y_0 + h*k;
        x0 += h;
        printf ("\tX = %lf\tY_1 = %lf\n", x, Y_1);
    }
}

int main(){
    printf ("Enter Test Case number: ");
    scanf ("%d", &tc);
    new_line;
    while (tc--){
        printf ("Enter the value of x where value of y to be found: ");
        scanf ("%lf", &x);
        new_line;
        printf ("Enter the starting value of x and y: ");
        scanf ("%lf%lf", &x0, &y_0);
        new_line;
        printf ("Enter the max number iteration: ");
        scanf ("%d", &itr);
        printf ("X = %lf\tX0 = %lf\ty_0 = %lf\tn = %d\n", x, x0, y_0, itr);
        h = (x-x0) / 2;
        Eular();
    }
    return 0;
}*/
