#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 10005


int main (){
    int n, d, a[MAX], i, j, sum , cnt, tmp , ans, tot, time;
    scanf ("%d%d", &n, &d);
    sum = cnt = tmp = ans = tot = 0;
    for (i = 0; i < n; i++){
        scanf ("%d", &a[i]);
        sum += a[i];
    }
    time = (n*10) - 5;
    tmp = 10 * (n-1);
    //printf ("Time = %d\n", time);
    tot = time + sum;
    cnt = tmp + sum;
    //ans = (n*2) - 1;
    //printf ("Ans = %d\n", ans);
    //printf ("tot = %d\n", tot);
    if ((tot <= d) && (cnt <= d)){
         //printf ("%d\n", ans);
         ans = max (time/5, cnt/5);
         printf ("%d\n", ans);
    }
    else puts ("-1");
    return 0;
}
