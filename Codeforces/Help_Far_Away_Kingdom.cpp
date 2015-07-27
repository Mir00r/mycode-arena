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
#define row 205
#define col 205
#define MAX 1006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


vector <char> v, ss;
string str;

void call(){
    int i, j, k, len, tmp;
    len = v.size();
    tmp = 1;

    while(1){
        len--;
        k = (str[len]-48) + tmp;
        j = k % 10;
        tmp = k / 10;
        ss.pb(j+48);

        if(tmp == 0 && len == 0) break;
    }

    for( i = ss.size()-1 ; i >= 0 ; i-- )
        cout << ss[i];
    return;
}


int main (){
    //puts ("OK");
    int i, j, k, len, dot, last;

    cin >> str;
    len = str.length();
    dot = -1;
    last = -1;

    for( i = 0 ; i < len ; i++ ){
        if(str[i] == '.'){
            dot = i+1;
            last = i-1;
            break;
        }
        else
            v.pb(str[i]);
    }

    if(str[last] == '9')
        printf("GOTO Vasilisa.");

    else if(str[last] != '9' && str[dot] - 48 < 5 ){
        for( i = 0 ; i < v.size() ; i++ )
            cout << v[i];
    }
    else if(str[last] != '9' && str[dot]-48 >= 5){
        call();
    }

    ss.clear();
    v.clear();
    cout << endl;
    return 0;
}
