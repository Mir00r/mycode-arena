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
#define MAX 1006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


int main(){
    int n, m, i, j, tmp, cnt, arr[MAX], brr[MAX], minx, ans;

    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &arr[i]);

    scanf ("%d", &m);
    for (i = 0; i < m; i++)
        scanf ("%d", &brr[i]);

    minx = -1;
    ans = 0;

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (brr[j] % arr[i] == 0){
           //     puts ("ok");
                //minx = max ( minx, brr[j] / arr[i] );

                if (brr[j] / arr[i] > minx ) {
                    minx = brr[j] / arr[i];
                    ans  = 0;
                }

                if (brr[j] / arr[i] == minx)
                    ans++;

            }

//            if (brr[j] / arr[i] == minx)
//                ans++;
        }
    }

    printf ("%d\n", ans);

    return 0;
}
