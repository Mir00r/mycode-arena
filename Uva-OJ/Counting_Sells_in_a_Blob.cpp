#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 1000
#define row 500
#define col 500
#define inf 2147482647
#define nill -13


int X_arr[] = {1, 1, 1, 0, 0, -1, -1, -1};
int Y_arr[] = {1, 0, -1, 1, -1, 1, 0, -1};

char grid[row][col];
int visited[row][col];
int r, c, blob;

bool corner_check (int R, int C){
    if (R >= 0 && R <= r && C >= 0 && C <= c) return true;
    return false;
}


void blob_search_bfs (int a, int b){
    int i, len, x_axis, y_axis, x, y;
    blob = 1;
    visited[a][b] = 1;
    queue <int> Q;
    Q.push (a);
    Q.push (b);
    while (Q.empty () == false){
        x = Q.front(); Q.pop ();
        y = Q.front(); Q.pop ();
        //visited[x][y] = 1;
        for (i = 0; i < 8; i++){
            x_axis = x + X_arr[i];
            y_axis = y + Y_arr[i];
            if (corner_check (x_axis, y_axis) == true && grid[x_axis][y_axis] == '1'){
                if (visited[x_axis][y_axis] == 0){
                    visited[x_axis][y_axis] = 1;
                    Q.push (x_axis);
                    Q.push (y_axis);
                    blob++;
                }
            }
        }
    }
}


/*void blob_search_dfs (int a, int b){
    int i, len, x_axis, y_axis, x, y;
    blob++;
    visited[a][b] = 1;
    for (i = 0; i < 8; i++){
        x_axis = a + X_arr[i];
        y_axis = b + Y_arr[i];
        if (corner_check (x_axis, y_axis) == true && grid[x_axis][y_axis] == '1'){
            blob_search_dfs(x_axis, y_axis);
        }
    }
}*/


int main (){
    int tc, cs=1, i, j,  ans, cnt, tmp;
    bool blank = false;
    scanf ("%d", &tc);
    getchar();
    getchar();
    while (tc--){
        if (blank) puts ("");
        blank = true;
        memset (visited, 0, sizeof (visited));
        //memset (grid, 0, sizeof (grid));
        r = c = ans = 0;
        while (gets (grid[r])){
            if (strlen (grid[r]) == 0) break;
            r++;
        }
        c = strlen (grid[0]);
        //printf ("Col = %d\n", c);
        /*for (i = 0; i < r; i++){
            for (j = 0; j < c; j++){
                if (grid[i][j] == '1')
                    visited[i][j] = 1;
                else
                    visited[i][j] = 0;
            }
        }*/
        blob = 0;
        for (i = 0; i < r; i++){
            for (j = 0 ; j < c; j++){
                if (grid[i][j] == '1' && visited[i][j] == 0){
                   // blob++;
                   // blob = 0;
                    //blob_search_dfs(i, j);
                    blob_search_bfs (i, j);
                    if (blob > ans)
                        ans = blob;
                }
            }
        }
        printf ("%d\n", ans);
    }
    return 0;
}
