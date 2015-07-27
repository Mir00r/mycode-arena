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
#define MAX 20005
#define alpa 26
#define row 2005
#define col 2005
#define pb push_back
#define NL puts ("")


char x[MAX], y[MAX];
int lenx, leny;

int memo[row][col];


int get_mini_val (int a, int b, int c){
    return min (min (a, b), c);
}





/*int edit_dist(char *a, char *b, int m, int n){
    int left, right, corner;

    if (m == 0 && n == 0) return 0;

    if (m == 0) return n;

    if (n == 0) return m;

    int &res = memo[m][n];
    if (res != -1) return res;

    left = edit_dist (a, b, m-1, n) + 1;    //  for delete
    right = edit_dist (a, b, m, n-1) + 1;   // for Insert
    corner = edit_dist(a, b, m-1, n-1) + (a[m-1] != b[n-1]);    // for Replace

    res = get_mini_val(left, right, corner);
    memo[m][n] = res;

    //return get_mini_val(left, right, corner);
    return res;
}*/



int edit_dist(int i, int j, int m, int n){
    int left, right, corner;

    if (m == 0 && n == 0) return 0;

    if (m == 0) return n;

    if (n == 0) return m;

    int &res = memo[m][n];
    if (res != -1) return res;

    left = edit_dist (a, b, m-1, n) + 1;    //  for delete
    right = edit_dist (a, b, m, n-1) + 1;   // for Insert
    corner = edit_dist(a, b, m-1, n-1) + (a[m-1] != b[n-1]);    // for Replace

    res = get_mini_val(left, right, corner);
    memo[m][n] = res;

    //return get_mini_val(left, right, corner);
    return res;
}





int main(){

    //    #ifdef Mir00r
//
//        freopen("input.txt","r",stdin);
//        freopen("output.txt","w",stdout);
//
//    #endif

    int tc, ans, i, j;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s %s", x, y);

        lenx = strlen (x);
        leny = strlen (y);
        memset (memo, -1, sizeof (memo));

        //ans = edit_dist (x, y, lenx, leny);

        ans = edit_dist_dp (0, 0, lenx, leny);

        printf ("%d\n", ans);
    }
    return 0;
}



/*
    int min(int, int, int);

int main(){
    char a[MAX];
    char b[MAX];
    int dp[MAX+1][MAX+1];

    int tc, n, m, i, j, k;

    scanf("%d", &tc);
    while (tc--){
        scanf("%s %s", (a+1), (b+1));

        m = strlen(a+1);
        n = strlen(b+1);

        //printf("%s\n%s\n", a+1, b+1);

        for (i = 0; i <= m; i++)
            dp[i][0] = i;

        for (j = 0; j <= n; j++)
            dp[0][j] = j;

        for (i = 1; i <= m; i++){
            for (j = 1; j <= n; j++){
                if (a[i] == b[j]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j] = min (dp[i][j-1] + 1, dp[i-1][j] + 1, dp[i-1][j-1] + 1);
                }
            }
        }
        printf("%d\n", dp[m][n]);
    }
    return 0;
}


*/



/*int edit_dist_dp (int i, int j){
    int tmp;

    if (i == lenx)
        return (leny - j);      // for string x
    if (j == leny)
        return (lenx - i);      // for string y

    int res = memo[i][j];
    if (res != -1) return res;

    tmp = edit_dist_dp (i, j+1) + 1;    // for Insert
    tmp = edit_dist_dp (i+1, j) + 1;    // for Delete
    tmp = edit_dist_dp (i+1, j+1);      // for Replace

    if (tmp < res)  res = tmp;

    if (x[i] != y[j]) tmp++;

    memo[i][j] = res;

    return res;
}*/
