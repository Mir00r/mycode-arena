#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 99999

int main(){
    int n, m, d, sum, i, j, cnt, tmp, ans, hook;
    while (scanf ("%d%d", &n, &d) == 2){
        for (i = 0; i < n; i++) scanf ("%d", &hook);
        scanf ("%d", &m);
        sum = n + d;
        if (sum < m) printf ("%d\n", sum-m);
        if (sum > m) printf ("%d\n", sum-m);
        if (sum == m) printf ("%d\n", sum);
    }
    return 0;
}
