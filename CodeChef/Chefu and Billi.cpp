#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long int
#define MAX 100002
#define row 30
#define col 30
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int arr[MAX], brr[MAX], n, d;

int main(){
    int tc, i, j, diff, div, jog, mod, ans, tmp, minx, step;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++){
            scanf ("%d", &arr[i]);
          //  scanf ("%d", &brr[i]);
        }

        for (i = 0; i < n; i++) scanf ("%d", &brr[i]);
        scanf("%d", &d);

//        sort (arr, arr+n);
//        sort (brr, brr+n);

        minx = inf;
        ans = diff = mod = step = jog = 0;

        for (i = 0; i < n; i++){

            if (arr[i] >= d){
                ans = i;
                break;
            }
            else{
                diff = abs (arr[i] - brr[i]);
                jog = arr[i] + brr[i];

                mod = d % diff;

                step = d - mod;
                step /= diff;
                step *= jog;
                step += diff;

                if (step < minx){
                    minx = step;
                    ans = i;
                }
            }
        }

        printf ("%d\n", ans+1);
    }
    return 0;
}
