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
#define MAX 100005
#define alpa 26
#define row 2005
#define col 2005
#define pb push_back
#define NL puts ("")

int n, k, arr[MAX];


/*int fact (int x){
    int i, tot =1;
    for (i = 1; i <= x; i++)
        tot *= i;
    return tot;
}*/


//long double fact(int p){
//    long double facts = 1;
//    int i;
//    for(i = 1; i <= p; i++)
//        facts = facts * i;
//    return(facts);
//}

int main(){
    int ans, tmp, a, b, maxn;
    int tc, i, j, tot;
    scanf ("%d", &tc);

    while (tc--){
        scanf("%d %d", &n, &k);
        //maxn = -1
        for (i = 0; i < k; i++) scanf ("%d", &arr[i]);
        sort (arr, arr+k);

        //a = (int)fact (n);
        b = arr[k-1];

        //printf ("Fact_res = %d  MAx = %d\n\n", a, b);
        //ans = (int)fact(n) % b;
        tot = 1;
        for (i = 2; i <= n; i++)
            tot = (tot*i) % b;

        printf ("%d\n", tot);
    }
    return 0;
}
