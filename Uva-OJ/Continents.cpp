#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <memory.h>

using namespace std;

#define l long int
#define ll long long int
#define MAX 205
#define row 201
#define col 201
#define white 0
#define cnt 1
#define memo(array, value) memset(array, value, sizeof(array))

int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};
char visit_list[row][col];
char map[106][106];
int m, n, land_cnt, land;
//int X_arr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
//int Y_arr[8] = {0, 1, -1, 1, -1, 0, 1, -1};

/*int find_land(int a, int b){
    if(b < 0) b = m-1;
    if(b >= m) b = 0;
    if(a < 0 || a >= n) return 0;
    if (map[a][b] != land) return 0;
    map[a][b] = 0;
    int i, x_axis, y_axis;
    for(i = 0; i < 4; i++){
        x_axis = X_arr[i] + a;
        y_axis = Y_arr[i] + b;
       // if(x_axis >= 0 && x_axis < m && y_axis >= 0 && y_axis < n && map[x_axis][y_axis] == land && visit_list[x_axis][y_axis] == false)
              find_land(x_axis, y_axis); //land_cnt += find_land(x_axis, y_axis);
   }
   return find_land(x_axis, y_axis)+1;
}*/

/*void find_land(int a, int b){
    if(b < 0) b = m-1;
    if(b >= m) b = 0;
    if(a < 0 || a >= n) return ;
    if(visit_list[a][b] != 0 || map[a][b] != land) return;
    //if (map[a][b] != land) return;
    //map[a][b] = 0;
    visit_list[a][b] = 1;
    land_cnt++;
    int i, x_axis, y_axis;
    for(i = 0; i < 4; i++){
        x_axis = X_arr[i] + a;
        y_axis = Y_arr[i] + b;
       // if(x_axis >= 0 && x_axis < m && y_axis >= 0 && y_axis < n && map[x_axis][y_axis] == land && visit_list[x_axis][y_axis] == false)
            find_land(x_axis, y_axis);
   }
}*/

int find_land(int a, int b){
    if(a < 0 || a >= m) return 0;
    if(b == -1) b = n-1;
    else if(b == n) b = 0;
    if(map[a][b] != land) return 0;
    map[a][b] = 0;
    return 1 + find_land(a-1,b) + find_land(a+1,b) + find_land(a,b-1) + find_land(a,b+1);
}

int main(){
    int x, y, i, j, ans;
    while (scanf ("%d%d", &m, &n) == 2){
        for (i = 0; i < m; i++) scanf ("%s", map[i]);
        scanf ("%d%d", &x, &y);
        land = map[x][y];
        find_land (x, y);
        ans = 0;
        //land_cnt = 0;
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                if (map[i][j] == land){
                    land_cnt = find_land(i, j);
                    if (land_cnt > ans) ans = land_cnt;
                }
            }
        }
        printf ("%d\n", ans);
    }
    return 0;
}
