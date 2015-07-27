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

#define LLI long long int
#define ULL unsigned long long int
#define MAX 2005
#define alpa 26
#define pb push_back
#define NL puts ("")


int main (){
    int tc, i, j, len1, len2, cnt[MAX], tmp, ans;
    char jl[MAX], st[MAX];

    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s %s", jl, st);

        len1 = strlen (jl);
        len2 = strlen (st);
        memset (cnt, 0, sizeof (cnt));
        ans = 0;

        for (i = 0; i < len1; i++)
            cnt[jl[i]] = 1;

        for (i = 0; i < len2; i++){
            if (cnt[st[i]] == 1)
                ans++;
        }


        printf ("%d\n", ans);
    }
    return 0;
}
