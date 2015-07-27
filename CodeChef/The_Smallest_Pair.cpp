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
#define MAX 100005

LLI arr[MAX], brr[MAX];

int main(){
    LLI tc, n, i, j, sum, tmp, cnt, ans, maxn;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld", &n);
        for (i = 0; i < n; i++) scanf ("%lld", &arr[i]);

        sort (arr, arr+n);
        ans = arr[0] + arr[1];

//        sum = tmp = cnt = 0;
//        maxn = 99999;

//        for (i = 0; i < n; i++){
//            for (j = i+1; j < n; j++){
//                sum += arr[i] + arr[j];
//                //printf ("%lld\n", sum);
//                if (maxn > sum) maxn = sum;
//            }
//        }


        printf ("%lld\n", ans);
    }
    return 0;
}

