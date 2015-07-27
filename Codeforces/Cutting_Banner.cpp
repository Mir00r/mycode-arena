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
#define row 32
#define col 32
#define MAX 1006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777



char text[][12] = {"C", "O", "D", "E", "F", "O", "R", "C", "E", "S"};
int ans[MAX], len;
char str[MAX];



int main(){

    int i , j, tmp, cnt;

    scanf ("%s", str);
    len = strlen (str);

    memo (ans, 0);
    cnt = 0;

    if (len < 10)
        puts ("NO");
    else
        for ( i = 0; i < len ; i++){
            if (str[i] == text[0][i]){
                puts ("ok");
                ans[cnt++];
                //continue;
            }
//            else{
//                break;
//            }
        }

    printf ("%d\n", cnt);
    return 0;
}
