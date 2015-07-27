#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999
#define row 9999+10
#define col 9999+10

int memo[row][col], a[MAX], b[MAX];
int vis[row][col];
char str[MAX];

/*int dp (int x, int y){
    int &res = memo[x][y];
    if (res != -1) return res;
    else if (x >= y){
        if (x == y) return res = 1;
        else res = 0;
        return res;
    }
    else{
        if (a[x] == b[y])
            res = dp(x-1, y-1) + 1;
        else
            res = max (dp(x-1, y), dp(x, y-1));
        return res;
    }
}*/


ll dp(int x, int y){
    bool &flag = vis[x][y];
    ll &res = memo[x][y];
    if(flag) return res;
    else if(x >= y){
        flag = 1;
        if(x == y) res = 1;
        else res = 0; return res;
    }
    else{
        if(str[x] == str[y]) res = max(res, dp(x+1,y) + dp(x,y-1) + 1);
        else res = max(res, dp(x+1,y) + dp(x,y-1) - dp(x+1,y-1));
        flag = 1; return res;
    }
}

int main(){
    int tc, i, j, len, ans, cnt, tmp;
    scanf ("%d", &tc);
    getchar();
    while (tc--){
        scanf ("%s", str);
        len = strlen (str);
        ans = dp (0, len-1);
        printf ("%d\n", ans);
    }
    return 0;
}
