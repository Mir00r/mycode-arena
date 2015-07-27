#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 210
#define row 211
#define col 211
#define white 0
#define black 1
#define memo(array, value) memset(array, value, sizeof(array))
#define eps 1e9

bool check_bipartat = true;
vector <int> adj_list[MAX];
int color[MAX], color_cnt[2], res, junction, street;
int graph[row][col];

/*int cal_guard_by_BFS(int x){
    int s, t, len, i;
    color_cnt[0] = color_cnt[1] = 0;
    queue <int> Q;
    Q.push(x);
    color[x] = 0;
    color_cnt[0]++;
    while(Q.empty() == false){
        s = Q.front(); Q.pop();
        len = adj_list[s].size();
        for(i = 0; i < len; i++){
            t = adj_list[s][i];
            if (color[t] == eps){
                color[t] = 1 - color[s];
                color_cnt[color[t]]++;
                Q.push(t);
            }
            else if (color[t] == color[s]) check_bipartat = false;
        }
        if (check_bipartat){
            res += (color_cnt[0] > 0 && color_cnt[1] > 0) ?
                min(color_cnt[0], color_cnt[1]) :
                max(color_cnt[0], color_cnt[1]);
        }else{
            res = -1;
            break;
        }
    }
    //printf ("%d\n", res);
    return res;
}*/

int cal_guard_by_BFS(int node){
    int wh_cnt1 = 0, i, u, v;
    int bl_cnt2 = 0;
    color[node] = 1;
    wh_cnt1++;
    queue <int> Q;
    Q.push(node);
    while (Q.empty() == false) {
        node = Q.front();
        Q.pop();
        for (i = 0; i < junction; i++)
            if (graph[node][i]){
                if (color[i] == false){
                    color[i] = 3 - color[node];
                    if (color[i] == 1) wh_cnt1++;
                    else bl_cnt2++;
                    Q.push(i);
                } else if (color[i] == color[node]) return -1;
            }
    }
    return min(wh_cnt1, bl_cnt2);
}

int main(){
   int t, src, des, i, j, tmp;
   scanf ("%d", &t);
   while(t--){
        scanf ("%d%d", &junction, &street);
        //for(i = 0; i < street; i++) adj_list[i].clear();
        memo (graph, 0);
        memo (color, 0);
        res = 0;
        //check_bipartat = true;
        for(i = 0; i < street; i++){
            scanf ("%d%d", &src, &des);
            graph[src][des] = 1;
            graph[des][src] = 1;
            //adj_list[src].push_back(des);
        }
        for (j = 0; j < junction; j++){
            if (color[j] == false){
                tmp = cal_guard_by_BFS(j);
                if (tmp == -1){
                    res = -1;
                    break;
                }
                else res += max(tmp, 1);
            }
        }
        printf ("%d\n", res);
   }
   return 0;
}
