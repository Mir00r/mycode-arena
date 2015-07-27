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

int arr[row][col], u, v;
vector <int> graph[MAX];
queue <int> Q;
vector <int> :: iterator itr;
void BFS (int start, int flag){
    int i;
    Q.push(start);
    arr[start][flag] = 0;
    while (Q.empty() == false){
        u = Q.front();
        Q.pop();
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
        for (i = 0; i < MAX; i++) graph[i].clear();
        memo (arr, -1);
        scanf ("%d%d", &N, &R);
        for (i = 1; i <= R; i++){
            scanf ("%d%d", &src, &des);
            graph[src].pb(des);
            graph[des].pb(src);
        }
        scanf ("%d%d", &str, &meet);
        //memo (arr, -1);
        res = 0;
        BFS (str, 0); BFS (meet, 1);
        for (i = 0; i < N; i++){
            time = arr[i][0] + arr[i][1];
            res = max (res, time);
        }
        printf ("Case %d: %d\n", cs++, res);
    }
    return 0;
}
