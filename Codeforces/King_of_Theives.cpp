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

int main(){
    int n, i, j, k, cnt, ans, tmp;
    char str[MAX];

    scanf ("%d %s", &n, str);

  //  cnt = 0;
    bool check = false;

    for (i = 1; i < n; i++){
        for (j = 0; j < n; j++){
            cnt = 0;
            for (k = j; k < n; k += i){
                if (str[k] == '*')
                    cnt++;
                else
                    break;

                if (cnt == 5){
                    check = true;
                    break;
                }
            }
        }
    }

    if (check)
        puts ("yes");
    else
        puts ("no");

    return 0;
}
