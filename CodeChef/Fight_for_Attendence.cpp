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
#define row 205
#define col 205
#define MAX 50
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 1000000007

LLI gcd (LLI x, LLI y){
    if (y == 0)
        return x;
    else
        return gcd (y, x%y);
}


int main(){
    LLI tc, cs=1, a, b, c, sum, ans;
    scanf ("%lld", &tc);

    while (tc--){
        scanf ("%lld %lld %lld", &a, &b, &c);
       // sum = a + b;

        ans = gcd (a, b);

        if (c % ans == 0)
            printf ("Case %lld: Yes\n", cs++);
        else
            printf ("Case %lld: No\n", cs++);
    }
    return 0;
}
