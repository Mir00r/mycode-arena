#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 1000
#define row 100
#define col 100
#define inf (1 << 29)
#define pb push_back

int main(){
    int n, len, i, j, ans, cnt, tmp;
    string str;
    scanf ("%d", &n);
    if (n == 1) str.pb('a');
    else if (n == 2){
        str.pb('a');
        str.pb('b');
    }
    else if (n == 3){
        str.pb('a');
        str.pb('b');
        str.pb('c');
    }
    else if (n == 4){
        str.pb('a');
        str.pb('b');
        str.pb('c');
        str.pb('d');
    }
    else{
        str.pb('a');
        str.pb('b');
        str.pb('c');
        str.pb('d');
        for ( i=4 ; i < n; i++)
            str.pb( str[i-4] );
    }

    cout << str << endl;

    return 0;
}

