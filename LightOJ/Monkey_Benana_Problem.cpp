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
#define MAX 300006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 1000000007

LLI diamond[row][col], dp[row][col];

LLI n, r, c;

bool check_cor (LLI rw, LLI cl){
    if (rw >= 0 && rw < r && cl >= 0 && cl < c)
        return true;

    return false;
}

LLI call (LLI i, LLI j){

    if (check_cor (i, j)){
        if (dp[i][j] != -1)
            return dp[i][j];

        LLI ret = -inf;
        ret = max (ret, call (i+1, j) + diamond[i][j]);

        if (i < n-1){
//            ret = max (ret, call (i+1, j) + diamond[i][j]);

            ret = max (ret, call (i+1, j+1) + diamond[i][j]);
        }
        else{
            //ret = max (ret, call (i+1, j) + diamond[i][j]);

            ret = max (ret, call (i+1, j-1) + diamond[i][j]);
        }
        return dp[i][j] = ret;
    }
    else
        return 0;
}


int main (){
    int tc, i, j, k, cs=1;
    LLI ans;

    scanf ("%d", &tc);

    while (tc--){
        memo (diamond, 0);
        memo (dp, -1);

        scanf ("%lld", &n);

        r = 2 *n - 1;
        c = n;
       // printf ("%d\n", r);

        for (i = 0; i < n; i++){

            for (j = 0; j <= i; j++)
                scanf ("%lld", &diamond[i][j]);

        }


        for (i = n, k=n-1; i < r; i++, k--){
            //k = n-1;
            //k--;
            for (j = 0; j < k; j++)
                scanf ("%lld", &diamond[i][j]);

        }

        ans = call (0, 0);
        printf ("Case %d: %lld\n", cs++, ans);
    }
    return 0;
}

/*
1
4
68
65 74
61 5 95
21 86 39 56
92 2 81
25 98
46

*/
