#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 10005

int main(){
    int n, s, i, j, a[MAX], ans, maxn, minx, tmp, cnt, tot, check;
    scanf ("%d%d", &n, &s);
    for (i = 0; i < n; i++) scanf ("%d", &a[i]);
    cnt = check = 0;
    maxn = -999999;
    for (i = 0; i < n; i++){
        s = s - a[i];
        if (maxn < a[i]) maxn = a[i];
//        if (a[i] < s){
//            check = 1; break;
//        }else{
//            check = 0; break;
//        }
    }
    tot = maxn + s;
    if (tot >= 0) puts ("YES");
    else puts ("NO");
    return 0;
}
