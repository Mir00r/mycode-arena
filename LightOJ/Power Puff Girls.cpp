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
#define MAX 9999
#define row 50
#define col 50

char land[row][col];
int m, n, visit_list[row][col];
int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};
int flag;

bool check(int rw,int cl){
    if(rw < 0 || rw >= m || cl < 0 || cl >= n) return false;
    return true;
}

void find_home_by_BFS(int x,int y){
    memset (visit_list, -1, sizeof (visit_list));
    int i, j, x_axis, y_axis, a, b, tmp;
    queue <int> Q;
    Q.push(x); Q.push(y);

    visit_list[x][y] = 0; land[x][y] = 'm';
    while(Q.empty() == false){

        x = Q.front(); Q.pop();
        y = Q.front(); Q.pop();
        tmp = visit_list[x][y];

        for(i = 0; i < 4; i++){
            x_axis = x + X_arr[i];
            y_axis = y + Y_arr[i];
            if(check(x_axis, y_axis) == true){
                if(land[x_axis][y_axis] == '.' || land[x_axis][y_axis] == 'a' || land[x_axis][y_axis] == 'b' || land[x_axis][y_axis] == 'c'){
                    Q.push(x_axis); Q.push(y_axis);
                    if(visit_list[x_axis][y_axis] ==-1) visit_list[x_axis][y_axis]= tmp + 1;
                    else{
                        if(visit_list[x_axis][y_axis] > tmp+1) visit_list[x_axis][y_axis] = tmp + 1;
                    }
                    land[x_axis][y_axis] = 'm';
                }
            }
        }
    }
}

int main(){
    int t, c = 0, i, j, h_src, h_des, a_src, a_des, b_src, b_des, c_src, c_des;
    int flag, sc, sr;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d", &m, &n);
        for(i = 0; i < m; i++) scanf("%s", &land[i]);
        flag = 0;
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                if(land[i][j] == 'h'){
                    sr = i;
                    sc = j;
                    flag++;
                }
                else if(land[i][j] == 'a'){
                    a_src = i;
                    a_des = j;
                    flag++;
                }
                else if(land[i][j] == 'b'){
                    b_src = i;
                    b_des = j;
                    flag++;
                }
                else if(land[i][j] == 'c'){
                    c_src = i;
                    c_des = j;
                    flag++;
                }

                if(flag == 4) break;
            }
            if(flag == 4) break;
        }
        find_home_by_BFS(sr,sc);

        int puff[4], home;
        puff[1] = visit_list[a_src][a_des]; puff[2] = visit_list[b_src][b_des]; puff[3] = visit_list[c_src][c_des];
        home = puff[1];
        for(i = 2; i <= 3; i++){
            if(puff[i] > home) home = puff[i];
        }
        printf("Case %d: %d\n",++c, home);
    }
    return 0;
}




/*void find_home_by_BFS(int x, int y){
    int i, x_axis, y_axis, a, b, tmp;
    memset (visit_list, -1, sizeof (visit_list));
    queue <int> Q;
    Q.push(x); Q.push(y);
    land[x][y] = 'm';
    visit_list[x][y] = 0;
    while (Q.empty() == false){
        x = Q.front(); Q.pop();
        y = Q.front(); Q.pop();
        tmp = visit_list[x][y];
        for(i = 0; i < 4; i++){
            x_axis = x + X_arr[i];
            y_axis = y + Y_arr[i];
            if(check(x_axis, y_axis) == true){
                if (land[x_axis][y_axis] == '.' && land[x_axis][y_axis] == 'a' || land[x_axis][y_axis] == 'b' || land[x_axis][y_axis] == 'c'){
                    Q.push(x_axis); Q.push(y_axis);
                    if (visit_list[x_axis][y_axis] ==-1) visit_list[x_axis][y_axis] = tmp + 1;
                    else{
                        if (visit_list[x_axis][y_axis] > tmp+1) visit_list[x_axis][y_axis] = tmp + 1;
                    }
                    land[x_axis][y_axis] = 'm';
                }
            }
       }
    }
}*/


/*int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};
int grid[row][col], visit_list[MAX];
void BFS();
vector <int> adj_list[MAX];
int m, n;
void BFS (int si, int sj){
    int i, j, k, ti, tj;
    grid[si][sj] = '.';
    queue <int> Q;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++){
            if (grid[i][j] == 'a' || grid[i][j] == 'b' || grid[i][j] == 'c'){
                Q.push(si); Q.push(sj);
            }
            if (grid[i][j] == 'h'){
                Q.push(si); Q.push(sj);
            }
        }

    Q.push(si); Q.push(sj);
    while (Q.empty() == false){
        si = Q.front(); Q.pop();
        sj = Q.front(); Q.pop();
        for (i = 0; i < 4; i++){
            ti = si + X_arr[i];
            tj = sj + Y_arr[i];
            //if (ti >= 0 && ti < 4 && tj >= 0 && tj < 4 && grid[ti][tj] == i) continue;
            if(ti < 0 || ti >= row || tj < 0 || tj >= col) continue;
            //if(grid[ti][tj] == '#' || grid[ti][tj] == 'm') continue;
            if (grid[ti][tj] == '#' || grid[ti][tj] == 'm'){
                grid[ti][tj] = '.';
                Q.push(ti); Q.push(tj);
            }
        }
    }
}

int main(){
    int t, c = 0, i, j, k, ans, tmp;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d%d", &m, &n);
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++) scanf ("%s", grid[i][j]);
        ans = BFS (0,0);
        printf ("Case %d: %d\n", ++c, ans);
    }
    return 0;
}*/
