#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 2003
#define L __int64

int a[MAX], b[MAX], memo[MAX][MAX];
int result, final_result, i, j;
char str[MAX];
int LCS (int m, int n){
    if (m == -1 || n == -1) return 0;
    result = memo[m][n];
    if (result != -1) return result;
    if (a[m] == b[n]) return LCS (m-1, n-1) + 1;
    else
        result = max (LCS (m-1, n), LCS (m, n-1));
    memo[m][n] = result;
    return result;
}

int main(){
    int t, m , n, c = 0;
    scanf ("%d%d", &m, &n);
    while (m != 0 && n != 0){
        memset (memo , -1, sizeof (memo));
        for (i = 0; i < m; i++) scanf ("%d", &a[i]);
        for (j = 0; j < n; j++) scanf ("%d", &b[j]);
        final_result = LCS (m -1, n-1);
        printf ("The Towrs #%d\nNumber of Tiles : %d\n\n", ++c, final_result);
        scanf ("%d%d", &m, &n);
    }
    return 0;
}
