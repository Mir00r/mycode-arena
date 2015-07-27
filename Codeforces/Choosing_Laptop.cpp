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
#define MAX 1005
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)

struct info {
    int speed, ram, hdd, cost;
}arr[MAX];


int main(){
    int n, i, j, ans, maxn, tmp;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++ )
        scanf ("%d %d %d %d", &arr[i].speed, &arr[i].ram, &arr[i].hdd, &arr[i].cost);

    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if (i != j){
                if ( (arr[i].speed < arr[j].speed )  && (arr[i].ram < arr[j].ram )  && (arr[i].hdd < arr[j].hdd) )
                    arr[i].cost = inf;
            }
        }
    }

    ans = 0;
    maxn = inf ;

    for (i = 1; i <= n; i++){
        if (arr[i].cost < maxn){
            maxn = arr[i].cost;
            ans = i;
        }
    }
    printf ("%d\n", ans);
    return 0;
}



/*int main(){
    int n, i, j, cnt, tmp, sum, maxn, ans;
    scanf ("%d", &n);
    sum = maxn = ans = 0;
    for (i = 1; i <= n; i++){
        scanf ("%d %d %d %d", &speed, &ram, &hdd, &cost);
        sum += (speed + ram + hdd + cost);
       // printf ("Sum = %d\n", sum);
        if (maxn < sum){
            maxn = sum;
            ans = i;
            sum = 0;
        }
    }
    printf ("%d\n", ans);
    return 0;
}
*/
