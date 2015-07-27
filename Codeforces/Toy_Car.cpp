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
#define row 110
#define col 110
#define MAX 3006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1LL << 60)
#define eps 1e9
#define mod 7477777

int mat[row][col], n;


int main(){
    int i , j, a, b, x, y, res[MAX], cnt;
    bool check = false;
    scanf ("%d", &n);

    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf ("%d", &mat[i][j]);

    a = b = cnt = x = y = 0;
    memo (res, 0);

    for (i = 1; i <= n; i++){
        check = false;
        for (j = 1; j <= n; j++){
            if (mat[i][j] == 1 || mat[i][j] == 3)
                check = true;
        }

        if (check == false){
            cnt++;
            res[a++] = i;
        }
    }

    printf ("%d\n", cnt);
    for (i = 0; i < a; i++)
        printf ("%d ", res[i]);

    NL;
    return 0;
}


/*

    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if (mat[i][j] == 1){
                cnt++;
                //a = i;
                x = abs (i - mat[i][j] );
                y = abs (j - mat[i][j] );

               // res[a++] = i;
                res[a++] = (x  + y);

               // puts ("i ok");

            }
            if (mat[i][j] == 2){
               // puts ("j ok");
                cnt++;
                //b = j;
                x = abs (i - mat[i][j] );
                y = abs (j - mat[i][j] );

               res[a++] = (x + y);
               // res[a++] = j;
            }
        }
    }

    sort (res, res+a);

    printf ("%d\n", cnt);
    for (i = 0; i < cnt; i++)
        printf ("%d ", res[i]);

*/
