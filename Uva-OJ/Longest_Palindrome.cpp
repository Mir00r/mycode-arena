#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 1005
#define row 1006
#define col 1005
#define L __int64

int a[MAX], b[MAX], memo[row][col];
int i, j;
char str[MAX];

/*int LCS(int m, int n){
    if (m > n) return 0;
    int &result = memo[m][n];
    if (result != -1) return result;
    if (m == n) return result = 1;
    if (str[m] == str[n]) return result = 2 + LCS(m+1, n-1);
    return result = max(LCS(m+1, n), LCS(m ,n-1));
}*/

/*int LCS (int m, int n){
    if (m > n) return 0;
    result = memo[m][n];
    if (result != -1) return result;
    if (m == n) return result = 1;
    if (result != -1) return result;
    if (str[m] == str[n]) result = LCS (m+1, n-1) + 2;
    else
        result = max (LCS (m+1, n), LCS (m, n-1));
    memo[m][n] = result;
    return result;
}*/

int LCS (int m, int n){
    if (m == -1 || n == -1) return 0;
    int &result = memo[m][n];
    if (result != -1) return result;
    if (a[m] == b[n]) return LCS (m+1, n-1) + 1;
    else
        result = max (LCS (m-1, n), LCS (m, n-1));
    memo[m][n] = result;
    return result;
}

int main(){
    int tc, len, tmp;
    scanf ("%d", &tc);
    getchar();
    while (tc--){
        gets(str);
        //scanf ("%s", str);
        len = strlen(str);
        memset (memo, -1, sizeof (memo));
        tmp = LCS (0, len-1);
        printf ("%d\n", tmp);
    }
    return 0;
}
