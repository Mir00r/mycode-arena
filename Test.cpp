#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define row 205
#define col 205
#define MAX 100
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 1000000007

int grid[row][col], dp[row][col];

vector <int> list[MAX];
vector <int> res;


int n, r, c;

bool check_cor (int rw, int cl){
    if (rw >= 0 && rw < r && cl >= 0 && cl < c)
        return true;

    return false;
}


//int dp_cal (int x, int y){
//
//    if (check_cor (x, y)){
//
//        if (dp[x][y] != -1)
//            return dp[x][y];
//
//        int ret = -inf;
//
//        ret = max (ret, dp_cal (x + 1, y)  + grid[x][y] );
//
//         ret = max (ret, dp_cal (x + 1, y + 1)  + grid[x][y] );
//
//          ret = max (ret, dp_cal (x + 1, y - 1)  + grid[x][y] );
//
//
//        return dp[x][y] = ret;
//
//    }
//    else
//        return 0;
//}


void test_dp (int x, int tot){
    int i, sum=0;


    if (x == n){
        list[n].pb(tot);
        return;
    }

    for (i =  0; i < list[n].size (); i++){
        tot += test_dp (n + 1, list[n][i] );
    }

}



int main(){
    int i, j, ans;

    while (scanf ("%d", &n) == 1){

        memo (grid, 0);
        memo (dp, -1);
       // memo (res, 0);


        for (i = 0; i < n; i++)
            scanf ("%d", &grid[i]);

        for (i = 0; i < n; i++){
            for (j = 0; j < grid[i]; j++){
                int elm;
                scanf ("%d", &elm);
                list[i].pb(elm);
            }
        }


       // printf ("%d\n", dp_cal (0, 0) );
    }


    return 0;
}
