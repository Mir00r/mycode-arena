
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
#define LLI long long
#define LL __int64
#define ULL unsigned long long
#define row 32
#define col 32
#define MAX 100000+6
#define jora pair <LLI, LLI>
#define ff first
#define ss second
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


string str;

bool is_pali (int x, int y){

    while (x < y){
        if (str[x] != str[y])
            return false;
        x++;
        y--;
    }

    return true;
}



int main(){
    int i, j, k, len, last, div, ans, tmp=0;
    bool check = true;

    cin >> str;
    scanf ("%d", &k);

    len = str.length();

    div = len / k;
    last = div - 1;


    if (len % k != 0){
        puts ("NO");
        return 0;
    }
    else{
        for (i = 1; i <= k; i++){
            check = is_pali (tmp, last);

            if (!check)
                break;
            tmp += div;
            last += div;
        }

        if (check)
            puts ("YES");
        else
            puts ("NO");
    }

    return 0;
}
