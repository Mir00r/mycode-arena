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
#define MAX 1000+10
#define row 100+10
#define col 100+10

char str[MAX], graph[row][col];
int visit[row][col], cnt, rw, cl;
int X_arr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y_arr[] = {0, 1, -1, 1, -1, 0, 1, -1};

void dfs(int r, int c){
    int i, nx, ny;
    if (r < 0 || r == rw || c < 0 || c == cl || graph[r][c] == 'L' || visit[r][c] == 1) return;
    visit[r][c] = 1;
    cnt++;
    for (i = 0; i < 8; i++){
        nx = r + X_arr[i];
        ny = c + Y_arr[i];
        dfs (nx, ny);
    }
}

int main(){
    int r, c, tc, len, i, j;
    scanf ("%d", &tc);
    getchar(); getchar();
    bool blank = false;
    while (tc--){
        //getchar();
        if (blank) printf ("\n"); blank = true;
        rw = cl = 0;
        //cnt = 0;
        //memset (visit, 0, sizeof (visit));
        while (gets(str) && strlen(str) != '\0'){
            if (str[0] == 'L' || str[0] == 'W'){
                strcpy (graph[rw], str);
                cl = strlen(str);
                rw++;
            }
            else{
                sscanf(str, "%d%d", &r, &c);
                cnt = 0;
                memset (visit, 0, sizeof (visit));
                dfs (r-1, c-1);
                printf ("%d\n", cnt);
            }
        }
    }
    return 0;
}



