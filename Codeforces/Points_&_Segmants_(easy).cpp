#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1010
#define LLI __int64
//#define memo (array, value) memset (array, value, sizeof (array))

int main(){
    int n, m, x[MAX], y[MAX], i, j, a, b, cnt, ans, tmp;
    scanf ("%d%d", &n, &m);
    for (i = 0; i < n; i++) scanf ("%d", &x[i]);
    for (i = 0; i < m; i++) scanf ("%d%d", &a, &b);
    memset (y, 0, sizeof (y));
    cnt = ans = tmp = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (a >= x[i] && x[i] <= b){
                cnt++;
                if (b==a) y[i] = 1;
                else y[i] = 0;
            }
        }
    }
    if (cnt > 0){
        for (i = 0; i < n; i++) printf ("%d ", y[i]);
    }
    else puts ("-1");
    return 0;
}
