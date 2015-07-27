#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 100
#define row 60
#define col 60
#define memo(y) memset(y ,0 ,sizeof(y))

map <string, string> mp;

int main (){
    int n, m, i, j, tmp, cnt;
//    char a[MAX], b[MAX], str[row][col];
    //char ans[row][col];
    string a, b, str, c;
    string ans[MAX];
    scanf ("%d %d", &n, &m);
    cnt = tmp = 0;
    for (i = 0; i < m; i++){
        //scanf ("%s %s", a, b);
        cin >> a >> b;
        //printf ("%d %d\n", a.size(), b.size());

        if (a.size() <= b.size()){
            //cout << a;
            //ans[cnt++] = a;
            //c = a;
            mp[a] = a;
        }
        //if (a.size() > b.size()) //cout << b;
          //  ans[cnt++] = b; //c = b;
        else{
            //cout << a;
           //ans[cnt++] = b;
           //c = a;
            mp[a] = b;
        }
    }
    for (i = 0; i < n; i++){
        cin >> str;
        cout << mp[str] << " ";
        //scanf ("%s", str[i]);

    }
//    for (i = 0; i < cnt; i++ ){
//        //cout << c[i];
//        cout << ans[i] << " ";
//    }
    puts ("");
    return 0;
}
