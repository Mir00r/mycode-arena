#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define L unsigned int
#define LL unsigned long long int
#define MAX 1000001

int main(){
    ll n, result, tmp;
    while (scanf ("%lld", &n) == 1){
        if (n < 3) break;
        if (n % 2 == 0){
            result = (n * (n - 2) * (2*n - 5)) / 24;
            printf ("%lld\n", result);
        }
        else{
            result = ((n - 1) * (n - 3) * (2*n - 1)) / 24;
            printf ("%lld\n", result);
        }

    }
    return 0;
}
