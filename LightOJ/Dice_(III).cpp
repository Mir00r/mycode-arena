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
#define row 205
#define col 205
#define MAX 100006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 1000000007

double dp[MAX], arr[MAX];
int n;
bool vis[MAX];

double cal (int x){
    if (x > n) return 0;
    //if (x == n) return x;
    if (vis[x]) return dp[x];

    vis[x] = 1;

    double res;

    if(x == n)
        res =  1 + cal(x + 1);
    else
        res = ((double)n / (double)(n - x)) +  cal(x+1);

    return res;

    return dp[x] = res;
}

int main(){
    int tc, cs=1, i;
    double ans;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        memset(vis, 0, sizeof (vis));

        ans = cal (1);
        printf("Case %d: %lf\n", cs++, ans);
    }
    return 0;
}
