#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define MAX 9999

int main(){
    int n, k, i, j, cnt, tmp, ans;
    while (scanf ("%d%d", &n, &k) == 2){
        tmp = n-k;
        if (tmp == 0){
            printf ("-1\n");
            break;
        }
        for (i = 0; i < tmp; i++){
            ans = (i+1) % 2 + 1;
            printf ("%d ", ans);
        }
        for (i = tmp; i < n; i++) printf ("%d ", i+1);
        printf ("\n");
    }
    return 0;
}
