#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long int
#define MAX 100000
#define row 1009
#define col 1009
#define pb push_back
#define inf (1 << 29)
#define mod 1000000007

int n, m, p;
int memo[row][col], visit[row][col], grid[row][col], block[row][col];
int dir[2][2]={ {0,1}, {1,0} };


bool istrue(int r, int c){
    if(r >=0 && r < n && c >= 0 && c < m) return true;
    return false;
}


/*int dp (int r, int c){
    int ret, tag, i, j, ax, bx;

    if (r == m && c == n){
        memo[r][c] = 1;;
        return 1;
    }

    visit[r][c] = 1;

//    int &res = memo[r][c];
//    if (res != -1) return res;
    int res = 0;
    for (i = 0; i < 2; i++){
        ax = r + dir[i][0];
        bx = c + dir[i][1];

        if (istrue(ax, bx) && block[ax][bx] == 0){
            if (visit[ax][bx] == 1)
                res = (res + memo[ax][bx]) % mod;

            else if (visit[ax][bx] == 0){
                int tmp = dp(ax, bx);
                res = (res + tmp) % mod;

            }
        }
    }
    res = memo[r][c] % mod;
    return res;
}
*/

int dp(int r, int c){

    if(r == m && c == n) return visit[r][c];


    int res = memo[r][c];
    if(res !=-1) return res;

    int ret, teg;
    ret = -inf;
    teg = -inf;

    if(istrue(r ,c+1)) ret = dp(r, c+1);
    if(istrue(r+1, c)) teg = dp(r+1, c);

    res = max(ret, teg) + visit[r][c];
//    printf ("sub : %I64d %I64d = %I64d\n", a, b, res);
    memo[r][c] = res;

    return res;
}



int main(){
    int ans,i, j, rw, cl;
    while (scanf ("%d %d %d", &m, &n, &p) == 3){
        for (i = 0; i < p; i++){
            scanf ("%d %d", &rw, &cl);
            block[rw][cl] = 1;
        }

        memset (memo, 0, sizeof (memo));
        memset (visit, 0, sizeof (visit));

        ans = dp (1, 1);
        printf ("%d\n", ans);
    }
    return 0;
}
