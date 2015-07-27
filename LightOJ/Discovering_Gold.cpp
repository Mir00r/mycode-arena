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
#define MAX 1006
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

double cal (int indx){
    //double proba;
    int i;

    if (indx > n-1) return 0;
    if (indx == n-1) return arr[indx];
    if (vis[indx]) return dp[indx];

    vis[indx] = 1;

   // double &res = dp[indx];
    //if (res != -1) res;
    //res = 0.0;
    //proba = 1/6;

    if ((n - indx)-1 < 6){
        double res = arr[indx];
        //res = arr[indx];

        double proba = n - indx - 1;
        proba = (double)1.0 / proba;

        for (i = indx+1; i <= n; i++){
            res += cal (i) * proba;
        }

        return dp[indx] = res;
    }

    double res = arr[indx];
    double pro = (double) 1.0 / (double) 6.0;

    for (i = indx+1; i <= indx+6; i++)
        res += cal (i) * pro;

    return dp[indx] = res;
}

int main(){
    int tc, cs=1, i;
    double ans;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++) scanf ("%lf", &arr[i]);
        //memset (dp, -1,sizeof (dp));

        memset (vis, 0, sizeof (vis));

        ans = cal (0);
        printf ("Case %d: %lf\n", cs++, ans);
    }
    return 0;
}
