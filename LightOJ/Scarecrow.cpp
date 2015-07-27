#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 101
#define flag 2
#define inf (1 << 28)

int memo[MAX][flag][flag], n, len;
char str[MAX];


int dp (int ind, int left, int cur_pos){

    if (ind == len){
        if (left == 1)
            return 0;
        else
            return inf;
    }

    int &res = memo[ind][left][cur_pos];
    if (res != -1) return res;

    if (left){
        int a, b;
        // boshaile ki hob a
        res = dp (ind+1, 1, 1) + 1;

        // Na boishaile ki hob a
        if (str[ind] == '#')
            res = min (res, dp (ind+1, 1, 0) );
        else
            res = min (res , dp (ind+1, cur_pos, 0) );
        res = min (res, res);
    }
    else{
        //int a, b;
        // boshaile ki hob a
        res = dp (ind+1, 1, 1) + 1;
    }
    memo[ind][left][cur_pos] = res;
    return res;

}

int main(){
    int tc, cs=1, i, j, ans;
    scanf ("%d", &tc);

    while (tc--){
        scanf ("%d %s", &n, str);
        len = strlen (str);
        memset (memo, -1, sizeof (memo));
        ans = dp (0, 1, 0);
        printf ("Case %d: %d\n", cs++, ans);
    }
    return 0;
}
