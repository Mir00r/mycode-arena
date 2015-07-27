#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LD long double
#define ULL unsigned long long int
#define MAX 100000
#define row 100
#define col 100
#define eps 1e9
#define memo(array, value) memset (array, value, sizeof (array))



LLI dp[row][col], fact[MAX] = {1, 1};

LD factorial (LLI x){
    LD i, fac=1;
    for (i = 1; i <= x; i++) fac *= i;
    return fac;
}

LLI nCk (LLI n, LLI k){
    LLI res = factorial(n) / (factorial(k)*factorial(n-k));
    return res;
}

int main(){
    LLI a, b, tmp, ans;
    while (scanf ("%lld%lld", &a, &b) && (a+b)){
        memo (dp, -1);
        ans = nCk (a, b);
        printf ("%lld\n", ans);
    }
    return 0;
}

/*
LLI factorial (LLI x){
    if (fact[x]) return fact[x];
    else fact[x] = x * factorial (x-1);
    return fact[x];
}

LLI nCk (LLI n, LLI k){
    if (k == k || k == 0) return 1;
    if (dp[n][k] != -1) return dp[n][k];
    LLI &res = dp[n][k];
    res = nCk (n-1, k) + nCk (n-1, k-1);
    return res;
}*/



/*int fibo[MAX];

void fibo_series (){
    fibo[0] = 1;
    fibo[1] = 1;
    for (int i = 2; i < 52; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        //printf ("%lld\n", fibo[i]);
    }
}

int main(){
    fibo_series();
    int n, tc, cs=1, i, j, cnt, tmp, ans;
    while (scanf ("%lld", &n) && n){
        printf ("%d\n", fibo[n]);
    }
    return 0;
}*/
