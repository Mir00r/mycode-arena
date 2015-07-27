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
#define MAX 3000
#define row 55
#define col 55
#define eps 1e9

int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};
int m, n, hole_cnt, flag;
char grid[row][col];

struct node{
    char str;
    int len_hold;
}st_arr[MAX];

bool comp (node a, node b){
    if (a.len_hold > b.len_hold) return true;
    if (a.len_hold == b.len_hold && a.str < b.str) return true;
    return false;
}

void find_hole(int x, int y, char ch){
    if (x < 0 || x == m || y < 0 || y == n || grid[x][y] != ch) return;
    int i, nx, ny;
    hole_cnt++;
    grid[x][y] = '.';
    for (i = 0; i < 4; i++){
        nx = x + X_arr[i];
        ny = y + Y_arr[i];
        //if(nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] != ch)
            find_hole(nx, ny, ch);
    }
}

int main(){
    int i, j, ans, tmp, len, cs = 0;
    while (scanf ("%d%d", &m, &n) == 2){
        if (m == 0 && n == 0) break;
        for (i = 0; i < m; i++) scanf ("%s", grid[i]);
        len = 0;
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                if (grid[i][j] != '.'){
                    hole_cnt = 0;
                    st_arr[len].str = grid[i][j];
                    find_hole(i, j, grid[i][j]);
                    st_arr[len++].len_hold = hole_cnt;
                }
            }
        }
        sort (st_arr, st_arr+len, comp);
        printf ("Problem %d:\n", ++cs);
        for (i = 0; i < len; i++ ) printf ("%c %d\n", st_arr[i].str, st_arr[i].len_hold);
    }
    return 0;
}
