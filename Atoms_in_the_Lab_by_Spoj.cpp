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
#define row 205
#define col 205
#define MAX 30006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777
#define PI 3.1415926535897932384626433832795

/*
LLI square(LLI s){
    return s*s;
}


LLI bigmod (LLI b, LLI p ){

    if(p == 0)
        return 1;
    else if (p % 2 == 0)
        return square (bigmod(b, p/2)) ;
    else
        return b * bigmod(b, p-1 ) ;
}

*/

int main (){
    LLI k, n, m, modu, tmp;
  //  long double k, n, m, modu, tmp;
    int tc, i, ans;

    scanf ("%d", &tc);

    while (tc--){
        scanf ("%lld %lld %lld", &n, &k, &m);

        tmp = n;
        ans = 0;

        while (1){
            if ( (double) tmp * (double) k > (double) m )
                break;

            tmp *= k;
            ans++;
        }
        printf ("%d\n", ans);


        /*
        modu = bigmod (n, k);

        if (modu > m)
            ans = modu / m;
        else
            ans = m / modu;

        printf ("%lld\n", ans);
        */


        /*
        while ( n <= m ){
           // puts ("ok");
            n *= k;

            if ( n <= m )
                ans++;
            else
                break;
        }
        printf ("%d\n", ans);
        */

    }
    return 0;
}
