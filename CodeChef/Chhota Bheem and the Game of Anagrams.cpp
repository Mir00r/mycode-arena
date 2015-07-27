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
#define ULL unsigned long long int
#define MAX 1100
#define pb push_back
#define Mod 1000000007


LLI factorial[MAX];

/*LLI fact(LLI n, LLI m){
    int i;
    factorial[0] = 1;
   // factorial[]
    LLI tot  = 1;
    for (i = n; i <= m; i++){
        tot = ((tot%Mod) * (i%Mod))%Mod;
       // factorial[i] = ((factorial[i-1] % Mod) * (i % Mod)) % Mod;
        //printf ("%lld\n", factorial[i]);
    }
    return tot;
}

int main (){
//    fact();
LLI n, k;
    LLI tc, ans, a, b, r;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld %lld", &n, &k);
        r = n - k;
        ans = fact(r+1, n);
//        r = n - k;
//        ans = (factorial[n] % Mod / factorial[r] % Mod) % Mod;
        printf ("%lld\n", ans);
    }
    return 0;
}*/


int main(){
    int a, b;
    while (scanf ("%d", &a) == 1){
        if (a % 2) puts ("Odd");
        else puts ("Even");
    }
    return 0;
}
