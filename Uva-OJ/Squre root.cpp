#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999

int main(){
    /*ll tc, n, ans;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld", &n);
        ans = sqrt (n);
        printf ("%lld\n", ans);
    }*/
    int t, a, b, x, y, ans;
    while (scanf ("%d%d%d", &t, &a, &b) == 3){
        x = pow (t, a) - 1;
        y = pow (t, b) - 1;
        ans = x/y;
        printf ("%d\n", ans );
    }
    return 0;
}
