#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define pb push_back
#define eps 1e-7
#define row 100
#define col 100
#define MAX 10000

int n, k;

int bino_coeff (int n, int k){
    int res = 1, i;

    if (k > n - k)      // C (n, k) = C (n, n - k)
        k = n - k;
    for (i = 0; i < k; i++){
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main(){
    int i, j, ans, cs=1;
    while (scanf ("%d %d", &n, &k) == 2){
        ans = bino_coeff(n, k);
        printf ("Case %d: %d\n", cs++, ans);
    }
    return 0;
}
