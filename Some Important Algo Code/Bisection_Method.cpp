/*
    Author :- Abdur Razzak
    ID :- 113-15-1565
    Sec :- A
    Topic Name :- Bisection Method
    Date :- 2/12/13
    Sub :- Numerical Method
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define MAX 99999
#define eps 1e-11

int i, itr;
double n, a, b, mid, equ, minx=-1;
double equation(double x){
    return pow (x, 3) + 3*x - 5;
}
void find_bisection(){
    for(i = 1; i <= itr; i++){
        mid = (a + b) / 2.0;
        equ = equation(mid);
        if (minx == mid) break;
        if (equ >= 0){
             printf ("%d\t%.3lf\t%.3lf\t%.3lf\t+\n", i, a, b, mid);
             b = mid;
        }else{
            printf ("%d\t%.3lf\t%.3lf\t%.3lf\t-\n", i, a, b, mid);
            a = mid;
        }
        minx = mid;
    }
}
int main(){
    int tc;
    printf ("Enter number Test Case: ");
    scanf ("%d", &tc);
    while (tc--){
        printf ("Enter value of a: ");
        scanf ("%lf", &a);
        printf ("Enter value of b: ");
        scanf ("%lf", &b);
        printf ("Enter number of iteration: ");
        scanf ("%d", &itr);
        printf ("\nn\ta\tb\tmid\tSign of f(x)\n");
        printf ("\n---------------------------------------------\n");
        find_bisection();
    }
    return 0;
}
