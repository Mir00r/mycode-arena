
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 100005
#define inf 1000000009

int main(){
    #ifdef Mir00r
        freopen ("input.txt", "r", stdin);
        //freopen ("output.txt", "w", stdout);
    #endif

    LLI tc, i, j, jersy[MAX], res, x,cnt;
    //double s, area, a, b, c, redius;
    scanf ("%lld", &tc);
    while (tc--){
        for (i = 0; i < 15; i++) scanf ("%lld", &jersy[i]);
        scanf ("%lld", &x);
        res = 0;
        for (i = 0; i < 15; i++)
            res ^= jersy[i];

        cnt = 0;
        while (res){
            if (res & 1) cnt++;
            res >>= 1;
        }
        //printf ("Res = %lld     Cnt = %d\n", res, cnt);
        if (cnt > x) puts ("Yes");
        else puts ("NO");
    }
    return 0;
}



