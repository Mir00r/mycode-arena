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
#define ULL unsigned long long
#define MAX 20005
#define row 20
#define col 20
#define eps 1e-9

//LLI height[MAX];

int main(){
    int tc, cs=1, k, n, i, j, cnt, sum, tmp, ans, check;
    int height[MAX], get_sol;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &n, &k);
        cnt = tmp = ans = 0;
        for (i = 0; i < n; i++) scanf ("%d", &height[i]);
        sort (height, height+n);
        get_sol = n - k;
        int tol_shor_Hei = 1000000000;
        if (k == 1) {
            puts ("0");
        }else{
            for (i = 0; i <= get_sol; i++){
                tmp = abs (height[i + k - 1] - height[i]);
                //printf ("TMp = %d\n", tmp);
                if (tmp < tol_shor_Hei) tol_shor_Hei = tmp;
            }
            printf ("%d\n", tol_shor_Hei);
        }
    }
    return 0;
}

