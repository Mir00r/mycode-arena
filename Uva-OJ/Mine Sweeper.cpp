#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999
#define row 100
#define col 100+10

int visit_list[row][col];
char grid[row][col];
int n, i, j, mine_cnt, x, y, x_axis, y_axis, nx, ny;

int X_arr[] = {1, 1, 1, 0, 0, -1, -1, -1};
int Y_arr[] = {1, 0, -1, 1, -1, 1, 0, -1};

void find_mine(int x, int y){
    for (i = 0; i < 8; i++){
        nx = x + X_arr[i];
        ny = y + Y_arr[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] != '*')
            grid[nx][ny]++;
    }
}

int main(){
    int tc;
    bool blank = false;
    scanf ("%d", &tc);
    while (tc--){
        if (blank) printf ("\n"); blank = true;
        scanf ("%d", &n);
        for (i = 0; i < n; i++){
            scanf ("%s", grid[i]);
            scanf ("%s", grid[i]);
        }
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (grid[i][j] == '.') grid[i][j] = 'x';
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (grid[i][j] == '*') find_mine(i, j);
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++)
                putchar(grid[i][j]);//printf ("%s", grid[i][j]);
        }       printf ("\n");
    }
    return 0;
}
