#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 105
#define row 100
#define col 100
#define eps 1e-11
#define memo (array, value) memset (array, value, sizeof (array))


int dp[row][col], rgb[row][col], house;

int paint_korbo (int r, int c){
    if (r == house) return 0;
    int &res = dp[r][c];
    if (res != -1) return res;
   // printf ("(S_R, C) = (%d, %d) S_rgb = %d\n\n", r, c, rgb[r][c]);
    if (c == 1) res = rgb[r][c] + min (paint_korbo(r+1, 2) , paint_korbo(r+1, 3));
    else if (c == 2) res = rgb[r][c] + min (paint_korbo(r+1, 1), paint_korbo(r+1, 3));
    else if (c == 3) res = rgb[r][c] + min (paint_korbo(r+1, 1), paint_korbo(r+1, 2));
   // printf ("(r, c) = (%d, %d) dp = %d rgb = %d\n", r, c, dp[r][c], rgb[r][c]);
    return res;
}

int main(){
    int tc, cs=1, i, j, ans, tmp;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &house);
        for (i = 0; i < house; i++)
            for (j = 1; j <= 3; j++) scanf ("%d", &rgb[i][j]);
       // memo (dp, -1);
        memset (dp, -1, sizeof (dp));
        ans = 999999;
        //int maxn = 999999;
        for (i = 1; i <= 3; i++){
            tmp = paint_korbo(0, i);
            ans = min (tmp, ans);
        }
        printf ("Case %d: %d\n", cs++, ans);
    }
    return 0;
}
