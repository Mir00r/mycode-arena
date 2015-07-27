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
#define MAX 100006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777
#define bug puts ("")



int main (){
    int tc, i, j;
    LLI n, a, b, sum, ans;

    scanf ("%d", &tc);

    while (tc--){
        scanf ("%d", &n);

        a = 1;
        b = 5;
        sum = 0;

        while (a != 0){
            a = n / b;
            sum = sum + a * (2*b + (a-1) * b) / 2;
            b *= 5;
        }

        printf ("%lld\n", sum);
    }
    return 0;
}



/*

LLI square (LLI s){
    return s*s;
}


LLI bigmod (LLI b, LLI p){

    if(p == 0)
        return 1;
    else if (p % 2 == 0)
        return square ( bigmod(b, p/2) );
    else
        return(b  * bigmod(b, p-1) ) ;
}



int main (){
    int tc;
    LLI n, ans, tmp, i;
    scanf ("%d", &tc);

    while (tc--){
        scanf ("%lld", &n);

        tmp = 0;
        ans = 1;
        for (i = 1; i <= n; i++){
            tmp = bigmod (i, i);
            ans *= tmp;
        }

        printf ("%lld\n", ans);
    }

    return 0;
}
*/
