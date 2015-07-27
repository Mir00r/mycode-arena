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

LLI n, pile[MAX], arr[MAX];

int main(){
    LLI i, j, sum, tmp, ans;
    while (scanf ("%lld", &n) == 1){
        if (n == 0) break;
        ans = 0;
        for (i = 0; i < n; i++){
            scanf ("%lld", &pile[i]);
            ans ^= pile[i];
        }
//        sum = 0;
//        for (i = 0; i < n; i++)  sum ^= arr[i];
        //printf ("Ans = %lld\n", ans);
        if (ans >= 1) puts ("Yes");
        else puts ("No");

    }
    return 0;
}
