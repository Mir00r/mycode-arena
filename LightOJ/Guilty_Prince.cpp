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
#define col 35
#define MAX 35
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007

char land[row][col];
int w, h;
int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};
int cell_cnt;


void find_cell(int x, int y){
    //land[x][y] = '#';
    //cell_cnt = 0;
    int i, x_axis, y_axis;
    if(x < 0 || x >= h || y < 0 || y >= w) return;

    if (land[x][y] == '.' || land[x][y] == '@'){
        cell_cnt++;
        land[x][y] = '#';

        for(i = 0; i < 4; i++){
            x_axis = X_arr[i] + x;
            y_axis = Y_arr[i] + y;

            //if(x_axis >= 0 && x_axis < h && y_axis >= 0 && y_axis < w)
                  find_cell(x_axis, y_axis);
       }
    }
}


int main(){
    int t, c = 0, i, j;
    scanf ("%d", &t);
    while(t--){
        scanf("%d %d", &w, &h);
        cell_cnt = 0;
        for(i = 0; i < h; i++) scanf("%s", land[i]);
        for(i = 0; i < h; i++)
           for(j = 0; j < w; j++)
            if(land[i][j] == '@'){
                //cell_cnt++;
                find_cell(i, j);
            }
        printf("Case %d: %d\n",++c, cell_cnt);
    }
    return 0;
}




/*int visit_list[row][col], w, h, cell_cnt;
int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};
char land[25][25];

void find_cell(int a, int b){
    queue <int> Q;
    Q.push(a); Q.push(b);
    int i, x, y, x_axis, y_axis;
    cell_cnt = 0;
    while (Q.empty() == false){
        cell_cnt++;
        x = Q.front(); Q.pop();
        y = Q.front(); Q.pop();
        land[x][y] = '#';
        for (i = 0; i < 4; i++){
            x_axis = x + X_arr[i];
            y_axis = y + Y_arr[i];
            if (x_axis >= 0 && x_axis < w && y_axis >= 0 && y_axis < h && land[x_axis][y_axis] == '.'){
                Q.push(x_axis); Q.push(y_axis);
            }
        }
    }
}

int main(){
    int t, c = 1, i, j;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d%d", &w, &h);
        //cell_cnt = 0;
        //memset (visit_list, 0, sizeof (visit_list));
        for (i = 0; i < h; i++){
            scanf ("%s", land[i]);
            for (j = 0; j < w; j++){
                if (land[i][j] == '@'){
                    //cell_cnt++;
                    find_cell(i, j);
                }
            }
        }
        printf ("Case %d: %d\n", c++, cell_cnt);
    }
    return 0;
}*/
