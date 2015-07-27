#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 25
#define row 30
#define col 30

int n, m, i, j, cnt, res, tmp;
int arr[MAX], memo[row][col];

int fact (int x){
    if (x == 0) return 1;
    else return x * fact(x-1);
}

int nCm (int a, int b){
    int ans;
    ans = fact(a) / (fact(b) * fact(a-b));
    return ans;
}

int nCr (int n, int r){
    if (n == r || r == 0) return 1;
    if (memo[n][r] != -1) return memo[n][r];
    int &ans = memo[n][r];
    ans = ncr (n-1, r) + ncr (n-1, r-1);
    return ans;
}

int abar_make (int n){
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (arr[n] != -1) return arr[n];
    int &ans = arr[n];
    ans = (n-1) * (abar_make(n-1) + abar_make(n-2));
    return ans;
}

int main(){
    while (scanf ("%d%d", &n, &m) == 2){
        res = 0;
        memset (arr, -1, sizeof (arr));
        memset (memo, -1, sizeof (memo));
        for (i = 0; i <= m; i++) res += nCm (n, i) * abar_make(n-i);
        printf ("%d\n", res);
    }
    return 0;
}
