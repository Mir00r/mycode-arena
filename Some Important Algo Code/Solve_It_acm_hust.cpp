#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define  ll long long int
#define MAX 99999
#define eps 1e-11
int p, q, r, s, t, u;

double func(double x){
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}
double find_bisection(){
    double low = 0.0, high = 1.0, mid;
    for(int i = 0; i <= 100; i++){
        mid = (low + high) / 2.0;
        //printf ("Mid = %lf\n", mid);
        if (func(low) * func(mid) <= 0.0) high = mid;
        else low = mid;
    }
    return (low + high) / 2.0;
}
int main(){
    while (scanf ("%d%d%d%d%d%d", &p, &q, &r, &s, &t, &u) != EOF){
        if (p == 0 && q == 0 && r == 0 && s == 0 && t == 0 && u == 0)
            printf ("0.0000\n");
        else if (func(0.0) * func(1.0) > 0.0) printf ("No solution\n");
        else
            printf("%.4lf\n", find_bisection());
    }
    return 0;
}
