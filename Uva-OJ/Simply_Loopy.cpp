#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
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
#define MAX 100006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777

LLI lolz[MAX];


/*
LLU lol(int n){
    LLU ret = 0 , i , j , k , l , m;
    for( i = 1 ; i <= n ; i++ )
        for( j = 1 ; j <= n ; j++ )
            for( k = 1 ; k <= n ; k++ )
                for( l = 1 ; l <= n ; l++ )
                    for( m = 1 ; m <= n ; m++ )
                        if( i + j + k + l + m == n )
                            ret = (ret + i*i + j*j + k*k + l*l + m*m)% mod;
    return ret ;
}

*/


LLI equa (LLI n){
    return ( (n * (n - 1) * (n - 2) )/ 6 ) % mod;
}

void sieve (){
    int i;
    for (i = 3; i <= MAX; i++)
        lolz[i] = equa (i);
}




int main(){
    sieve ();

    int tc, cs=1;
    LLI x, ans, i, j;
    scanf ("%d", &tc);

 //   memo (lolz, 0);

    while (tc--){
        scanf ("%lld", &x);

        ans = 0;
        for (i = 1; i <= x-4; i++){
            ans += (i * i) % mod * lolz[x - i - 1] % mod;
            ans %= mod;
        }

        printf ("Equa = %lld\n", equa(x));

//        printf ("Case %d: %lld\n", cs++, lol (x) );

        printf ("Case %d: %lld\n", cs++, (ans * 5) % mod);


       // printf ("%d\n", x % mod);
    }


    return 0;
}
