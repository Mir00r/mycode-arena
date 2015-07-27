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


int n, m, cost[MAX];

int main(){
    int i, j, sum=0, maxn=0, minx=inf;

    scanf ("%d %d", &n, &m);
    for (i = 0; i < n; i++ ) scanf ("%d", &cost[i]);

    sort (cost, cost+n);
    for (i = 0; i < m; i++)
        if (cost[i] < 0)
            sum += cost[i];

    printf ("%d\n", -1*sum);

    return 0;
}


/*

for (i = 0; i < n; i++){
        for (j = i+1; j <= m+1; j++){
            sum = (cost[i] +cost[j]);
            printf ("Sum = %d\n", sum);
        }
        //NL;
    }


    sum = n + m;
    if (sum % 2 == 0)
        printf ("%d\n",sum);
    else
        printf ("%d\n", sum+1);




*/
