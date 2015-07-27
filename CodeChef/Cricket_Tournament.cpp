#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 100005
#define inf 1000000009

int main(){
    LLI tc, n, i, j, cnt, arr[MAX], ans, tmp, diff, maxn, minx;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld", &n);
        for (i = 0; i < n; i++) scanf ("%lld", &arr[i]);
        ans  = minx = inf;
        //j = 1;
        maxn = -inf;

//        while (1){
//            diff = arr[j] - arr[i];
//            ans = max (ans, diff);
//            //i++;
//            j++;
//            puts ("ok");
//            if (j <= n-1) i++;
//        }

        for (i = 1; i < n; i++){
            diff = arr[i - 1];
            //minx = max (minx, diff);
            if (diff < minx)
                minx = diff;
            //maxn = max (maxn, arr[i] - minx);

            if (maxn < arr[i] - minx)
                maxn = arr[i] - minx;

            //puts ("Ok");
        }
        printf ("%lld\n", maxn);
    }
    return 0;
}
