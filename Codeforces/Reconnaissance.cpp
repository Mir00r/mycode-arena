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
    int i, j, sum=0, maxn=0, minx=inf, cnt=0;

    scanf ("%d %d", &n, &d);
    for (i = 1; i <= n; i++ ) scanf ("%d", &centi[i]);

    sort (centi, centi+n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
           // puts ("ok");
            if (i != j)
                if ( abs(centi[i] - centi[j] ) <= d)
                    //sum += centi[i];
                    cnt++;
        }
    }

    printf ("%d\n", cnt);

    return 0;
}
