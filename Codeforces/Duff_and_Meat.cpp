#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 205
#define col 205
#define MAX 300006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777
#define PI 3.1415926535897932384626433832795


struct info{
    int w, p;
}arr[MAX];

int main(){
    int sum = 0, tot = 0, i, j, n, tmp, cnt;
    int mini = inf;

    scanf ("%d", &n);
    for (i = 0 ; i < n; i++){
        scanf ("%d %d", &arr[i].w, &arr[i].p);
      //  sum += arr[i].w;
    }

    for (i = 0; i < n; i++){
        if ( mini > arr[i].p ){
            mini = arr[i].p;
        }
        tot += mini * arr[i].w;
    }


    /*
    for (i = 0; i < n; i++){
        if ( arr[i].p == 1 ){
            tot += ( sum * arr[i].p );
            printf ("%d\n", tot);
            return 0;
        }
        else{
            sum -= arr[i].w;
            tot += ( arr[i].p * arr[i].w ) ;
        }
    }
    */

    printf ("%d\n", tot);
    return 0;
}
