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
#define MAX 20005
#define row 30
#define col 30
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001

int n, d, centi[MAX];

int main(){
    int i, j, sum=0, maxn=0, minx=inf, cnt=0, a=0, b=0, tmp=0, diff;

    scanf ("%d", &n);
    for (i = 1; i <= n; i++ ) scanf ("%d", &centi[i]);

    diff = abs (centi[1] - centi[n]);

    a = 1;
    b = n;

    for (i = 1; i < n; i++){
        tmp = abs(centi[i] - centi[i+1] );

        if (tmp < diff){
            diff = tmp;
            a = i;
            b = i+1;
//            printf ("%d %d\n", a, b);
        }
        // printf ("%d %d\n", a, b);
    }

    printf ("%d %d\n", a, b);

    return 0;
}

/*
    sort (centi, centi+n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
           // puts ("ok");
            if (i != j){
                tmp = abs(centi[i] - centi[j] );
                if ( tmp < minx){

                    minx = tmp;
                    a = i;
                    b = j;
                }
            }
//            if (j == n){
//                printf ("%d %d\n", a, b);
//                return 0;
//            }
        }
    }
*/
