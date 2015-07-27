#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <set>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1005
#define LLI __int64
#define row 101
#define col 101

int main(){
    int mat[row][col], i, j, k, bit, n, m, arr[row][col], ans;
    scanf ("%d %d", &n, &m);

    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            arr[i][j] = 1;


//    for (i = 1; i <= n; i++)
//        for (j = 1; j <= m; j++)
//            scanf ("%d", &mat[i][j]);

    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++){
            scanf ("%d", &mat[i][j]);
            if (mat[i][j] == 0){
                for (k = 1; k <= m; k++) arr[i][k] = 0;
                for (k = 1; k <= n; k++) arr[k][j] = 0;
            }
        }
    }

    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++){
            bit = 0;
            for (k = 1; k <= m; k++) bit |= arr[i][k];
            for (k = 1; k <= n; k++) bit |= arr[k][j];

            if (mat[i][j] != bit){
                    puts ("NO");
                    return 0;
            }
        }
    }

    puts ("YES");

    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++)
            printf ("%d ", arr[i][j]);
        puts ("");
    }
    return 0;
}
