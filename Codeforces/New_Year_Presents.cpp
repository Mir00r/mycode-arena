#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 9999
#define row 35
#define col 35

int arr[MAX];

int main(){
    int tc, cs=1, i, j, cnt, tmp, ans, feet, foot, maxn, minx, k, bamboo;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &k);
        for (i = 0; i < k; i++) scanf ("%d", &arr[i]);
        maxn = 0;
        tmp = abs (0-arr[0]);
        for (i = 0; i < k; i++){
            arr[i] = abs (tmp - arr[i+1]);
            //printf ("%d\n", arr[i]);
        }
        maxn = max (arr[0], arr[k-1]);
        printf ("Case %d: %d\n", cs++, maxn);
    }
    return 0;
}

/*int main(){
    int n, a[MAX], i, j, cnt, tmp, ans;
    while (scanf ("%d", &n) == 1){
        for (i = 0; i < n; i++) scanf ("%d", &a[i]);
        //puts ("PRL");
        for (i = 1; i < n; i++){
            for (j = 1; j <= a[i]; j++) printf ("PRL"); //puts ("PRL");
            printf ("R"); //puts ("R");
        }
        for (i = 1; i <= a[n]; i++) printf ("PLR");//puts ("PLR");
        printf ("\n");
    }
    return 0;
}
*/
