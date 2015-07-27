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


//string name
int alpa[26];

int main(){
    set <char> st;
    int tc, n, i, j, ans, tmp, cnt, sije, maxn;
   // int alpa[26];
    char name[row];

    scanf ("%d", &tc);
    while (tc--){
        cnt = 0;
        //for (i = 0; i < 26; i++) alpa[i] = 0;

        scanf ("%d", &n);
        for (i = 0; i < n; i++){
            //cin >> name;
            //st.insert (name[i]);
            scanf ("%s", name);

            if (alpa[name[0] - 'A'] == 0){
               // puts ("ok");
                alpa[name[0] - 'A'] = 1;
                cnt++;
            }
        }
        printf ("%d\n", cnt);
    }
    return 0;
}

/*

*/
