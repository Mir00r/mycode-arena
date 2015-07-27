#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 110
#define col 110
#define MAX 3006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1LL << 60)
#define eps 1e9
#define mod 7477777


int main(){
    LL n, w, k, i, j, tot, sum , tmp, ans;
    scanf ("%I64d %I64d %I64d", &k, &n, &w);

    tot = sum = ans = tmp = 0;

    for (i = 1; i <= w; i++){
        tot += (i * k);
    }

    ans = abs (tot - n);

    if (n < tot)
        printf ("%I64d\n", ans);
    else
        puts ("0");

    return 0;
}
