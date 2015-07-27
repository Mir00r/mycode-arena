#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 105

int main(){
    int a[MAX], b[MAX], i, j, cnt, ans, tmp, m, n;
    scanf ("%d%d", &n, &m);
    for (i = 1; i <= m; i++) scanf ("%d", &a[i]);
    memset (b, 0, sizeof (b));
    cnt = ans = 0;
    for (i = 1; i <= m; i++)
        for (j = a[i]; j <= n; j++)
            if (b[j] == 0) b[j] = a[i];
    for (i = 1; i <= n; i++) printf ("%d ", b[i]);
    return 0;
}
