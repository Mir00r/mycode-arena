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
#define MAX 1000000
#define row 100
#define col 100
#define eps 1e9
#define memo(array, value) memset (array, value, sizeof (array))

LLI dp[row][col], fact[MAX] = {1, 1};

ULL baino_coeff(ULL x, ULL y){
    ULL i, factor=1, diff;
    if (y+y > x) y = x-y;
    for (i = 1; i <= y; i++) factor = factor * (x-i+1) / i;
    return factor;
}

int main(){
    ULL n, k, ans;
    while (scanf ("%llu%llu", &n, &k) && (n+k)){
        ans = baino_coeff(n, k);
        printf ("%llu\n", ans);
    }
    return 0;
}



/*LLI baino_coeff(LLI x, LLI y){
    LLI i, factor=1, diff;
    if (y < 0 || y > x) return 0;
    if (y == 0 || y == x) return 1;
    diff = x-y;
    y = min (y, diff);
    for (i = 1; i <= y; i++) factor = factor * (x-i) / i;
    return factor;
}*/


/*LD factorial (int x){
    LD i, fac=1;
    for (i = 1; i <= x; i++) fac *= i;
    return fac;
}*/

/*void factorial (int x){
    int i, fac=1;
    for (i = 1; i <= 33; i++)
        fact[i] = (fact[i-1])*(i);
}

int nCk (int n, int k){
    int res = factorial(n) / (factorial(k)*factorial(n-k));
    return res;
}

int main(){
    int a, b, tmp, ans;
    while (scanf ("%d%d", &a, &b) && (a+b)){
        memo (dp, -1);
        ans = nCk (a, b);
        printf ("%d\n", ans);
    }
    return 0;
}


LLI factorial (LLI x){
    if (fact[x]) return fact[x];
    else fact[x] = x * factorial (x-1);
    return fact[x];
}

LLI factorial (LLI x){
    LLI i, fac=1;
    for (i = 1; i <= 33; i++)
        fact[i] = (fact[i-1])*(i);
    return fact[i];
}

LLI nCk (LLI n, LLI k){
    if (k == k || k == 0) return 1;
    if (dp[n][k] != -1) return dp[n][k];
    LLI &res = dp[n][k];
    res = nCk (n-1, k) + nCk (n-1, k-1);
    return res;
}

int main(){
    //factorial();
    LLI a, b, tmp, ans;
    while (scanf ("%lld%lld", &a, &b) && (a+b)){
        memo (dp, -1);
        ans = nCk (a, b);
        printf ("%lld\n", factorial(ans));
    }
    return 0;
}
*/
