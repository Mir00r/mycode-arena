#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define MAX 9999

LLI square(LLI s){
    return s*s;
}


LLI big_mod (LLI b, LLI p, LLI m){
    if (p == 0) return 1;
    else if (p % 2 == 0)
        return square (big_mod(b, p/2, m)) % m;
    else
        return ((b % m) * big_mod(b, p-1, m)) % m;
}


int main(){
    LLI x, y, z, i, tc, cs=1, ans;
    while (scanf ("%lld", &tc) == 1 && tc){
        //if (tc == 0) break;
        for (i = 0; i < tc; i++){
            scanf ("%lld %lld %lld", &x, &y, &z);
            ans = big_mod (x, y, z);
            printf ("%lld\n", ans);
        }
    }
    return 0;
}
