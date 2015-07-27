#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 32
#define col 32
#define MAX 10006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
//#define mod 7477777

//struct info {
//    int time,
//}




int main(){
    int tc, i, j;
    LLI n, d, time[MAX], sum, tmp, ans, mod, diff, div, requ;

    scanf ("%d", &tc);

    while (tc--){
        scanf ("%lld %lld", &n, &d);

        sum = tmp = ans = diff = mod = div =  0;

        for (i = 0; i < n; i++){
            scanf ("%lld", &time[i]);
            sum += time[i];

        }

        diff = d - sum;
        requ = sum + (n-1) * 10;

        //if (diff % 5 == 0)
           if (requ <= d)
            printf ("%lld\n", diff / 5);
        else
            puts ("-1");

    }

    return 0;
}
