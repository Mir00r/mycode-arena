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
#define row 32
#define col 32
#define MAX 3006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)a
#define eps 1e9
//#define mod 7477777


int main (){
    LLI tc, n, day[MAX], i, j, cnt, tmp, res[MAX];
    set <LLI> st;

    scanf ("%lld", &tc);

    while (tc--){
        memo (res, 0);
        cnt = 0;

        scanf ("%lld", &n);
        for (i = 0; i < n; i++){
            scanf ("%lld", &day[i]);
            //st.insert (day[i]);
            //scanf ("%lld", &tmp);
           // day[tmp]++;
            res[ day[i] ]++;
        }

        //printf ("%lld\n", st.size());


        for (i = 0; i < 101; i++){
            if (res[i] > 0)
                cnt++;
        }

        printf ("%lld\n", cnt);
        st.clear();
    }

    //st.clear ();
    return 0;
}

