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


int main(){
    LLI tc, a, b, ans, tmp, cnt;
    char opa[2];

    scanf ("%lld", &tc);

    while (tc--){
        scanf ("%lld %s %lld", &a, opa, &b);

        if (opa[0] == '+'){
            ans = a + b;
            printf ("%lld\n", ans);
        }
        else if (opa[0] == '-'){
            ans = a - b;
            printf ("%lld\n", ans);
        }

        else if (opa[0] == '*'){
            ans = a * b;
            printf ("%lld\n", ans);
        }
        else if (opa[0] == '/'){
            ans = a / b;
            printf ("%lld\n", ans);
        }

        else
            puts ("Invalid Operator");
    }
    return 0;
}
