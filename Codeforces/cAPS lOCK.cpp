#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define row 205
#define col 205
#define MAX 300006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 1000000007


int main(){
    int len, i, j, ans, tmp;
    string str, ch;

    cin >> str;
    bool check = true;

    len = str.length ();

    for (i = 1; i < len; i++){
        if (str[i] >= 'a'){
            check = false;
            break;
        }
    }

    if (check){
        for (i = 1; i < len; i++)
            str[i] += 32;

        if (str[0] < 'a')
            str[0] += 32;
        else
            str[0] -= 32;
    }


    cout << str << endl;

    return 0;
}


/*
//    if ( str[0] >= 'a' && str[0] <= 'z')
//        str[0] = str[0] - 32;
//
//    for (i = 1; i < len; i++){
//        if (str[i] >= 'A' && str[i] <= 'Z')
//            str[i] = str[i] + 32;
//    }

    for (i = 0; i < len; i++){
        if (str[i] >= 'a')
            check = true;
    }

    for (i = 0; i < len; i++){
        if (!check){

            if (str[i] < 'a')
                str[i] += 32;
            else
                str[i] -= 32;
        }
    }


*/
