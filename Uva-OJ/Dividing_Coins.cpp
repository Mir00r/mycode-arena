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
#define MAX 10005
#define row 10005
#define col 50
#define memo(array, value) memset (array, value, sizeof (array))

int dp[row][col], cost[MAX], coin, tot, n;

int div_coin(int i, int v){
    int res, x=0, y=0;
    if (i == n){
        res = abs(v - (tot - v));
        return res;
    }
    int &ret = dp[i][v];
    if (dp[i][v] != -1)return ret;
    x = div_coin(i+1, v+cost[i]);  // coin nia check dilam
    y = div_coin(i+1, v);          // coin ta nia check dilam
    ret = min (x, y);
    return ret;
}

int main(){
    int tc, cs=1, i, j, ans, cnt, tmp;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        tot = cnt = ans = tmp = 0;
        memo (dp, -1);
        for (i = 0; i < n; i++){
            scanf ("%d", &cost[i]);
            tot += cost[i];
            //printf ("tot = %d\n", tot);
        }
        //sort (cost, cost+n);
        //ans = abs (cost[n-1] - (tot-cost[n-1]));
        ans = div_coin(0, 0);
        printf ("%d\n", ans);
    }
    return 0;
}
