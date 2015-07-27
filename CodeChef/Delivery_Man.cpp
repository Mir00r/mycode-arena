#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 10005

int main (){
    LLI n, x, y, a[MAX], b[MAX], cnt, tmp, ans, i, j;
    while (scanf ("%lld %lld %lld", &n, &x, &y) == 3){
        for (i = 0; i < n; i++){
            scanf ("%lld %lld", &a[i], &b[i]);
        }
        ans = cnt= tmp = 0;
        sort (a, a+n);
        sort (b, b+n);

        for (i = n-1; i >= x; i--){
            ans += a[i];
        }
        for (i = n-1; i >= x-1; i--){
            ans += b[i];
        }
        printf ("%lld\n", ans);
    }
    return 0;
}
