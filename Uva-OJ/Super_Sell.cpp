#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define row 1005
#define col 35
#define MAX 100000
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007


int dp[row][col], cost[MAX], weight[MAX];
int n, capacity, g;

int knapsack(int i, int w){
    int profit_1 = 0, profit_2 = 0;
    int &ret = dp[i][w];

    if (i == n) return 0;
    if (dp[i][w] != -1) return ret;
    ret = 0;

    if (w+weight[i] <= capacity)
        profit_1 = cost[i] + knapsack(i+1, w+weight[i]);
    //else profit_1 =0;

    profit_2 = knapsack(i+1, w);

    ret = max (profit_1, profit_2);
    return ret;
}

int main(){
    int tc, cs=1, i, j, cnt, ans, tmp;
    scanf ("%d", &tc);

    while (tc--){
       // memo (dp, -1);
        ans  = 0;
        scanf ("%d", &n);
        for (i = 0; i < n; i++)
            scanf ("%d %d", &cost[i], &weight[i]);

        scanf ("%d", &g);

        for (i = 0; i < g; i++){
            memo (dp, -1);

            scanf ("%d", &capacity);
            ans += knapsack(0, 0);
        }
        printf ("%d\n", ans);
    }
    return 0;
}
