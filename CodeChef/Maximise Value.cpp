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
#define row 2005
#define col 2005
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int n, s, res[MAX];

struct node{
    int sije, val;
}arr[MAX];

bool cmp (node a, node b){
    //if (a.val == b.val) return a.val < b.val;
    return a.val < b.val;
}




int main(){
    int i, j, ans, tmp, cnt, maxn, minx, sum, tot;

    while (scanf ("%d %d", &s, &n) == 2){
        for (i = 0; i < n; i++)
            scanf ("%d %d", &arr[i].sije, &arr[i].val);

        minx = inf;
        maxn = -inf;
        sum = tot = tmp = 0;
        CLR (res);

      //  ans = knapsack();
        for (i = 0; i < n; i++){

            for (j = s; j >= 1; j--){

                if (j - arr[i].sije >= 0){

                    tmp = res[j - arr[i].sije] + arr[i].val;
                   // printf ("Tmp = %d\n", tmp);

                    if (tmp > res[j]){
                        res[j] = tmp;
                        if (res[j] > sum)
                            sum = res[j];
                    }
                }
            }
        }
        printf ("%d\n", sum);
    }
    return 0;
}



/*

// Second Way

        for (i = 0; i < n; i++){
            tot = s - arr[i].sije;
            for (j = tot; j >= 0; j--){
                tmp = j + arr[i].sije;
                res[tmp] = max (res[j],  res[j] + arr[i].val);
            }
        }

        printf ("%d\n", res[s]);




int dp[row][col]


//int knapsack();

int knapsack (){
    int i , j, tmp;

    for (i = 0; i <= n; i++){
        for (j = 0; j <= s; j++){
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (arr[i-1].sije <= s)
                dp[i][j] = max (arr[i-1].val + dp[i-1][j- arr[i-1], dp[i-1][j] );
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][s];
}



   // First Way




*/



/*

        sort (arr, arr+n, cmp);
//        for (i = 0; i < n; i++) printf ("%d %d\n", arr[i].sije, arr[i].val);

        for (i = n-1; i >= 0; i--){
            if (arr[i].sije <= s){
                sum += arr[i].val;
                s -= arr[i].sije;
               // printf ("Tmp = %d\n", tmp);
            }
        }
        printf ("%d\n", sum);


*/
