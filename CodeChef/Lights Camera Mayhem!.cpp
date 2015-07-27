#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 10005

struct node{
    LLI start, flag;
}arr[2*MAX];


bool cmp (node a, node b){
    if (a.start == b.start) return a.flag < b.flag;
    return a.start < b.start;
}


int main(){
    LLI tc, n, i, j, ans, cnt;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld", &n);
        cnt = 0;
        ans = -1;
        LLI sije = 0;
        for (i = 0; i < n; i++){
            scanf ("%lld", &arr[sije].start);
            arr[sije++].flag = 1;
            scanf ("%lld", &arr[sije].start);
            arr[sije++].flag = 2;
        }
        sort (arr, arr+sije, cmp);
        for (i = 0; i < sije; i++){
            //printf ("Arr = %d\n", arr[i].start);
            if (arr[i].flag == 1) cnt++;
            else cnt--;
            ans = max (cnt, ans);
            //printf ("Count = %d\n", cnt);
        }
        printf ("%lld\n", ans);
    }
    return 0;
}

