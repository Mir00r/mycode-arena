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
#define row 55
#define col 55
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

char str[MAX];
int in1, in2;

bool is_pali (int x, int y){

    while (x < y){
        if (str[x] != str[y])
            return false;
        x++;
        y--;
    }

    return true;
}


void check_str (int ln){
    int maxn = 0, tmp = 0, i, j;
    in1 = in2 = 0;

    for (i = 0; i < ln; i++){
        for (j = 0; j < ln; j++){
            if (is_pali (i, j) ){
                tmp = j - i + 1;
                if (maxn < tmp){
                    maxn = tmp;
                    in1 = i;
                    in2 = j;
                }
            }
        }
    }

}

int main (){
    int ans, len, i;

    scanf ("%s", str);
    len = strlen (str);

    check_str (len);

    for (i = in1; i <= in2; i++)
        printf ("%c", str[i]);
    NL;

    return  0;
}
