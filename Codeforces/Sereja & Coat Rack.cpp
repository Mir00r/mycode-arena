#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 1000+10

int main(){
    int m, n, d, i, j, tmp, cnt, ans, sum, arr[MAX];
    while (scanf ("%d%d", &n, &d) == 2){
        for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
        scanf ("%d", &m);
        sort (arr, arr+n);
        sum = 0;
        tmp = min (m, n);
        for (i = 0; i < tmp; i++) sum += arr[i];
        if (m > n) sum -= (m-n) * d;
        printf ("%d\n", sum);
    }
    return 0;
}
