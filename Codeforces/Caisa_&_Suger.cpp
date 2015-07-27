#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 100

int main (){
    int n, s, doller, check, i, j, ans, tmp, x[MAX], y[MAX];
    scanf ("%d%d", &n, &s);
    doller = MAX; check = 0;
    for (i = 0; i < n; i++){
        scanf ("%d%d", &x[i], &y[i]);
        if (x[i] < s){
            if (y[i]) doller = min (doller, y[i]);
        }
        if (x[i] < s || (x[i] == s && y[i] == 0)) check = 1;
    }
    ans = 100 - doller;
    if (!check) puts ("-1");
    else printf ("%d\n", ans);
    return 0;
}
