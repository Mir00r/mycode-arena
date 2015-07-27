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
#define MAX 1002
#define row 30
#define col 30
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int main(){
    int n, patels[MAX], i, j, sum, ans, maxn, tmp;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &patels[i]);

    sum = ans = 0;
    maxn = MAX;
    sort (patels, patels+n);

    for (i = 0; i < n; i++){

            sum += patels[i];
        if (patels[i] % 2 != 0){
            //maxn = min (maxn, patels[i]);
            if (patels[i] < maxn)
                maxn = patels[i];
//            else
//                maxn = patels[i];
        }
    }


//    if (sum % 2 == 0 && n == 1)
//        ans = sum - patels[0];
//    else if (sum % 2 == 0 && n > 1)
//        ans = sum - maxn;


    if (sum % 2 != 0)
        ans = sum;
    else if (maxn == MAX)
        ans = 0;
    else
        ans = sum - maxn;

    printf ("%d\n", ans);

    return 0;
}


//        if (sum % 2 != 0){
//            ans = max (ans, sum);
//            sum = 0;
//        }
//        else
//            ans = 0;
