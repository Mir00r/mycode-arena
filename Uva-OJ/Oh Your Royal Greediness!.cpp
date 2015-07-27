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
#define MAX 2000
#define row 105
#define col 105
#define eps 1e-9

struct node{
    int start, flag;
}arr[2*MAX];

bool cmp (node a, node b){
    if (a.start == b.start) return a.flag < b.flag;
    return a.start < b.start;
}

int main(){
    int n, cs=1, i, j, sije, farmer, ans, check;
    while (scanf ("%d", &n) == 1){
        if (n < 0) break;
        sije = farmer = 0;
        ans = 0;
        int one = 0 , two = 0;
        for (i = 0; i < n; i++){
            scanf ("%d", &arr[sije].start);
            arr[sije++].flag = 1;
            scanf ("%d", &arr[sije].start);
            arr[sije++].flag = 2;
        }
        sort (arr, arr+sije, cmp);
        for (i = 0; i < sije; i++){
            if (arr[i].flag == 1) farmer++;
            else farmer--;
           //if (arr[i].flag == 1) one++;
           //else if (arr[i].flag == 2) two++;
            ans = max (farmer, ans);
            //ans = min (one, two);
        }
        printf ("Case %d: %d\n", cs++, ans);
    }
    return 0;
}
