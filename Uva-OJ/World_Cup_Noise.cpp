#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long int
#define MAX 1000
#define eps 1e9
#define memo (array, value) memset (array, value, sizeof (array))

LLI fibo[MAX];

void fibo_series (){
    fibo[0] = 1;
    fibo[1] = 2;
    fibo[2] = 3;
    for (int i = 3; i < 52; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        //printf ("%lld\n", fibo[i]);
    }
}

int main(){
    fibo_series();
    LLI n, tc, cs=1, i, j, cnt, tmp, ans;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%d", &n);
        printf ("Scenario #%lld:\n%lld\n\n", cs++, fibo[n]);
        //if (tc) puts ("");
    }
    return 0;
}

/*int main(){
    int n, tc, cs=1, i, j, cnt, tmp, ans;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        ans = n + (n-1);
        if (n == 1) printf ("Scenario #%d:\n2\n", cs++);
        else
            printf ("Scenario #%d:\n%d\n", cs++, ans);
        if (tc) puts ("");
    }
    return 0;
}
*/
