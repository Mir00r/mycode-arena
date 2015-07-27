#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 10000+10

int main(){
    int n, m, i, j, cnt, tmp, arr[MAX], maxn, minx, diff;
    while (scanf ("%d%d", &n, &m) == 2){
        for (i = 0; i < m; i++) scanf ("%d", &arr[i]);
        /*sort (arr, arr+n);
        diff = arr[n-1] - arr[0];
        printf ("%d\n", diff);*/
        maxn = 1 << 25;
        sort (arr, arr+m);
        tmp = m - n;
        for (j = 0; j <= tmp; j++)
            maxn = min (maxn, arr[j+n-1] - arr[j]);
        printf ("%d\n", maxn);
    }
    return 0;
}
