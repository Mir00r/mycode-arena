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
#define MAX 30006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777
#define PI 3.1415926535897932384626433832795




int main(){

    int n, tc, i, j, tmp, num, cnt, arr[MAX];
    int flag;

    scanf ("%d", &tc);
   // memo (arr, 0);

    while (tc--){

        flag = 0;
        memo (arr , 0);

        scanf ("%d", &n);
        for (i = 0; i < n; i++ ){
            scanf ("%d", &num);

            if ( arr[num + 1] == 0 ) {
                arr[num + 1] = 1;
                flag++;
            }

            else if ( arr[ n - num ] == 0 ){
                arr[ n - num ] = 1;
                flag++;
            }
        }

        if (flag == n )
            puts ("YES");
        else
            puts ("NO");
    }
    return 0;
}


