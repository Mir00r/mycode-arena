#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define pb push_back
#define MAX 1000006

LLI fact[MAX], arr[MAX], n;

vector <LLI> vt;

LLI find_factor (LLI arr[]){
    LLI i, j, k, ans = 1, cnt;

    for (i = 0; i < n; i++){
        for (j = 2; j*j <= arr[i]; j++){
            cnt = 0;
            while (arr[i] % j == 0){
                arr[i] /= j;
                cnt++;
            }
            printf ("Cnt = %d\n", cnt);
            fact[j] += cnt;
        }
        if (arr[i] > 1)
            fact[arr[i]] += 1;
    }

    for (i = 0; i < MAX; i++){
        if(fact[i] > 0){
            ans *= (fact[i] + 1);
            printf ("I = %lld   fact = %lld\n", i, fact[i]);
        }
    }
    return ans;
}


int main(){
    LLI tc, i, j, k, res, vl, sije;
    scanf ("%lld", &tc);

    while (tc--){
        scanf ("%lld", &n);
        for (i = 0; i < n; i++){
            scanf ("%lld", &arr[i]);
        }
        memset (fact, 0, sizeof (fact));
        res = find_factor(arr);
        printf ("%lld\n", res);
    }
    return 0;
}
