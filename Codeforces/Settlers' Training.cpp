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
#define alpa 26
#define row 2005
#define col 2005
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)

int main(){
    int n, k, i, j, cnt, tmp, rank[MAX];
    scanf ("%d %d", &n, &k);
    for (i = 0; i < n; i++) scanf("%d", &rank[i]);

    cnt = tmp = 0;
   // tmp = rank[0];

    while (rank[0] != k){
        for (i = 0; i < n; i++){
            if (rank[i] != rank[i+1])
                rank[i]++;
            //printf ("Rank = %d\n", rank[i]);
        }

        cnt++;
    }

    printf ("%d\n", cnt);
    return 0;
}
