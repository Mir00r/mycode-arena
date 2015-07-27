#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 10000
#define row 100+10
#define col 100+10

char sky_map[row][col];
int visit[row][col], rw, cl, star_cnt, size;
int X_arr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y_arr[8] = {0, 1, -1, 1, -1, 0, 1, -1};

void dfs (int r, int c){
    int i, nx, ny;
    //if (r < 0 || r == rw || c < 0 || c == cl || sky_map[r][c] == '.') return;
    sky_map[r][c] = '.';
    //visit[r][c] = 1;
    size++;
    for (i = 0; i < 8; i++){
        nx = r + X_arr[i];
        ny = c + Y_arr[i];
        if(nx >= 0 && nx < rw && ny >= 0 && ny < cl && sky_map[nx][ny] == '*')
            dfs (nx, ny);
    }
}

int main(){
    int i, j;
    while(scanf("%d%d", &rw, &cl) == 2 && rw && cl){
        for(i = 0; i < rw; i++) scanf ("%s", sky_map[i]);
        star_cnt = 0;
        for(i = 0; i < rw; i++)
            for(j = 0; j < cl; j++)
                if(sky_map[i][j] == '*'){
                    size = 0;
                    dfs(i,j);
                    if(size == 1)star_cnt++;
                }
        printf("%d\n",star_cnt);
    }
    return 0;
}


/*void dfs (int r, int c){
    int i, nx, ny;
    //if (r < 0 || r == rw || c < 0 || c == cl || sky_map[r][c] == '.') return;
    sky_map[r][c] = '.';
    //visit[r][c] = 1;
    size++;
    for (i = 0; i < 8; i++){
        nx = r + X_arr[i];
        ny = c + Y_arr[i];
        if(nx >= 0 && nx < rw && ny >= 0 && ny < cl && sky_map[nx][ny] == '*')
            dfs (nx, ny);
    }
}

int main(){
    int i, j, ans, tmp;
    while (scanf ("%d%d", &rw, &cl) == 2){
        if (rw == 0 && cl == 0) break;
        for (i = 0; i < rw; i++) scanf ("%s", sky_map[i]);
        star_cnt = 0;
       // memset(visit, 0, sizeof (visit));
        for (i = 0; i < rw; i++)
            for (j = 0; j < rw; j++)
                if (sky_map[i][j] == '*'){
                    size = 0;
                    dfs (i, j);
                    if (size == 1) star_cnt++;
                }
                printf ("%d\n", star_cnt);
    }
    return 0;
}*/
