#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 10000005

LLI a, b, n;


LLI squar (LLI x){
    return x*x;
}

LLI func (LLI y){
    return ( ( (a % n) * (squar(y) % n) ) % n + (b % n) ) % n;
}

int main(){
    LLI i, j, H, T, ans, tot, tmp, check;
    while (scanf ("%lld %lld %lld", &n, &a, &b) == 3){
        if (n == 0 && a == 0 && b == 0) break;
//        for (i = 0; i < n-1; i++){
//            T = i;
//            H = i;
//        }

        T = n;
        H = n;

        while (1){
            T = func (T);
            H = func (func (H));
            if (T == H) break;
        }

  //      for (i = 0; i < n-1; i++) H = i;
        H = n;
        tot = 0;

        while (T != H){
            T = func (T);
            H = func (H);
        }

        H = func (H);
        tot = 1;

        while (T != H){
            H = func (H);
            tot++;
        }
        //printf ("%lld\n", tot);
        ans = n - tot;
        printf ("%lld\n", ans);
    }
    return 0;
}
