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
int m, n;
char grid[row][col];

struct node{
    char str;
    int lang_cnt;
}st_arr[MAX];

bool comp (node a, node b){
    if (a.lang_cnt > b.lang_cnt) return true;
    if (a.lang_cnt == b.lang_cnt && a.str < b.str) return true;
    return false;
}

void DFS(int x, int y, char ch){
    if (x < 0 || x == m || y < 0 || y == n || grid[x][y] != ch) return;
    int i, nx, ny;
    grid[x][y] = '.';
    for (i = 0; i < 4; i++){
        nx = x + X_arr[i];
        ny = y + Y_arr[i];
        //if(nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] != ch)
            DFS(nx, ny, ch);
    }
}

int main(){
    int tc, cs=1, i, j, k, indx, ans, tmp, len;
    scanf ("%d", &tc);
    char tmp_str;
    while (tc--){
        scanf ("%d%d", &m, &n);
        for (i = 0; i < m; i++) scanf ("%s", grid[i]);
        len = 0; indx = 0; //flag = 0;
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++){
                if (grid[i][j] != '.'){
                    //st_arr[len].str = grid[i][j];
                    tmp_str = grid[i][j];
                    //printf ("%c\n", tmp_str);
                    DFS(i, j, grid[i][j]);
                    //st_arr[len++].lang_cnt = hole_cnt;
                    bool flag = true;
                    for (k = 0; k < indx; k++){
                        if (st_arr[k].str == tmp_str){
                            st_arr[k].lang_cnt++;
                            flag = false;
                            break;
                        }
                    }
                    if (flag){
                        st_arr[indx].str = tmp_str;
                        st_arr[indx++].lang_cnt = 1;
                    }
                }
            }
        sort (st_arr, st_arr+indx, comp);
        printf ("World #%d\n", cs++);
        for (i = 0; i < indx; i++ ) printf ("%c: %d\n", st_arr[i].str, st_arr[i].lang_cnt);
    }
    return 0;
}
