#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long LLI
#define MAX 100005+5
#define row 55
#define col 55
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007


int main(){
    LLI tc, n, m, o, i, tot, ans, tmp, arr[MAX];

    scanf ("%lld", &tc);

    while (tc--){
        scanf ("%lld %lld %lld", &n, &m, &o);

        for (i = 0; i < n; i++)
            scanf ("%lld", &arr[i]);

        tot = 0;

        for (i = 0; i < n; i++){
            if (arr[i] >= o)
                tot++;
        }

        if (tot >= m)
            printf ("%lld\n", tot);
        else
            puts ("-1");
    }
    return 0;
}
