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
#define MAX 105
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define mod 1000003


LLI ncr(LLI n, LLI r);
LLI dp[MAX][MAX];

int main(){
    LLI n, r;
    int tc, cs=1;
    scanf ("%d", &tc);
    while (tc--){
        memset (dp, -1, sizeof (dp));
        scanf ("%lld %lld",&n, &r);
        printf("Case %d: %lld\n",cs++, ncr(n,r) % mod);
    }
    return 0;
}

LLI ncr (LLI n, LLI r){
    if (n == r || r == 0) return 1;

    LLI &res = dp[n][r];
    if (res != -1) return res;

    res = ( ncr (n-1, r) % mod + ncr (n-1, r-1) % mod ) % mod;
    return res;
}


/*LLI ncr(LLI n, LLI r){
    int i;
    r = min(r, n-r);
    LLI ans = 1;
    for(i = 1; i <= r; i++) {
        ans = (ans * (n-r+i) ) % mod;
        ans = (ans / i) % mod;
    }
    return ans;
}
*/
