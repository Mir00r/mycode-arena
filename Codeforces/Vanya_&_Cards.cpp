#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 100010

int main(){
    int n, x, pos, neg, sum, i, j, card[MAX], ans, tmp, cnt;
    scanf ("%d%d", &n, &x);
    for (i = 0; i < n; i++) scanf ("%d", &card[i]);
    pos = neg = sum = cnt = 0;
    for (i = 0; i < n; i++){
        sum += card[i];
//        if (card[i] < x) neg++;
//        if (card[i] >= x) pos++;
    }
    tmp = abs (sum);
    cnt = tmp / x;
    if (cnt % x != 0) cnt++;
    //ans = abs (pos-neg);
    printf ("%d\n", cnt);
    return 0;
}
