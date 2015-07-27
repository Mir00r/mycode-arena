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
#define row 30
#define col 30
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001

bool boro (string s){
    int len, i;
    len = s.length();
    for (i = 0; i < len; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            return true;

    return false;
}


bool choto (string s){
    int len, i;
    len = s.length();
    for (i = 0; i < len; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            return true;

    return false;
}



int main(){
        //char s[MAX], t[MAX], ch;
    string s, t, ch;

    int i, j, slen, tlen, ans, alpa[26], w, y, diff, num;
   // scanf ("%s %s", s, t);

    cin >> s >> t;

    //    slen = strlen (s);
//    tlen = strlen (t);

    slen = s.length ();
    tlen = t.length ();
    w = y = 0;


    for (i = 0; i < tlen; i++){
        if (choto(s) && boro(t)) w++;
    }


    return 0;
}
