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

#define LLI long long int
#define ULL unsigned long long int
#define MAX 1000005
#define row 1009
#define col 1009
#define pb push_back
#define inf (1 << 29)
#define mod 1000000007
#define NL puts ("");

int arr[MAX], n, k, brr[MAX];
vector <int> vt;

int main(){
    int i , j, cnt, ans;
    while (scanf("%d %d", &n, &k) == 2){
        for (i = 1; i <= n; i++) scanf ("%d", &arr[i]);
        cnt = ans = 0;
       // printf ("%d\n", n/k);
        brr[cnt] = 0;
        sort (arr, arr+n);
        for (i = k; i <= n; i += k){
            if (abs (brr[cnt] - arr[i]) >= k)
            brr[cnt++] = arr[i];
            //printf ("%d ", brr[cnt]);
        }
        //NL;
        for (i = 0; i < cnt; i++) printf ("%d ",brr[i]);
        NL;
        printf ("%d\n", cnt);

    }
    return 0;
}

