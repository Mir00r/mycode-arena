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
#define MAX 9999
#define row 35
#define col 35

int main(){
    int tc, cs=1, i, j, k, l, n, m, p, cnt, tmp, ans;
    int a[row][col], b[MAX], check1, check2;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d%d", &n, &m, &k);
        for (i = 0; i < n; i++)
            for (j = 0; j < k; j++) scanf ("%d", &a[i][j]);
        scanf ("%d", &p);
        for (i = 0; i < p; i++) scanf ("%d", &b[i]);
        check1 = check2 = 0;
        for (i = 0; i < n; i++){
            //check1 = check2 = 0;
            for (j = 0; j < k; j++){
                for (l = 0; l < p; l++){
                    if (a[i][j] == b[l]){
                        check1 = 1; break;
                    }
                }
                if (check1 == 1) break;
                if (a[i][j] < 0){
                    for (l = 0; l < p; l++){
                        if (a[i][j] + b[l] == 0) break;
//                        if (l == p) check2 = 1;
                    }
                    if (l == p) check2 = 1;
//                  if (check2 == 1) break;
                }
                if (check2 == 1) break;
            }
            if (! (check1 || check2)) break;
        }
        if (i == n) printf ("Case %d: Yes\n", cs++);
        else printf ("Case %d: No\n", cs++);
    }
    return 0;
}

