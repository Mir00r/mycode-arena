#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI __int64
#define ULL unsigned long long
#define MAX 200

int main(){
    int n, c, i, j, arr[MAX], res, maxn, minx, tmp, cnt;
    scanf ("%d%d", &n, &c);
    for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
    maxn = 0;
    for (i = 0; i < n-1; i++){
        res = arr[i] - arr[i+1] - c;
        if (res > maxn) maxn = res;
    }
    printf ("%d\n", maxn);
    return 0;
}
