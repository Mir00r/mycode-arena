#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll __int64
#define MAX 999999

int main(){
    int n, arr, i, j, cnt, tmp, prev, res;
    while (scanf ("%d", &n) == 1){
        cnt = prev = res = 0;
        for (i = 0; i < n; i++){
            scanf ("%d", &arr);
            //cnt = prev = 0;
            if (arr == prev) cnt++;
            else
                cnt = 1, prev = arr;
            res += arr;
        }
        printf ("%d\n", res);
    }
    return 0;
}
