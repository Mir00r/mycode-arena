#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 999
#define eps 1e-11

/*ll GCD (ll x, ll y){
    if (y == 0) return x;
    else return GCD (y, x%y);
}

ll LCM (ll x, ll y){
    return (x / GCD(x, y)*y);
}

int main(){
    ll a, b, ans, res;
    int n, i;
    /*while (scanf ("%d", &n) == 1){
        if (n == 0) break;
        scanf ("%lld", &a);
        for (i = 1; i <= n; i++){
            scanf ("%lld", &b);
            a = LCM (a, b);
        }
    }*/
    //printf ("%lld\n", a);
    /*while (scanf ("%lld%lld", &a, &b) == 2){
        res = GCD (a, b);
        printf ("Res of GCD = %lld\n", res);
        ans = LCM (a, b);
        printf ("ans of LCM = %lld\n", ans);
    }
    return 0;
}*/

/*ll lcm(ll a,ll b, ll c){
    int n;
    for(n = 1;  ;n++){
        if(n%a == 0 && n%b == 0 && n % c == 0)
            return n;
    }
}

int main(){
    ll a, b, c, ans;
    while(scanf("%lld%lld%lld", &a, &b, &c) == 3){
        ans = lcm(a, b, c);
        if (ans == c) printf("%lld\n", ans);
        else printf ("impossible\n");
    }
    return 0;
}*/


double memo[30][30];
double probability, res;
double dp(int x, int y, double z){
        res = 0;
    if (x == 25) return 1;
    if (y == 25) return 0;
    if (res != -1) return res;
    res = memo[x][y];
    if (z == 0) res = probability * (dp(x+1, y, !z)) + (1-probability) * (dp(x, y+1, !z));
    else res = probability * (dp(x+1, y, !z)) + (1-probability) * (dp(x, y+1, !z));
    memo[x][y] = res;
    return res;
}
int main(){
    int t, num_of_wins, tmp;
    double ans;
    scanf ("%d", &t);
    while (t--){
        memset (memo , -1, sizeof (memo));
        scanf ("%d%lf", &num_of_wins, &probability);
        ans = dp(0, 0, 0);
        printf ("%.2lf\n", ans);
    }
    return 0;
}

