#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 100000+10


/*int main(){
    int n, i, j, arr[MAX], cnt, tmp, res, minx;
    while (scanf ("%d", &n) == 1){
        minx = cnt = 0;
        for (i = 0; i < n; i++){
            scanf ("%d", &arr[i]);
            if (arr[i] != minx){
                cnt++;
                minx = arr[i];
            }
        }
        printf ("%d\n", cnt);
        //printf ("%d\n", n/2);
    }
    return 0;
}
*/

int main(){
    int n, i, j, ans, tmp, cnt;
    while (scanf ("%d", &n) == 1){
        ans = 1 << n;
        printf ("%d\n", ans);
    }
    return 0;
}
