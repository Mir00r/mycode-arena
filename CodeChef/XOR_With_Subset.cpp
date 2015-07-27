#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long int
#define MAX 100000
#define row 1000
#define col 1000

LLI dp[row][col], arr[MAX], n, k;


//LLI cal_XOR (LLI indx, LLI val){
//    LLI tmp, i, j, maxn = 0;
//
//    if (indx == val) return val;
//    LLI &res = dp[indx][val];
//
//    if (res != -1) return res;
//        printf ("left = %lld   right = %lld\n", indx, val);
//
////    printf ("left = %lld   right = %lld\n", cal_XOR(indx+1, arr[indx] ^ val), cal_XOR(indx+1, val));
//    res = max (cal_XOR(indx+1, arr[indx] ^ val), cal_XOR(indx+1, val));
////    printf ("left = %lld   right = %lld\n", indx, val);
//
//    return res;
//}

/*void subset_print (LLI indx){
    LLI tmp, i, j, maxn = 0;

    if (indx == n) printf ("%lld ", arr[indx]);
    else{
        subset_print(indx+1);
    }
}


int main(){
    LLI tc, i, j, ans;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld %lld", &n, &k);
        for (i = 0; i < n; i++) scanf ("%lld", &arr[i]);
        memset (dp, -1, sizeof (dp));

        subset_print(0);
       // ans = cal_XOR (0, k);
        //printf ("%lld\n", ans);
    }
    return 0;
}*/


int main (){
    int a, b, ans;
    while (scanf ("%d %d", &a, &b) == 2){
        ans = a / b;
        printf ("%d\n", ans);
    }
    return 0;
}
