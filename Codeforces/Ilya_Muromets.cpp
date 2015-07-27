#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 20000

LLI head[MAX];

int main(){
    LLI n, k, i, j, cnt, ans, sum , tmp, sweep;
    scanf ("%I64d %I64d", &n, &k);
    for (i = 0; i < n; i++) scanf ("%I64d", &head[i]);
    sum = cnt = tmp = ans = 0;
    sort (head, head+n);
    sweep  = k * 2;
    //printf ("SW = %I64d\n", sweep);
    if (n < k){
        for (i = n-1; i >= 0; i--)
            sum += head[i];
    }else{
        for (i = n-1; i >= sweep; i--)
            sum += head[i];
    }
    printf ("%I64d\n", sum);
    return 0;
}

