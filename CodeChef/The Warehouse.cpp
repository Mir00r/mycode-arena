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

#define LLI __int64
#define ULL unsigned long long int
#define MAX 100002
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


char color[MAX];
int len;


int cal (char r, char g, char b){
    int rc=0, gc=0, bc=0, cc=0, i;
    len = strlen (color);

    for (i = 0; i < len; i++){
        if (color[i] == 'r'){
            cc += (gc+bc);
            rc++;
        }
        else if (color[i] == 'g'){
            cc += bc;
            gc++;
        }
        else
            bc++;
    }
    return cc;
}



int main(){
    set <char> st;
    int tc, i, ans, tmp, cnt, sije, maxn;


    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s", color);
        maxn = inf;

        ans = cal ('r', 'g', 'b');
        if (ans < maxn)
            maxn = ans;

        ans = cal ('r', 'b', 'g');
        if (ans < maxn)
            maxn = ans;

        ans = cal ('b', 'r', 'g');
        if (ans < maxn)
            maxn = ans;

        ans = cal ('b', 'g', 'r');
        if (ans < maxn)
            maxn = ans;

        ans = cal ('g', 'b','r');
        if (ans < maxn)
            maxn = ans;

        ans = cal ('g', 'r', 'b');
        if (ans < maxn)
            maxn = ans;

        printf ("%d\n", maxn);
    }
    return 0;
}

/*
for (i = 0; i < len; i++){
            st.insert (color[i]);
        }
        sije = st.size ();


      //  if (ans == 3) puts ("0");

            printf ("%d\n", ans-1);
        st.clear();

*/
