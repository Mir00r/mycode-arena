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
#define MAX 50002

struct node{
    int start, flag;
}arr[2*MAX];


bool cmp (node a, node b){
    if (a.start == b.start) return a.flag < b.flag;
    return a.start < b.start;
}


int main(){
    int tc, cs=1, n, i, j, curr, ans, cnt, check, tmp;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        tmp = cnt = curr = check = 0;
        ans = -1;
        int sije = 0;

        for (i = 0; i < n; i++){
            scanf ("%d", &arr[sije].start);
            arr[sije++].flag = 1;
            scanf ("%d", &arr[sije].start);
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

        printf ("Case %d: %d\n", cs++, ans);
    }
    return 0;
}
