#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 1000005

LLI piece[MAX], dp[MAX], k;

LLI cal_nim (LLI n){
    LLI i=0, j, tmp;

    if (n == 1) return 1;
    LLI &res = dp[n];
    if (res != -1) return res;

    if (cal_nim(n - piece[i] == 0)){
        dp[n] = 1;
        i++;
        return 1;
    }

    dp[n] = 0;
    return 0;
}



int main(){
    LLI tc, cs=1, i, ans, tmp, cnt, check, nim;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld", &k);
        for (i = 0; i < 2*k; i++) scanf ("%lld", &piece[i]);
        tmp = cnt = nim = 0;
        memset (dp, -1, sizeof (dp));
//        for (i = 0; i < 2*k; i++){
//            nim ^= piece[i] - 1;
//        }
//
//        printf ("VAl = %lld\n", nim);

        if (ans) puts ("Alice");
        else puts ("Bob");

    }
    return 0;
}

