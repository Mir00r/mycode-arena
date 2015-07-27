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
#define LLI long long
#define LL __int64
#define ULL unsigned long long
#define row 501
#define col 501
#define MAX 100000+6
#define jora pair <LLI, LLI>
#define ff first
#define ss second
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777

int n, m, mat[row][col], q;

void change (int x, int y){
    int i, j;

    if (mat[x][y] == 1)
        mat[x][y] = 0;
    else
        mat[x][y] = 1;
}


//int row_update (int x){
//    int i, j, cnt=0, res=0;
//
////    for (i = 1; i <= x; i++)
//        for (j = 1; j <= m; j++){
//            if (mat[x][j] == 1)
//                cnt++;
//            else
//                cnt = 0;
//            res = max (res, cnt);
//        }
//    return res;
//}
//
//int col_update (int x){
//    int i, cnt=0, res=0;
//
//        for (i = 1; i <= n; i++){
//            if (mat[x][i] == 1)
//                cnt++;
//            else
//                cnt = 0;
//            res = max (res, cnt);
//        }
//    return res;
//}



void get_res (){
    int i, j, cnt, ans =0;

    for (i = 1; i <= n; i++){
        cnt = 0;
        for (j = 1; j <= m; j++){
            if (mat[i][j] == 1)
                cnt++;
            else
                cnt = 0;
            ans = max (ans, cnt);
        }
    }

    printf ("%d\n", ans);
}



int main(){
    int i, j, k, cnt, tmp, ans=0, a=0, b=0;

    scanf ("%d %d %d", &n, &m, &q);

    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            scanf ("%d", &mat[i][j]);

    while (q--){
        int x, y;
        scanf ("%d %d", &x, &y);
        change (x, y);
//        a = row_update (x);
//        b = col_update (y);

        //ans = max (a, b);

       // printf ("%d\n", get_res());

        get_res();
    }

    return 0;
}



