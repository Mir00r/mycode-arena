#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define max 999
#define row 105
#define col 105

int visit_list[row][col];
char grid[row][col];
int m, n, i, j, tmp_1, tmp_2, dep_cnt, x_axis, y_axis, mine_cnt;
//int X_arr[] = {-1, 1, 0, 0};
//int Y_arr[] = {0, 0, -1, 1};
int X_arr[] = {1, 1, 1, 0, 0, -1, -1, -1};
int Y_arr[] = {1, 0, -1, 1, -1, 1, 0, -1};

void find_mine(int x, int y){
    int i, x_axis, y_axis;
    for (i = 0; i < 8; i++){
        x_axis = x + X_arr[i];
        y_axis = y + Y_arr[i];
        if (x_axis >= 0 && x_axis < m && y_axis >= 0 && y_axis < n && grid[x_axis][y_axis] != '*')
             grid[x_axis][y_axis]++;
    }
}

int main(){
    int c = 0, i, j, kcuf_newline=0;
    while (scanf ("%d%d", &m, &n) == 2){
        //kcuf_newline = 0;
        if (m == 0 && n == 0) return 0;
        else{
            if (kcuf_newline > 0)
                printf ("\n");
        }
        kcuf_newline++;
        //memset (visit_list, 0, sizeof (visit_list));
        //printf ("\n");
        for (i  = 0; i < m; i++) scanf ("%s", grid[i]);

        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                if (grid[i][j] == '.') grid[i][j] = '0';

        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                if (grid[i][j] == '*') find_mine(i, j);

        printf ("Field #%d:\n", kcuf_newline);
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++)
                putchar(grid[i][j]);//printf ("%s", grid[i][j]);
                printf ("\n");
        }
        //printf ("\n");
    }
    return 0;
}
