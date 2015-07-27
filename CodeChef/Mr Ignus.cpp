#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long int
#define MAX 100005
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)


LLI n, coin[MAX], memo[MAX];

LLI cal_coin (LLI c){
    int i;
    memo[0] = coin[0];
    memo[1] = max (coin[0], coin[1]);

    for (i = 1; i < c; i++){
        memo[i] = max (memo[i-2] + coin[i], memo[i-1]);
    }

    return memo[c-1];
}


int main(){
    int tc, i, j, cnt;
    LLI ans, sum;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%lld", &n);
        for (i = 0; i < n; i++)
            scanf ("%lld", &coin[i]);

//        sum = ans = 0;
//        sort (coin, coin+n);
//
//        for (i = n-1; i >= 0; i -= 2){
//            sum += coin[i];
//        }


        printf ("%lld\n", cal_coin(n));
    }
    return 0;
}
