#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 105


int main (){
    int n, i, j, cnt, p[MAX], q[MAX], tmp, ans;
    scanf ("%d", &n);
    cnt = 0;
    for (i = 0; i < n; i++) scanf ("%d%d", &p[i], &q[i]);
    for (i = 0; i < n; i++){
        tmp = q[i] - p[i];
        if (tmp >= 2) cnt++;
    }
    printf ("%d\n", cnt);
    return 0;
}
