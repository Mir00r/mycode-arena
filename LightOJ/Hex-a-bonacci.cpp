#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 100000

int dp[MAX];

int a, b, c, d, e, f;
int fn(int n){
    //if (dp[n] != -1) return dp[n];
    if( n == 0 ) return a % 10000007;
    if( n == 1 ) return b % 10000007;
    if( n == 2 ) return c % 10000007;
    if( n == 3 ) return d % 10000007;
    if( n == 4 ) return e % 10000007;
    if( n == 5 ) return f % 10000007;

    if (dp[n] != -1) return dp[n];
//    dp[n] = (fn(n-1) + fn (n-2) + fn (n-3) + fn (n-4) + fn (n-5) + fn (n-6)) % 10000007;
//    return dp[n];

    else{
//        dp[n] = ((fn(n-1) % 10000007) + (fn(n-2) % 10000007) + (fn(n-3) % 10000007) + (fn(n-4) % 10000007) +
//                 (fn(n-5) % 10000007) + (fn(n-6) % 10000007));
        dp[n] = (fn(n-1) + fn (n-2) + fn (n-3) + fn (n-4) + fn (n-5) + fn (n-6)) % 10000007;
        return dp[n];
    }
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
   // memset (dp, -1, sizeof (dp));
    while( cases-- ) {
        memset (dp, -1, sizeof (dp));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
