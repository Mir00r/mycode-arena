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
#define row 205
#define col 205

int n, visit[row][col], flag;
char grid[row][col], str;
//int X_arr[] = {-1, 1, 0, 0};
//int Y_arr[] = {0, 0, -1, 1};
int X_arr[] = {-1, -1, 0, 0, 1, 1};
int Y_arr[] = {-1, 0, -1, 1, 0, 1};

bool khoz(int rw, int cl){
    if(cl < 0 || cl >= n || rw < 0 || rw >= n) return false;
    return true;
}

/*void dfs(int a, int b, char str_pos){
    int i, j, nx, ny, x, y;
   // if (khoz(a, b) == true) return;
    if (a < 0 || b < 0 || a == n || b == n || grid[a][b] != str_pos || visit[a][b] == 1) return;
    if (a == n-1 && grid[a][b] == 'b'){
        str = 'B';
        return;
    }
    if (b == n-1 && grid[a][b] == 'w'){
        str = 'W';
        return;
    }
    visit[a][b] = 1;
    for(i = 0; i < 6; i++){
        nx = a + X_arr[i];
        ny = b + Y_arr[i];
        dfs (nx, ny, str_pos);
    }
}

int main(){
    int i, j, cs = 0;
    while(scanf("%d", &n) == 1 && n){
        memset (visit, 0, sizeof (visit));
        flag = 0;
        for(i = 0; i < n; i++) scanf("%s", grid[i]);
        for(i = 0; i < n; i++)
            if (visit[0][i] == 0 && grid[0][i] == 'b') dfs (0, i, 'b');
        for (i = 0; i < n; i++)
           if (visit[i][0] == 0 && grid[i][0] == 'w') dfs (i, 0, 'w');
        printf ("%d %c\n", ++cs, str);
    }
    return 0;
}*/



bool bfs (char ch, int x, int y){
    int i, j, nx, ny, u, v;
    queue <int> Q;
    Q.push(x); Q.push(y);
    visit[x][y] = 1;
    while (Q.empty() == false){
        u = Q.front(); Q.pop();
        v = Q.front(); Q.pop();
        for(i = 0; i < 6; i++){
            nx = u + X_arr[i];
            ny = v + Y_arr[i];
            if (khoz(nx, ny) == true && visit[nx][ny] == 1 && grid[nx][ny] == ch){
                visit[nx][nx] = 1;
                if (ch == 'b' && nx == n) return true;
                if (ch == 'w' && ny == n) return true;
                Q.push(nx); Q.push(ny);
            }
            //bfs (ch, nx, ny);
        }
    }
    return false;
}

int main(){
    int i, j, cs = 0;
    while(scanf("%d", &n) == 1 && n){
        memset (visit, 0, sizeof (visit));
        flag = 0;
        for(i = 0; i < n; i++) scanf("%s", grid[i]);
        for (i = 0; i < n; i++)
            if (visit[i][1] == 0 && grid[i][1] == 'w'){
                flag = bfs ('w', i, 1);
                if (flag) break;
            }
            if (flag) printf ("%d W\n", ++cs);
            else printf ("%d B\n", ++cs);
    }
    return 0;
}

