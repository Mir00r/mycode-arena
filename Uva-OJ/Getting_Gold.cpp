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
#define max 9999
#define row 60
#define col 60

int w, h;
char vis_list[row][col];
int grid[row][col], gold_cnt;
int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};

bool check(int rw, int cl){
    if(cl < 0 || cl >= w || rw < 0 || rw >= h) return false;
    return true;
}

void find_gold(int a, int b){
    int i, j, x_axis, y_axix, x, y;
    queue <int> Q;
    Q.push(a); Q.push(b);
    while(Q.empty() == false){
        x = Q.front(); Q.pop();
        y = Q.front(); Q.pop();
        if(vis_list[x][y] == 'G')gold_cnt++;
        vis_list[x][y] = '#';
        if(vis_list[x][y+1] != 'T' && vis_list[x][y-1] != 'T' && vis_list[x+1][y] != 'T' && vis_list[x-1][y] != 'T'){
            for(i = 0; i < 4; i++){
                x_axis = x + X_arr[i];
                y_axix = y + Y_arr[i];
                if(check(x_axis, y_axix) == true && vis_list[x_axis][y_axix] != '#' && vis_list[x_axis][y_axix] != 'T' && grid[x_axis][y_axix] ==-1){
                    Q.push(x_axis);
                    Q.push(y_axix);
                    grid[x_axis][y_axix] = 0;
                }
            }
        }
    }
}

int main(){
    int i, j;
    while(scanf("%d%d", &w, &h) == 2){
        memset (grid, -1, sizeof (grid));
        gold_cnt = 0;
        for(i = 0; i < h; i++) scanf("%s", vis_list[i]);
        for(i = 0; i < h; i++){
            for(j = 0; j < w; j++){
                if(vis_list[i][j] == 'P'){
                    find_gold(i, j);
                }
            }
        }
        printf("%d\n",gold_cnt);
    }
    return 0;
}




/*int visit_list[row][col];
char land[row][col];
int w, h, gold_cnt;
int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};

bool check(int rw, int cl){
    if(cl < 0 || cl >= w || rw < 0 || rw >= h) return false;
    return true;
}

void find_gold(int a, int b){
    int i, x_axis, y_axis, x, y;
    queue <int> Q;
    Q.push(a); Q.push(b);
    while (Q.empty() == false){
        x = Q.front(); Q.pop();
        y = Q.front(); Q.pop();
        if (land[a][b] == 'G') gold_cnt++;
        land[x][y] = '#';
        if (land[x][y+1] != 'T' && land[x][y-1] != 'T' && land[x+1][y] != 'T' && land[x-1][y] != 'T'){
            for (i = 0; i < 4; i++){
                x_axis = x + X_arr[i];
                y_axis = y + Y_arr[i];
                if (check(x_axis, y_axis) == true && land[x_axis][y_axis] == '#' && land[x_axis][y_axis] != 'T' && visit_list[x_axis][y_axis] ==-1){
                      Q.push(x_axis); Q.push(y_axis);
                      visit_list[x_axis][y_axis] = 0;
                }
            }
        }
    }
   // printf ("%d\n", gold_cnt);
    if (land[a][b] == '#' || visit_list[a][b] == true) return;
    if (land[a][b] == 'G') gold_cnt++;
    visit_list[a][b] = true;
    for (i = 0; i < 4; i++){
        x_axis = a + X_arr[i];
        y_axis = b + Y_arr[i];
        if (land[x_axis][y_axis] == 'T') return;
        if (x_axis >= 0 && x_axis < h && y_axis >= 0 && y_axis < w && visit_list[x_axis][y_axis] == false)
            find_gold(x_axis, y_axis);
    }
}

int main(){
    while(scanf ("%d%d", &w, &h) == 2){
        int i, j, m, n, flag = 0;
        for (i = 0; i < h; i++) scanf ("%s", land[i]);
        gold_cnt = 0;
        memset (visit_list, -1, sizeof (visit_list));
       // m = n = 0;
        for (i = 0; i < h; i++){
            //scanf ("%s", land[i]);
            for (j = 0; j < w; j++){
                if (land[i][j] == 'P'){
                    //gold_cnt = 0;
                    m = i;
                    n = j;
                    //flag = 1;
                    //break;
                    //find_gold(i, j);
                }
            }
            //if (flag == 1) break;
        }
        find_gold(m, n);
        printf ("%d\n", gold_cnt);
    }
    return 0;
}*/
