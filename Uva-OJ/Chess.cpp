#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 100
#define row 15
#define col 14

void King (int a, int b){
    int ans;
    ans = ((a+1)/2) * ((b+1)/2);
    printf ("%d\n", ans);
}

void Queen (int a, int b){
    int ans;
    ans = min (a, b);
    printf ("%d\n", ans);
}

void knight (int a, int b){
    int res;
    res = ((a*b)+1) / 2;
    printf ("%d\n", res);
}

void rooks (int a, int b){
    int res;
    res = min (a, b);
    printf ("%d\n", res);
}

int main(){
    int tc, i, j, m, n, cnt, tmp, ans;
    char ch[5];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s%d%d", ch, &m, &n);
        if (ch[0] == 'r') rooks(m,n);
        else if (ch[0] == 'Q') Queen(m,n);
        else if (ch[0] == 'K') King(m, n);
        else knight(m, n);
    }
    return 0;
}


/*int main(){
    int tc, i, j, m, n, R_cnt, H_cnt, K_cnt, Q_cnt, cnt, tmp, ans;
    char ch[5];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s%d%d", ch, &m, &n);
        R_cnt = H_cnt = K_cnt = Q_cnt = 0;
        for (i = 1; i <= m; i++){
            for (j = 1; j <= n; j++){
                    if (i == j) R_cnt++;
                    else if ((i+j) % 2 == 0) K_cnt++;
            }
        }
        if (ch[0] == 'r') printf ("%d\n", R_cnt);
        else if (ch[0] == 'K') printf ("%d\n", K_cnt);
    }
    return 0;
}
*/
