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

int res[MAX];

struct info {
    int x, y;
}arr[MAX];


void swp (int a, int b){
    int i;
    if (a > b) swap (a, b);
    for (i = a; i <= b; i++)    // Segmant gula mark korlam
        res[i]++;
}

int main(){
    int n, i, j, pos, ans, maxn, tmp, sum, diff;
    scanf ("%d %d", &n, &pos);
    for (i = 1; i <= n; i++ ){
        scanf ("%d %d", &arr[i].x, &arr[i].y);
        swp (arr[i].x, arr[i].y);
    }

    sum = 0;
    maxn = inf;

    for (i = 0; i < MAX; i++ ){
       // printf ("%d ", res[i]);
        if (res[i] == n){
           // puts ("pk");
            maxn = min (maxn, abs (i - pos));
        }
    }
    //NL;
    if (maxn == inf) puts ("-1");
    else
        printf ("%d\n", maxn);

//    for (i = 1; i <= n; i++){
//        sum = abs (sum - (arr[i].x + arr[i].y));
//    }

    return 0;
}
