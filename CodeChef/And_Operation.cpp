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
#define MAX 100000005

LLI arr[MAX];
char str[MAX];

int main(){
    LLI tc, n, i, j, sum, tmp, cnt, ans, maxn;
    while (scanf ("%lld", &n) == 1){
        for (i = 0; i < n; i++) scanf ("%lld", &arr[i]);

        sum = tmp = cnt = maxn = 0;

//        for (i = 0; i < n; i++){
//            for (j = i+1; j < n; j++){
//                sum = max (sum, (arr[i] &  arr[j]) );
//                //printf ("%lld\n", sum);
//            }
//        }

         sort (arr, arr+n);
//        sum = arr[n-2] & arr[n-1];

        for (i = 0; i < n; i++){
            sum = arr[i] & arr[i+1];
            if (sum > maxn)
                maxn = sum;
        }

        printf ("%lld\n", maxn);
    }
    return 0;
}

