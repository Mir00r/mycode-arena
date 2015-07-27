#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9999
#define row 1025
#define col 1025

int killer[row][col];
int main(){
    int tc, d, n, x, y, pop_size, i, j, k, maxn;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &d, &n);
        memset (killer, 0, sizeof (killer));
        maxn = 0;
        for (k = 0; k < n; k++){
            scanf ("%d%d%d", &x, &y, &pop_size);
            for (i = x-d; i <= x+d; i++)
                for (j = y-d; j <= y+d; j++)
                    if(i >= 0 && i <= 1024 && j >= 0 && j <= 1024) killer[i][j] += pop_size;
        }
        for (i = 0; i < 1024; i++)
            for (j = 0; j < 1024; j++)
                if (maxn < killer[i][j]){
                    maxn = killer[i][j];
                    x = i;
                    y = j;
                }
        printf ("%d %d %d\n", x, y, maxn);
    }
    return 0;
}
