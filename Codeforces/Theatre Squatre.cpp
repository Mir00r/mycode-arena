#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 99999

int main(){
    LLI m, n, a, i, j, cnt, tmp, ans;
    scanf ("%I64d %I64d %I64d", &n, &m, &a);
        //ans = ceil (n+a/a) * ceil (m+a/a);
        //ans = abs( (m + n) - (a*a) );
        ans = ((n + a-1) / a) * ((m + a-1) / a);
        printf ("%I64d\n", ans);

    return 0;
}



/*int main(){
    LL m, n, a, i, j, cnt, tmp, ans;
    scanf ("%I64d %I64d %I64d", &n, &m, &a);
        ans = ((n+a-1)/a) * ((m+a-1)/a);
        printf ("%I64d\n", ans);

    return 0;
}*/
