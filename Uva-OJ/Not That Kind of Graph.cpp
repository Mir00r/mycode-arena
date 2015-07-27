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
#define max 205
#define row 201
#define col 201
#define white 0
#define black 1
#define memo(array, value) memset(array, value, sizeof(array))

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
bool impos;
//bool flag;
vector <int> adj_list[max];
int color[max];

int BFS(int s){
	queue <int> q;
	q.push(s);
	color[s] = 1;
	int tot=0, black=0;

	while (!q.empty()){
		int u = q.front();
		q.pop();
		tot++;
		if (color[u] == 1) black++;

		for (int i = 0; i < adj_list[u].size(); i++){
			int v = adj_list[u][i];
			if (color[v] == 2){
				color[v] = 1 - color[u];
				q.push(v);
			}
			else if (color[v] == color[u]) return -1; //means conflict and it's imposible
		}
	}
	if (tot == 1) return 1;//if it's a isolated vertex we should guard this by one person
	return min(black,tot-black);//choose least color used
}

int main(){
    int t, i, j, ans, m, n, src, des;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d%d", &m, &n);
        for (i = 0; i < n; i++){
            scanf ("%d%d", &src, &des);
            adj_list[src].push_back(des);
        }
        for (int i = 0; i < m && !impos; i++)
			if (color[i] == 2){
				int x = BFS(i);
				if (x ==-1) impos = true;
				else ans += x;
			}
        if (impos) printf ("-1\n");
        else printf ("%d\n", ans);
    }
    return 0;
}
