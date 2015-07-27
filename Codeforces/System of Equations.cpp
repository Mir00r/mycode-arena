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
    int m, n, i, j, cnt, tmp, ans;
    while (scanf ("%d%d", &m, &n) == 2){
        cnt = 0;
        for (i = 0; i <= m; i++){
            tmp = m - (i*i);
            if ((tmp*tmp)+i == n && tmp >= 0) cnt++;
        }
        printf ("%d\n", cnt);
    }
    return 0;
}

