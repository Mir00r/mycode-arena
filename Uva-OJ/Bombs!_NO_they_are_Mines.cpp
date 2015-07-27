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
#define ULL unsigned long long
#define row 1005
#define col 1005
#define MAX 1005
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007



int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};

int map[row][col], level[row][col];
//int visited[row][col], parent[row][col];

int sr, sc, er, ec;
int r, c;

bool corner_check (int rw, int cl){
    if (rw < 0 || rw == r || cl < 0 || cl == c) return false;
    return true;
}

void bfs (int sr, int sc){
    int x_axis, y_axis, x, y, i;

    queue <jora> Q;
    Q.push (jora (sr, sc));
    level[sr][sc] = 0;

    while (Q.empty () == false){
        jora top = Q.front();
        //Q.pop();
        x = top.first;
        y = top.second;
        Q.pop();

        for (i = 0; i < 4; i++){
            x_axis = x + X_arr[i];
            y_axis = y + Y_arr[i];

         //   if (corner_check(x_axis, y_axis) == false) continue;

            if (!map[x_axis][y_axis] && corner_check (x_axis, y_axis)){

                map[x_axis][y_axis] = 1;
                level[x_axis][y_axis] = level[x][y] + 1;
                Q.push (jora (x_axis, y_axis));
            }
        }
    }
}

int main(){
    int i, j, cnt, tmp, check, ans;
    while (scanf ("%d %d", &r, &c) == 2){
        if (r == 0 && c == 0) break;

        memo (map, 0);
        memo (level, 0);

        int mine;
        scanf ("%d", &mine);

        for (i = 0; i < mine; i++){
            int x, n;
            scanf ("%d %d", &x, &n);

            for (j = 0; j < n; j++){
                int y;
                scanf ("%d", &y);
                map[x][y] = 1;
            }
        }

        scanf ("%d %d %d %d", &sr, &sc, &er, &ec);
        bfs (sr, sc);
        printf ("%d\n", level[er][ec]);
    }
    return 0;
}








/*int block[row][col], level[row][col];
int sr, sc, er, ec;
int r, c;

bool corner_check (int rw, int cl){
    if (rw < 0 || rw == r || cl < 0 || cl == c) return false;
    return true;
}

void bfs(int sr, int sc) {
    int x_axis, y_axis, x, y, i;
    queue <jora> Q;
    Q.push(jora(sr, sc));
    level[sr][sc] = 0;
    while(Q.empty() == false) {
        jora top = Q.front();
        x = top.first;
        y = top.second;
        Q.pop();
        for(i = 0; i < 4; i++) {
            x_axis = x + X_arr[i];
            y_axis = y + Y_arr[i];
            //if(x_axis < 0 || x_axis == r || y_axis < 0 || y_axis == c) continue;
            if (corner_check(x_axis, y_axis) == false) continue;
            if(block[x_axis][y_axis] == false) {
                block[x_axis][y_axis] = 1;
                level[x_axis][y_axis] = level[x][y] + 1;
                Q.push(jora(x_axis, y_axis));
            }
        }
    }
}

int main() {
    int i, j;
    while(scanf ("%d%d", &r, &c) == 2) {
        if (r == 0 && c == 0) break;
        memo(block, 0);
        memo(level, 0);
        int mine, n, x, y;
        scanf ("%d", &mine);
        for (i = 0; i < mine; i++) {
            scanf ("%d%d", &x, &n);
            for (j = 0; j < n; j++) {
                scanf ("%d", &y);
                block[x][y] = 1;
            }
        }
        scanf ("%d%d%d%d", &sr, &sc, &er, &ec);
        bfs(sr, sc);
        printf ("%d\n", level[er][ec]);
    }
    return 0;
}*/
