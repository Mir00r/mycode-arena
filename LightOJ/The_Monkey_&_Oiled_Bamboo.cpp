
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
#define MAX 100000+100
#define row 100
#define col 100

int arr[MAX];

/*int main(){
    int tc, cs=1, i, j, cnt, tmp, ans, feet, foot, maxn, minx, k, bamboo;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &k);
        //arr[0] = 0;
        maxn = 0;
        for (i = 0; i < k; i++){
            scanf ("%d", &arr[i]);
            feet = arr[i] - arr[i-1];
           // printf ("Feet = %d\n", feet);
            if (maxn < feet) maxn = feet;
            else if (maxn == feet) maxn--;
            //printf ("Maxn = %d\n", maxn);
        }
        printf ("Case %d: %d\n", cs++, maxn);
    }
    return 0;
}
*/

/*int main(){
    int tc, cs=1, i, j, cnt, tmp, ans, feet, foot, maxn, minx, k, bamboo;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &k);
        for (i = 0; i < k; i++) scanf ("%d", &arr[i]);
        maxn = 0; arr[0] = 0;
        tmp = abs (0-arr[0]);
        for (i = 0; i < k; i++){
            arr[i] = abs (arr[i] - arr[i+1]);
            //printf ("%d\n", arr[i]);
        }
        maxn = max (arr[0], arr[k-1]);
        printf ("Case %d: %d\n", cs++, maxn);
    }
    return 0;
}*/


int main(){
    int tc, cs=1, len, n, i, j, cnt, tmp, ans;
    char str[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf (" %c", str);
        len = strlen (str);
        for (i = 0; i < len; i++) printf ("%s", str[i]);
    }
    return 0;
}
