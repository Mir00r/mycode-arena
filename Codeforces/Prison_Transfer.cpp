#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 10000005

int n , t, c, a[MAX], b[MAX];

int main(){
    int i, j, cnt, tmp, ans, pos, neg, check;
    scanf ("%d%d%d", &n, &t, &c);
    for (i = 0; i < n; i++) scanf ("%d", &a[i]);
    cnt = check = pos = neg = ans = 0;
    memset (b, 0, sizeof (b));
    for (i = 0; i < n; i++){
        if (a[i] <= t) cnt++;
        else cnt = 0;
        if (cnt >= c) ans++;
    }
    printf ("%d\n", ans);
    return 0;
}

