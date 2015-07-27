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
#define row 70
#define col 70
#define MAX 9999

int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};

char grid[row][col];
int n, nx, ny, sec_cnt, fighter, enemy, tmp, cnt, nsec;
int sector[row][col], seen[row][col];

void sec_DFS (int x, int y){
    if (grid[y][x] != '.' && sector[y][x] == 0){
        sector[x][y] = sec_cnt;
        for (int i = 0; i < 4; i++){
            nx = x + X_arr[i];
            ny = y + Y_arr[i];
            sec_DFS(nx, ny);
        }
    }
}

int group_DFS (int x, int y, char ch){
    if ((grid[x][y] == 'P' || grid[x][y] == 'B') && grid[x][y] != ch) return 1;
    if (seen[x][y] || grid[x][y] != ch) return 0;
    seen[x][y] = 1;
    for (int i = 0; i < 4; i++){
        nx = x + X_arr[i];
        ny = y + Y_arr[i];
        return group_DFS(nx, ny, ch);
    }
}

int main(){
    int i, j, k;
    //getchar();
    while (scanf ("%d", &n) == 1 && n){
        //getchar();
        //memset(grid, '.', sizeof(grid));
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++) scanf (" %c", &grid[i][j]);

            fighter = 0; //enemy = 0;
            sec_cnt = 0;
            memset (sector, 0, sizeof (sector));
            memset (seen, 0, sizeof (seen));
            int gp_B[MAX], gp_P[MAX];
            for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                    if (sector[i][j] == 0 && grid[i][j] != '.'){
                        sec_cnt++;
                        sec_DFS(i, j);
                    }
            for (i = 0; i <= sec_cnt; i++) gp_B[i] = gp_P[i] = 0;

            for(i = 0; i < n; i++){
                for (j = 0; j < n; j++){
                    if (seen[i][j]) continue;
                    if (grid[i][j] == 'B'){
                        gp_B[sector[i][j]]++;
                        fighter += group_DFS(i, j, 'B');
                    }
                    if (grid[i][j] == 'P'){
                        gp_P[sector[i][j]]++;
                        fighter += group_DFS(i, j, 'P');
                    }
                }
            }
            for (i = 1; i <= sec_cnt; i++)
                printf ("Sector #%d: contain %d freedom fighter group(s) & %d enemy group(s)\n", i, gp_B[i], gp_P[i]);
            printf ("Total %d group(s) are in fighting position.\n\n", fighter);
    }
    return 0;
}

