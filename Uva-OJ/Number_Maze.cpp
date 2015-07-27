#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned  long long
#define MAX 10000
#define row 100
#define col 100
#define eps 1e-9
#define inf 9999999999
#define nill -1
#define memo (array, value) memset (array, value, sizeof (array))

int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};

int r, c, board[row][col], level[row][col];
int parent[row][col], visited[row][col];

struct node{
    int r, c, level;
}start, end;


int bfs (int s){
    int sum = 0, i, tmp, u, v, x_axis, y_axis;
    queue <int> Q;
    Q.push (s);
    while (Q.empty () == false){
        u = Q.front ();
        Q.pop ();
        for (i = 0; i < 4; i++){
            x_axis =  + X_arr[i];
            y_axis =  + Y_arr[i];
        }
    }
}

int main (){
    int tc, cs=1, i, j, ans, cnt, tmp;
    scanf ("%d", &tc);
    while (tc--){
        memo (visited, 0);
        memo (level, 0);
        scanf ("%d%d", &r, &c);
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++) scanf ("%d", &board[i][j]);
        int src = board[0][0];
        ans = bfs (src);
    }
    return 0;
}
