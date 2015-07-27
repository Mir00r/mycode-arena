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
#define row 30
#define col 30

int visit_list[row][col];
//int X_arr[] = {-1, 1, 0, 0};
//int Y_arr[] = {0, 0, -1, 1};
int X_arr[] = {1, 1, 1, 0, 0, -1, -1, -1};
int Y_arr[] = {1, 0, -1, 1, -1, 1, 0, -1};
int n, tmp_1, tmp_2, x_axis, y_axis, tank_cnt;
vector <string> v_str;

/*bool check (int x, int y){
    //return (x_axis >= 0 && x_axis < n && y_axis >= 0 && y_axis < n && visit_list[x_axis][y_axis] == false);
    return(x >= 1 && y >= 1 && x <= n && y <= n);
}*/
void flood_fill (int x, int y){
    //tank_cnt++;
   // printf ("Cnt = %d\n", tank_cnt);
    queue <int> Q;
    Q.push(x); Q.push(y);
    while (Q.empty() == false){
        tmp_1 = Q.front(); Q.pop();
        tmp_2 = Q.front(); Q.pop();
        visit_list[tmp_1][tmp_2] = 1;
        for (int i = 0; i < 8; i++){
            x_axis = tmp_1 + X_arr[i];
            y_axis = tmp_2 + Y_arr[i];
            if(x_axis >= 0 && x_axis < n && y_axis >= 0 && y_axis < n && visit_list[x_axis][y_axis] == false){
                Q.push(x_axis); Q.push(y_axis);
            }
        }
    }
}

int main(){
    int c = 0, i, j, ans;
    string ch; // char ch;
    while (scanf ("%d", &n) == 1){
        v_str.clear();
        for (i = 0; i < n; i++){
            cin >> ch; //scanf ("%s", ch);
            v_str.push_back(ch);
        }
        tank_cnt = 0;
        memset (visit_list, 0, sizeof (visit_list));
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (v_str[i][j] == '0') visit_list[i][j] = '1';
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (v_str[i][j] == '1' && visit_list[i][j] == false){
                    tank_cnt++;
                    flood_fill(i, j);
                }
        printf ("Image number %d contains %d war eagles.\n", ++c, tank_cnt);
    }
    return 0;
}
