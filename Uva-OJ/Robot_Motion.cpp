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
#define row 20
#define col 20

int visit_list[row][col], r, c, start, step;
vector <string> road_map;

/*bool check (int x, int y){
    return (x < 0 && x >= r && y < 0 && y >= c);
}*/

/*void directon (int a, int b){
    while (1){
        step++;
        if (road_map[a][b] == 'N') r--;
        if (road_map[a][b] == 'S') r++;
        if (road_map[a][b] == 'W') c--;
        else c++;
        check(a, b);
        if (visit_list[a][b] == false){
            flag = 1;
            break;
        }else visit_list[a][b] = step;
    }
    if (flag == 0) printf ("%d step(s) to exit\n", step);
    else printf ("%d step(s) before a loop of %d step(s)\n", step, visit_list[a][b]);
}*/
int main(){
    int  i, j, ans, tmp;
    char grid[max], ch;
    bool flag;
    while(scanf ("%d%d%d", &r, &c, &start) == 3){
        if(r == 0 && c == 0 && start == 0) break;
        /*for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                scanf ("%s", grid[i][j]);*/
        int a = 0;
        start--;
        road_map.clear();
        for(int i = 0; i < r; i++){
            scanf ("%s", grid);
            road_map.push_back(grid);
        }
        memset(visit_list,-1,sizeof(visit_list));
        step = 0;
        flag = 0;
        visit_list[a][start] = 0;
        /*while (1){
            //step++;
            directon(0, start);
        }*/
        while(1){
            step++;
            if(road_map[a][start]=='N') a--;
            else if(road_map[a][start]=='S') a++;
            else if(road_map[a][start]=='W') start--;
            else start++;
            //check (a, start); break;
            if(a < 0 || a >= r || start < 0 || start >= c) break;
            if(visit_list[a][start]!=-1){
                flag = 1;
                break;
            }else visit_list[a][start] = step;
        }
        if(flag == 0) printf ("%d step(s) to exit\n", step);
        else printf ("%d step(s) before a loop of %d step(s)\n", visit_list[a][start], step-visit_list[a][start]);
    }
    return 0;
}
