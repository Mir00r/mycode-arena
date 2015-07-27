#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsinged long long
#define MAX 305
#define row 305
#define col 15


int main(){
    int n, p, t, r;
    int value_p[MAX], t_n, p_n, t_o_s, judg;
    int tot[MAX], solve[row][col];
    int cs=1, i, j, cnt, maxn, minx, tmp;
    while (scanf ("%d %d %d %d", &n, &p, &t, &r) == 4){
        if (n == 0 && p == 0 && t == 0 && r == 0) break;
        memset (tot, 0, sizeof (tot));
        memset (solve, 0, sizeof (solve));
        maxn = 0;

        for (i = 0; i < p; i++) scanf ("%d", &value_p[i]);
        for (i = 0; i < r; i++){
            scanf ("%d %d %d %d", &t_n, &p_n, &t_o_s, &judg);
            if (judg == 0)
                solve[t_n - 1][p_n - 1] = 1;
        }
//        memset (tot, 0, sizeof (tot));
//        maxn = 0;

        for (i = 0; i < t; i++){
            for (j = 0; j < p; j++){
                if(solve[i][j] == 1)
                    tot[i] += value_p[j];
            }
        }

        for (i = 0; i < t; i++){
            if (tot[i] > tot[maxn])
                maxn = i;
        }

        printf ("Contest %d Winner: ", cs++);
        for (i = 0; i < t; i++){
            if (tot[i] == tot[maxn]){
                if (i != maxn){
                    printf (" and ");
                }
                printf ("Team %d", i+1);
            }
        }
        puts ("");
    }
    return 0;
}
