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
#define MAX 1000
#define row 105
#define col 105
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define eps 1e9

//int arr[row][col], u, v;
//vector <int> graph[MAX];

/*void BFS (int start, int flag){
    queue <int> Q;
    //vector <int> :: iterator itr;
    Q.push(start);
    arr[start][flag] = 0;
    while (!Q.empty()){
        u = Q.front();
        vector <int>::iterator itr;
        for (itr = graph[u].begin(); itr != graph[u].end(); itr++){
            if (arr[*itr][flag] != -1) continue;
            arr[*itr][flag] = arr[u][flag] + 1;
            Q.push (*itr);
        }
    }
}

int main(){
    int tc, cs=1, i, j, res, N, R, src, des, str, meet, time;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &N, &R);
        for (i = 0; i < R; i++){
            scanf ("%d%d", &src, &des);
            graph[src].pb(des);
            graph[des].pb(src);
        }
        scanf ("%d%d", &str, &meet);
        memo (arr, -1);
        res = 0;
        BFS (str, 0); BFS (meet, 1);
        for (i = 0; i < N; i++){
            time = arr[i][0] + arr[i][1];
            res = max (res, time);
        }
        printf ("Case %d: %d\n", cs++, res);
    }
    return 0;
}*/

int graph[row][col], N, R, u, v, s, d;

int main(){
    int t, c = 0, i, j, k, ans, tmp;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d%d", &N, &R);
        for (i = 0; i < N; i++){
            for (j = 0; j < N; j++) graph[i][j] = eps;
            graph[i][j] = 0;
        }

        for (i = 0; i < R; i++){
            scanf ("%d%d", &u, &v);
            graph[u][v] = graph[v][u] = 1;
        }
        ans = 0;
        scanf ("%d%d", &s, &d);
        for (i = 0; i < N; i++){
            for (j = 0; j < N; j++){
                for (k = 0; k < N; k++)
                    graph[j][k] = min (graph[j][k], graph[j][i]+graph[i][k]);
            }
        }
        for (i = 0; i < N; i++) ans = max (ans, graph[s][i]+graph[i][d]);
        printf ("Case %d: %d\n", ++c, ans);
    }
    return 0;
}

