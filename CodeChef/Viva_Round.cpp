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
#define row 70
#define col 70
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int main(){
    int n, c, i, j, ans, tmp, cnt, tc, sum;
    int p, q, val, check, arr[MAX];
    scanf ("%d", &tc);

    while (tc--){

        scanf ("%d %d", &n, &c);
        CLR (arr);
        for (i = 0; i < c; i++){
            sum = 0;
            //CLR (arr);
            scanf ("%d", &check);

            if (check == 0){
                scanf ("%d %d %d", &p, &q, &val);
                for (j = p; j <= q; j++)
                    arr[j] += val;
            }
            else{
                scanf ("%d %d", &p, &q);
                for (j = p; j <= q; j++)
                    sum += arr[j];
                printf ("%d\n", sum);
            }
        }
    }
    return 0;
}

