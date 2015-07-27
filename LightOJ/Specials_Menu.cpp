#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 70
#define row 70
#define col 70

LLI dp[row][col];
char str[MAX];

LLI khoj (LLI indx, LLI ln){
    if (indx > ln) return 0;
    if (indx == ln){
        //dp[indx][ln] = 1;
        return 1;
    }
    LLI &res = dp[indx][ln];
    if (res != -1) return res;

    if (str[indx] == str[ln])
        res = 1 + khoj (indx+1, ln) + khoj (indx, ln-1);
    else
        res = khoj (indx+1, ln) + khoj (indx, ln-1) - khoj (indx+1, ln-1);

    return res;
}

int main (){
    LLI tc, cs=1, i, j;
    LLI ans, len;
    scanf ("%lld", &tc);

    while (tc--){
        memset (dp, -1, sizeof (dp));
        ans = 0;
        scanf ("%s",str);
        len = strlen(str);
        //ans = khoj (0, len-1);
        //printf ("Case: %lld: %lld\n", cs++, ans);
        printf ("Case %lld: %lld\n", cs++, khoj(0, len-1));
    }
    return 0;
}
