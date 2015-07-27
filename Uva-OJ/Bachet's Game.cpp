#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 1000005

LLI arr[MAX], n, m;
LLI dp[MAX];

LLI cal (LLI n) {
    LLI i, j, tmp;
    if (n == 0) return 0;
    if (n < 0) return 1;

    LLI & res = dp[n];

    if (res != -1) return res;
    for (i = 0; i < m; i++){
        if (cal (n - arr[i]) == 0){
            return dp[n] = 1;
            return 1;
            //dp[n]
        }
    }
    dp[n] = 0;
    return 0;
}


int main(){
    //puts ("OK");
    LLI i, j, ans;
    while (scanf ("%lld %lld", &n, &m) == 2){
        for (i = 0; i < m; i++) scanf ("%lld", &arr[i]);
        memset (dp, -1, sizeof (dp));
        for (i = 0; i <= n; i+= 1000) // reducing depth of recursion
            ans = cal (i);
         ans = cal (n);

       // printf ("Res = %lld\n", ans);
        if (ans) puts ("Stan wins");
        else puts ("Ollie wins");
    }
    return 0;
}


/*int main(){
    int stone, m, limit[MAX], sum , tmp, ans, i, j;
    while (scanf ("%d %d", &stone, &m) == 2){
        for (i = 0; i < m; i++)
            scanf ("%d", &limit[i]);
        sum = 0;

        for (i = 0; i < m; i++){
            //stone ^= limit[i];
            sum ^= (stone ^ limit[i]);
//            printf ("Ceack = %d\n", stone);
           // printf ("Ceack = %d\n", sum);
        }
        if (ans) puts ("Stan wins");
        else puts ("Ollie wins");
    }

    return 0;
}*/

