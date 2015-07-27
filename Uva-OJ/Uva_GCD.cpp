#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

#define ll long long


long long int gcd (int i, int j){
    if (i % j == 0)
        return j;
    else
        return gcd (j, i%j);
}
int main (){
    long long int m, n, i, j, G;
    scanf ("%lld", &n);
    while (n != 0){
        G = 0;
        for (i = 1; i < n; i++)
            for (j = i+1; j <= n; j++){
                G += gcd(i,j);
            }
        printf ("%lld\n", G);
        scanf ("%lld", &n);
    }
    return 0;
}

// another way to find GCD by include <algorithm>

/*
int main (){
    int tCase, t = 1;
    ll x1, y1, y2, x2;
    scanf ("%d", &tCase);
    while (tCase--){
        scanf ("%lld%lld%lld%lld", &x1, &y1, &x2, &y2);
        printf ("Case %d: %lld\n", t ++, (ll)__gcd (abs (y2-y1), abs (x2-x1))+1);
    }
    return 0;
}
*/
