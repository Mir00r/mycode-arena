#include <bits/stdc++.h>

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
#define row 100
#define col 100
#define White 0
#define Gray 1
#define Black 2
#define Nil -1
#define eps 1e9
#define mod 7477777
#define PI 3.1415926535897932384626433832795


int main (){
    LLI l, r, k, m=1, check=0;

    scanf ("%lld %lld %lld", &l, &r, &k);

    while ( m <= r ){
        if ( m >= l ){
            printf ("%lld ", m);
            check++;
        }

        if ( r / k < m )
            break;

        m *= k;
       // printf ("M = %lld\n", m );
    }

    if ( check == 0)
        puts ("-1");
    return 0;
}
