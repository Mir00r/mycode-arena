#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 999

int main(){
    ll tc, cs=1, ans, div, m, n;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld%lld", &m, &n);
        div = m / 2;
        ans = div *n;
        printf ("Case %lld: %lld\n", cs++, ans);
    }
    return 0;
}

