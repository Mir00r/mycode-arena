#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define MAX 99999

int main(){
    LL a, b, c, sum, cnt, tmp, res;
    int tc, cs=1, i, j, arr[5];
    scanf ("%d", &tc);
    while (tc--){
        //scanf ("%lld%lld%lld", &a, &b, &c);
        for (i = 0; i < 3; i++) scanf ("%d", &arr[i]);
        //sum = (a*a) + (b*b);
        //tmp = c*c;
        sort (arr, arr+3);
        sum = (arr[0]*arr[0]) + (arr[1]*arr[1]);
        tmp = arr[2] * arr[2];
        if (sum == tmp) printf ("Case %d: yes\n", cs++);
        else printf ("Case %d: no\n", cs++);
    }
    return 0;
}


/*
int main(){
    int n, u, d, i, j, tmp, sum, ans;
    while (scanf ("%d%d%d", &n, &u, &d) == 3){
        if (n == 0 && u == 0 && d == 0) break;
        for(i = 0; i < n; i++){
            tmp = u-d;
            sum = tmp+u;
        }
        printf ("%d %d\n", tmp, sum);
    }
    return 0;
}

*/
