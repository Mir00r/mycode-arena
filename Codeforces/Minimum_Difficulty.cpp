#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long int
#define MAX 100000
#define row 1000
#define col 1000


int main (){
    int n, arr[MAX], brr[MAX], crr[MAX], i, j, cnt, minx, tmp, ans, x, y;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
    ans = 0;
    //cnt = 1;
    //memset (brr, 0, sizeof (brr));
    /*memset (crr, 0, sizeof (crr));
    if (n == 3) ans = arr[n-1] - arr[0];
    else{
        cnt = 1;
        minx = tmp = x = y = 0;
        memset (brr, 0, sizeof (brr));
        while (cnt < n-1){
            minx = arr[0];
            for (i = 1; i < n; i++){
                if (cnt != i){
                    tmp = arr[i] - minx;
                    brr[x++] = tmp;
                    minx = arr[i];
                }
            }
            cnt++;
            sort (brr, brr+x);
            crr[y++] = brr[x-1];
        }
        sort (crr, crr+y);
        ans = crr[0];
    }
    printf ("%d\n", ans);*/

    minx = x = y = tmp = 0;
    i = 1;
    if (n == 3) ans = arr[n-1] - arr[0];
    else {
        while (i < n-1){
            minx = arr[0];
            memset (brr, 0, sizeof (brr));
            for (j = 1; j < n; j++){
                if (i != j){
                    tmp = arr[j] - minx;
                    brr[x++] = tmp;
                    minx = arr[j];
                }
            }
            sort (brr, brr+x);
            crr[y++] = brr[x-1];
            i++;
        }
        sort (crr, crr+y);
        ans = crr[0];
    }
    printf ("%d\n", ans);
    return 0;
}
