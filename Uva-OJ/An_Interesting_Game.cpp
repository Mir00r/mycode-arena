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
#define ULL unsigned long long LLI
#define MAX 250005+5
#define row 55
#define col 55
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET (a) memset(a, -1, sizeof(a))
#define CLR (a) memset(a, 0, sizeof(a))
#define CH_CLR (a) memset(a, '\0', sizeof(a))
#define eps 1e9
#define mod 1000000007


LLI arr[MAX];


/*void save (LLI n){
    LLI i ;
    for (i = 1; i <= n; i++)
        arr[i] = i;
}


void take (LLI k, LLI x){
    LLI i;

    if (k == x)
        for (i = x; i <= k+1; i++)
            arr[i] = 0;
    else
        for (i = x; i <= k; i++)
            arr[i] = 0;
}
*/




int main(){
    LLI tc, i, j, rem, n, k, x, tmp, sum, cs=1;

    scanf ("%lld", &tc);

    while (tc--){
        scanf ("%lld %lld %lld", &n, &k, &x);

       // CLR (arr);
        rem  = sum = 0;
//        save (n);
//
//        take (k, x);
//
//        for (i = 1; i <= n; i++)
//            rem += arr[i];

        sum = n * (n+1) / 2;

        for (i = x; i <= k+x-1; i++)
            sum -= i;


        printf ("Case %lld: %lld\n", cs++, sum);
    }
    return 0;
}
