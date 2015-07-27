#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 1000010

int tc;
l i, j, n, res, base;
double f[MAX];

int main(){
    scanf("%d", &tc);
    for(i = 1; i <= 1000000; i++)
        f[i] = log10(i) + f[i-1];
    //printf ("%ld\n", f[i]);
    for(j = 1; j <= tc; j++){
        scanf("%ld%ld", &n, &base);
        res = (f[n] / (f[base] - f[base-1])) + 1;
        printf("Case %d: %ld\n", j, res);
    }
    return 0;
}

/*int main(){
    for(i = 1; i <= 100; i++){
        f[i] = log10(i) + f[i-1];
        printf ("%ld\n", f[i]);
    }
    /*while (scanf ("%d", &n) == 1){
        printf ("%ld\n", log10(n));
    }
    return 0;
}*/


