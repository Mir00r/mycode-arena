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
#define row 105
#define col 105
#define MAX 3006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


int main (){
    int i, j, k, len, div, modu;
    char str[MAX], ch;
    bool check = false;

    scanf ("%d", &k);
    scanf ("%s", str);

    len = strlen (str);

    if (k == 1 && str[0] == str[len-1]){
        puts ("YES");
        printf ("%s", str);
    }
    else{
        if (k > len){
            puts ("NO");
            return 0;
        }
        else{
            div = len / k;
            ch = str[0];

            int a = div - 1;
            int b = 0;
         //   if (str[0] == str[div - 1])
            for (i = 0; i < len; i += a ){

                if (str[i] == str[a] || str[i] != str[a]){
                    check = true;
                    a = ;
                }
            }
        }
    }
    return 0;
}
