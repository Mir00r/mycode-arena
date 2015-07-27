/*
    Author :- Abdur Razzak
    Date   :- 3/12/13
    Topic name    :- Using Newton Raphson Method for finding root
    Equation :- 4x = cos(x)
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
#define MAX 99999
#define MAX_itr 100
#define eps 1e-9

double xn, h, equ, der_equ, tmp;
int tc, cs=1, cnt, res, i, j, max_itr;

double fun(double x){
    return (x*x*x*x - x - 10);
}

double derivitive_fun(double x){
    return (4*x*x*x - 1);
}

void Newton_Raphson(double xn, int max_itr){
     for (i = 1; i <= max_itr; i++){
        equ = fun (xn);
        der_equ = derivitive_fun(xn);
        h = - (fun(equ) / derivitive_fun(der_equ));
        tmp = h + xn;
        printf("%d\t%.3lf\t%.3lf\t%.3lf\t%.3lf\t%.3lf\n", i, xn, equ, der_equ, h, tmp);
        xn = tmp;
     }
}

int main(){
    printf ("Enter Test Case: ");
    scanf ("%d", &tc);
    while (tc--){
        printf ("Enter value of Xn: ");
        scanf ("%lf", &xn);
        printf ("Enter number of maximum iteration: ");
        scanf ("%d", &max_itr);
        printf("n\tXn\tf(x)\tf'(x)\t h\tXn+1 = Xn+h\n");
        printf("---------------------------------------------------\n");
        Newton_Raphson(xn, max_itr);
    }
    return 0;
}





/*double fun(double x){
    return (x*x*x*x - x - 10);   //Main function x^4 - 10
}

double derivitive_fun(double x){
    return (4*x*x*x - 1);          //Differentiating function f(x)
}

void Newton_Raphson(double tolar, int max_itr, double str_value){
     int i;
     double store;
     for (i = 0; i < max_itr; i++){
        store = str_value - (fun(str_value)) / derivitive_fun(str_value);    // Newton Raphson method step
        printf ("Reach to cover after %d iteration : x = %lf\n", i, store);
        if (fabs(store - str_value) < tolar) break; // Check for  coverage and quit if done
        str_value = store;
     }
}

int main(){
    double tolar, str_value;
    int tc, cs=1, cnt, res, max_itr;
    printf ("Enter Test Case: ");
    scanf ("%d", &tc);
    while (tc--){
        printf ("Enter number of tolarence: ");
        scanf ("%lf", &tolar);
        printf ("Enter number of maximum iteration: ");
        scanf ("%d", &max_itr);
        printf ("Enter first value: ");
        scanf ("%lf", &str_value);
        Newton_Raphson(tolar, max_itr, str_value);
    }
    return 0;
}
*/


/*int main(){
    int tc, cs=1, cnt, i, j, res;
    double dydx, tolar, str_value, fun, tmp, store_value;
    printf (".......Newton Raphson Method.......\n\n");
    printf ("Enter number of test case: ");
    scanf ("%d", &tc);
    while (tc--){
        printf ("Enter Tolarence Value: ");
        scanf ("%lf", &tolar);
        printf ("Enter Starting Value: ");
        scanf ("%lf", &str_value);

        // Starting Iteration
        for (i = 0; i < MAX_itr; i++){
            fun = 4*str_value - cos (str_value);  // Evaluate The funtion and derivative
            dydx = 4 + sin (str_value);
            tmp = str_value - (fun / dydx);     // Newton Raphson method step
            store_value = abs(tmp - str_value);
            if (store_value < tolar)    // Check for  coverage and quit if done
                printf ("The Approximate root is %lf within tolarance %lf", tmp, tolar);
        }
        printf ("Reach to cover after %d iteration", MAX_itr);
    }
    return 0;
}
*/
