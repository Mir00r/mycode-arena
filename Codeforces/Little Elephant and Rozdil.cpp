#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define MAX 100000+100

int main(){
    int n, i, j, cnt, tmp, ans, arr[MAX], maxn, minx;
    while (scanf ("%d", &n) == 1){
        cnt = tmp = 0;
        maxn = 1000000000+10;
        for (i = 1; i <= n; i++){
            scanf ("%d", &arr[i]);
            if (arr[i] == maxn) cnt++;
            else if (arr[i] < maxn){
                maxn = arr[i];
                cnt = 0;
                tmp = i;
            }
        }
        if (cnt) puts("Still Rozdil");
        else printf ("%d\n", tmp);
    }
    return 0;
}
