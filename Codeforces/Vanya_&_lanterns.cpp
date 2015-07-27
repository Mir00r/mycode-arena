#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long int lld;


#define MAX 10009
const double eps = 1e-6;
const double PI = 2 * acos (0.0);


int n, friends, len;
int arr[MAX];


/*void binary_search(){

    double low, hi, mid;
    low = 0.0;
    //hi =  PI * (double)(v[n-1]);
    hi = len;
    while(hi-low >= eps){
        mid = (low+hi) / (double)(2.0);

        if(arr[mid] == len) hi = mid;
        else if (arr[mid] < len) low = mid + 1;
        else hi = mid - 1;
    }

    printf ("%.4lf\n", hi);
    return;
}*/


int main(){

    #ifdef Fused
    freopen("input.txt", "r", stdin);
//    freopen("vomit.txt", "w", stdout);
    #endif

    int i, j, k, tmp;
    scanf ("%d %d", &n, &len);
    for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
    sort (arr, arr+n);

    //binary_search();
    double res = 0.0;
    tmp = len - arr[n-1];
    //printf ("Tpm = %d\n", tmp);
    res = max (arr[0], tmp);
    //printf ("Res = %d\n", res);

    for (i = 0;i < n; i++){
        double cal = (arr[i] - arr[i - 1]) / 2.0;
         //   printf ("Loop Tpm = %.5lf\n", cal);

        res = max (res, cal);
    }
    printf ("%.10lf\n", res);
    return 0;
}
