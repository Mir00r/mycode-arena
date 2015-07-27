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
#define row 32
#define col 32
#define MAX 10006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777



int main(){
    int tc, cs=1, n, m, arr[MAX], i, tot, res, modu[MAX];

    scanf ("%d", &tc);

    while (tc--){
        scanf ("%d %d", &n, &m);
        for (i = 0; i < n; i++)
            scanf ("%d", &arr[i]);

        memo (modu, 0);
        tot = res = 0;
        modu[0] = 1;

        for (i = 0; i < n; i++){
            tot = (tot + arr[i]) % m;
            //printf ("Tot = %d\n", tot);
            modu[tot]++;
        }

        for (i = 0; i < m; i++)
            res += (modu[i] - 1) * modu[i] / 2;

        printf ("Case %d: %d\n", cs++, res);
    }

    return 0;
}
