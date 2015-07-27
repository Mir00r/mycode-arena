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
#define max 999
#define row 105
#define col 105

int visit_list[row][col];
vector <string> grid;
//int m, n, i, j, tmp_1, tmp_2, dep_cnt, x_axis, y_axis;
//int X_arr[] = {-1, 1, 0, 0};
//int Y_arr[] = {0, 0, -1, 1};
//int X_arr[] = {1, 1, 1, 0, 0, -1, -1, -1};
//int Y_arr[] = {1, 0, -1, 1, -1, 1, 0, -1};


char map[106][106];
int m, n;
int X_arr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y_arr[8] = {0, 1, -1, 1, -1, 0, 1, -1};

void find_oil_depo(int x, int y){
    map[x][y] = '*';
    int i, x_axis, y_axis;
    for(i = 0; i < 8; i++){
        x_axis = X_arr[i]+x;
        y_axis = Y_arr[i]+y;
        if(x_axis >= 0 && x_axis < m && y_axis >= 0 && y_axis < n && map[x_axis][y_axis] == '@')
              find_oil_depo(x_axis, y_axis);
   }
}

int main(){
    while(scanf("%d %d", &m, &n) && m && n){
        int i, j, depo_cnt = 0;
        for(i = 0; i < m; i++) scanf("%s", map[i]);
        for(i = 0; i < m; i++)
           for(j = 0; j < n; j++)
            if(map[i][j] == '@'){
                depo_cnt++;
                find_oil_depo(i, j);
            }
        printf("%d\n",depo_cnt);
    }
    return 0;
}


/*void find_oil_deposite(int x, int y){
    queue <int> Q;
    Q.push(x); Q.push(y);
    while (Q.empty() == false){
        tmp_1 = Q.front(); Q.pop();
        tmp_2 = Q.front(); Q.pop();
        visit_list[tmp_1][tmp_2] = '@';
        for (i = 0; i < 8; i++){
            x_axis = tmp_1 + X_arr[i];
            y_axis = tmp_2 + Y_arr[i];
            if(x_axis >= 0 && x_axis < m && y_axis >= 0 && y_axis < n && visit_list[x_axis][y_axis] == false){
                Q.push(x_axis); Q.push(y_axis);
            }
        }
    }
}

int main(){
    char str[max];
    string s;
    while (scanf ("%d%d", &m, &n) == 2){
        if (m == 0 && n == 0) break;
        grid.clear();
        for (i = 0; i < m; i++){
            cin >> s;//scanf ("%s", str);
            grid.push_back(s);
        }
        memset (visit_list, 0, sizeof (visit_list));
        dep_cnt = 0;
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                if (grid[i][j] == '*') visit_list[i][j] = '@';
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                if (grid[i][j] == '*' && visit_list[i][j] == false){
                    dep_cnt++;
                    find_oil_deposite(i, j);
                }
        printf ("%d\n", dep_cnt);
    }
    return 0;
}*/
//char map[106][106];

/*void find_oil_depo(int a, int b){
    map[a][b] = '*';
    for (i = 0; i < 8; i++){
        x_axis = a + X_arr[i];
        y_axis = b + Y_arr[i];
        if (x_axis >= 0 && x_axis < m && y_axis >= 0 && y_axis < n && map[x_axis][y_axis] == '@')
            find_oil_depo (x_axis, y_axis);
    }
}

int main(){
    while (scanf ("%d%d", &m, &n) == 2){
        if (m == 0 && n == 0) break;
        //dep_cnt = 0;
        for (i = 0; i < m; i++) scanf ("%s", map[i]);
        dep_cnt = 0;
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                if (map[i][j] == '@'){
                    dep_cnt++;
                    find_oil_depo(i, j);
                }
        printf ("%d\n", dep_cnt);
    }
    return 0;
}*/


