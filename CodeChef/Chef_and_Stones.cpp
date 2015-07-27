#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 10000005
#define row 100

//LLI a[MAX], b[MAX];
LLI n, k;
vector <LLI> x, y;

int main(){
    LLI tc, i, j, ans, multi, sum, div, cnt, tmp, maxn;
    scanf ("%lld", &tc);
    while (tc--){
        LLI p, q;
        scanf ("%lld %lld", &n, &k);
        for (i = 0; i < n; i++){
           scanf ("%lld", &p);
           x.push_back(p);
           scanf ("%lld", &p);
           y.push_back(p);
        }
        //puts ("Ok");
        maxn = div = multi = 0;
        maxn = (k / x[0]) * y[0];
        for (i = 1; i < n; i++){
            div = k / x[i];
            multi = div * y[i];
            //printf ("div = %lld   Multi = %lld\n", div, multi);
            if (maxn < multi) maxn = multi;
            //maxn = max (maxn, multi);
        }
        printf ("%lld\n", maxn);
        x.clear ();
        y.clear ();
    }
    return 0;
}
