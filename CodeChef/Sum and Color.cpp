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


LLI arr[MAX], n;

LLI sum_digit (LLI x){
    LLI tmp=0, mod, div, cnt=0, sum=0, m;

    if (x == 0) return 0;

    m = x % 10;
    sum += m + sum_digit (x / 10);

    while (sum > 9){
        mod = sum % 10;
        tmp += mod + sum_digit (sum / 10);

        return tmp;
    }

    return sum;

}



int main(){
    int tc, i, j;
    LLI maxn, ans;
    scanf ("%d", &tc);

    while (tc--){
        scanf ("%lld", &n);
        for (i = 0; i < n; i++) scanf ("%lld", &arr[i]);

        //printf ("%lld\n", sum_digit (arr[0]));

        maxn = ans = 0;

        for (i = 0; i < n; i++){
            ans = sum_digit (arr[i]);
            //printf ("%lld\n", ans);

            if (maxn < ans)
                maxn = ans;
        }
        //printf ("%lld\n", maxn);


        if (maxn == 0)
            puts ("red");
        else if (maxn == 1)
            puts ("blue");

        else if (maxn == 2)
            puts ("pink");

        else if (maxn == 3)
            puts ("white");
        else if (maxn == 4)
            puts ("black");

        else if (maxn == 5)
            puts ("violet");
        else if (maxn == 6)
            puts ("cyan");
        else if (maxn == 7)
            puts ("yellow");

        else if (maxn == 8)
            puts ("green");
        else
            puts ("brown");

    }
    return 0;
}
