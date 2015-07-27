#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 20
#define row 50
#define col 50
#define eps 1e-9

int arr[MAX], m, n;
int dp[row][col];

int D_count (int indx, int value){
    int j;
    if (value <= 1) return 1;

    int &res = dp[indx][value];

    if (res != -1) return res;

   // printf ("arr = %d\n\n", arr[indx]);
    res = 0;

    for (j = 0; j < m; j++){
        //printf ("Diff = (%d - %d)   val = %d\n", arr[j], arr[indx], value);

        if (abs (arr[j] - arr[indx]) <= 2)
            res += D_count(indx, value-1);
    }

    //printf ("dp = %d arr = %d\n\n", dp[indx][value], arr[indx]);
    return res;
}

int main (){
    int tc, cs=1, i, j, ans;
    scanf ("%d", &tc);
    while (tc--){

        scanf ("%d%d", &m, &n);
        for (i = 0; i < m; i++)
            scanf ("%d", &arr[i]);

        memset (dp, -1, sizeof (dp));
        ans = 0;

        for (i = 0; i < m; i++)
            ans += D_count(i, n);

        printf ("Case %d: %d\n", cs++, ans);
    }
    return 0;
}
