#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <memory.h>

using namespace std;

#define l long int
#define ll long long int
#define MAX 205
#define row 201
#define col 201
#define white 0
#define cnt 1
#define memo(array, value) memset(array, value, sizeof(array))

vector <string> grid;
//int m, n, i, j, tmp_1, tmp_2, land_cnt, x_axis, y_axis;
int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};
bool visit_list[row][col];
char map[106][106], land;
int m, n, land_cnt;
//int X_arr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
//int Y_arr[8] = {0, 1, -1, 1, -1, 0, 1, -1};

void dfs(int a, int b){
    if(b < 0)   b = m-1;
    if(b >= m)  b = 0;
    //if(a < 0 || a >= n) return ;
    //if(visit_list[a][b] == false || map[a][b] != land) return;
    visit_list[a][b] = true;
    land_cnt++;
    int i, x_axis, y_axis;
    for(i = 0; i < 4; i++){
        x_axis = X_arr[i] + a;
        y_axis = Y_arr[i] + b;
        if(x_axis >= 0 && x_axis < m && y_axis >= 0 && y_axis < n && map[x_axis][y_axis] == land && visit_list[x_axis][y_axis] == false)
            dfs(x_axis, y_axis);
   }
}

int main(){
    int x, y, i, j, ans;
    while (scanf ("%d%d", &m, &n) == 2){
        for (i = 0; i < m; i++) scanf ("%s", map[i]);
        scanf ("%d%d", &x, &y);
        land = map[x][y];
        dfs (x, y);
        ans = 0;
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                //if (map[i][j] == land && visit_list[i][j] == false)
                    land_cnt = 0;
                    dfs(i, j);
                    if (land_cnt > ans) ans = land_cnt;
                    //ans = max (ans, find_land(i, j, land));

            }
        }
        printf ("%d\n", ans);
    }
    return 0;
}



/*const int LIMIT = 99999999;
const int MX = 400;

//global data
char graph[MX][MX];
int nc;
string id[MX];
char color[MX];
int dist[MX];

int m, n, p, ship;
string temp, first, second;

int getId(string m){
    for (int i = 0; i < nc; ++i)
        if (id[i] == m) return i;
            id[nc] = m;
    return nc++;
}

void init(){
    for (int i = 0; i < MX; ++i){
        for (int j = 0; j < MX; ++j)
            graph[i][j] = '0';
    }
}

int bfs(int start, int end){
    int i, j, u;
    for (i = 0; i < nc; ++i){
        color[i] = 'w';
        dist[i] = LIMIT;
    }
    color[start] = 'g';
    dist[start] = 0;
    queue <int> q;
    q.push(start);

    while (!q.empty()){
        u = q.front(); q.pop();

        for (i = 0; i < nc; ++i){
            if ( (graph[u][i] == '1') && (color[i] == 'w')){
                color[i] = 'g';
                dist[i] = dist[u] + 1;
                q.push(i);
            }
        }
        color[u] = 'b';
    }
    if (dist[end] == LIMIT) return -1;
    return dist[end];
}

int main(){
    int test, i, j, a, b, cases = 0;
    cin >> test;

    cout << "SHIPPING ROUTES OUTPUT" << endl << endl;
    while (test--){
        nc = 0;
        init();

        cin >> m >> n >> p;
        for (i = 0; i < m; ++i){
            cin >> temp;
            j = getId(temp);
        }
        for (i = 0; i < n; ++i){
            cin >> first >> second;
            a = getId(first);
            b = getId(second);
            graph[a][b] = '1';
            graph[b][a] = '1';
        }
        cout << "DATA SET " << ++cases << endl << endl;

        for (i = 0; i < p; ++i){
            cin >> ship >> first >> second;
            a = getId(first);
            b = getId(second);
            j = bfs(a, b);

            if (j == -1) cout << "NO SHIPMENT POSSIBLE" << endl;
            else{
                cout << "$" << (j * ship*100) << endl;
            }
        }
        cout << endl;
    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}
*/

/*int N, M;
bool g[202][202];
int color[202];
int xd[2];

bool bfs(int s){
    bool ok = true;
    queue <int> q;
    q.push(s);
    color[s] = 0;
    xd[0] = xd[1] = 0;
    while (q.empty() == false){
        int v = q.front(); q.pop();
        xd[color[v]]++;
        for (int i = 0; i < N; i++){
            if (g[v][i]){
                if (color[i] == -1){
                    color[i] = color[v] ? 0 : 1;
                    q.push(i);
                }
                else if (color[i] == color[v]) ok = false;
            }
        }
    }
    return ok;
}

int main(){
    int test, u, v, i, j, ans;
    scanf("%d", &test);
    while (test--){
        scanf("%d%d", &N, &M);
        memset(g, 0, sizeof g);
        for (i = 0; i < M; i++){
            scanf("%d%d", &u, &v);
            g[u][v] = g[v][u] = true;
        }
        memset(color, -1, sizeof color);
        bool ok = true;
        ans = 0;
        for (i = 0; i < N; i++){
            if (color[i] == -1){
                if (bfs(i))  ans += max(min (xd[0], xd[1]), 1);
                else ok = false;
            }
        }
        if (ok) printf("%d\n",ans);
        else puts("-1\n");
    }
    return 0;
}*/




/*bool dfs(int node, int color){
    if(color[node] != 0){
        if(color[node] == color) return true;
        else
            return false;
    }
    color[node] = color;
    for(int i = 0; i < degree[nod]; ++i){
        if(!dfs(adj[node][i], -color)) return false;
    }
    return true;
}*/
