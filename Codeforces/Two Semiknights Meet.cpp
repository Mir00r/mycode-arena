#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 100000
#define row 100
#define col 100

int main(){
    int tc, i, j, tmp, cnt, ans, save[row][col];
    char grid[row][col];
    scanf ("%d", &tc);
    while (tc--){
        for(i = 0; i < 8; i++) scanf ("%s", grid[i]);
        cnt = 0;
        for (i = 0; i < 8; i++){
            for (j = 0; j < 8; j++){
                if (grid[i][j] == 'K'){
                    save[cnt][0] = i+1;
                    save[cnt][1] = j+1;
                    cnt++;
                }
            }
        }
        if ((save[1][0] - save[0][0]) % 4 == 0 && (save[1][1] - save[0][1]) % 4 == 0)
            puts("YES");
        else puts ("NO");
    }
    return 0;
}
