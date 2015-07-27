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

#define LLI long long
#define ULL unsigned long long int
#define MAX 250005+5
#define row 55
#define col 55
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 1e9
#define mod 1000000007


struct node{
    int x, y;
}arr[MAX];


int task, prog;


int main(){
    int tc, cs=1, i, j, ans, cnt, tmp, sum, diff;

    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d %d", &task, &prog);

        for (i = 0; i < prog; i++)
            scanf ("%d %d", &arr[i].x, &arr[i].y);

        sum = diff = tmp = ans = 0;

        for (i = 0; i < prog; i++){
            sum += abs (arr[i].x - arr[i].y);
        }

        if (sum == task)
            ans = sum;
        else
            ans = (sum - prog) ;

        printf ("Case %d: %d\n", cs++, ans % mod);
    }
    return 0;
}
