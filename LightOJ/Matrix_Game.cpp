#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long int
#define MAX 99999
#define row 100
#define col 100


int main(){
    int tc, cs=1, m, n, i, j, sum, arr[MAX], ans, cnt, tmp;
    int matrix[row][col];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &m, &n);
        memset (arr, 0, sizeof (arr));
        sum = 0;
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                scanf ("%d", &matrix[i][j]);
                arr[i] += matrix[i][j];
            }
            sum ^= arr[i];
        }
        printf ("Case %d: ", cs++);
        if (sum) puts
         ("Alice");
        else puts ("Bob");
    }
    return 0;
}
