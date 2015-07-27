#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define pb push_back
#define MAX 100005

//map <string, int> mp;
//map <string, int>::iterator it;

    char str[MAX];


int paranthesis (int ln){
    int i, j, maxn = 0, bracket = 0;

    for (i = 0; i < ln; i++){
        if (str[i] == '(') bracket++;
        else{
            bracket--;
        }

        if (bracket > maxn) maxn = bracket;
    }
    return maxn;
}

int main(){
    int len, i, j, tc, ans, tmp;

    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s", str);
        len = strlen (str);
        ans = paranthesis(len);

        for (i = 0; i < ans; i++)
            printf ("(");

        for (i = 0; i < ans; i++)
            printf (")");
        puts ("");
    }
    return 0;
}



/*
int main(){
    int tc, cs=1, i, j, len, tmp, cnt, ans, check;
    //char str[MAX], ch[MAX];
    string str;
    scanf ("%d", &tc);
    while (tc--){
        cin >> str;
        len = str.length ();
        printf ("Pre_Len = %d\n", len);

        for (i = 1; i <= len; i++){
            tmp = i;
            if (str[i] == ')' && str[tmp+1] == '('){
                printf ("I = %d\n", i);
                puts ("ok");
                str.erase (i, tmp+1);
                //str.erase (str.begin()+i, str.end()- i);
            }


        }
        int after = str.length ();
        printf ("After = %d\n", after);
        cout << str << endl;
    }
    return 0;
}
*/
