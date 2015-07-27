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
#define inf 2147483647
#define MAX 9999
#define eps 1e-11
#define pb push_back
#define memo(array, value) memset(array, value, sizeof(array))

/*typedef pair<int,int> jora;
typedef vector <int> vii;
typedef vector <int> vi;
priority_queue <jora, vector <jora>, greater <jora> > PQ;*/


/*const int INF = 0x3f3f3f3f;

int min(int a,int b){
	return (a<b?a:b);
}


int map[MAX][MAX];
int dist[MAX];

void dijkstra (int s, int n){
	int i, j;
	bool visited[MAX];
	memset(visited, 0, sizeof(visited));
	visited[s] = true;

	for(i = 1; i <= n; i++)
		dist[i] = map[s][i];

	for(i = 1; i <= n; i++){
		int tmp =-1, u;

		for(j = 1; j <= n; j++){
			if(!visited[j] && dist[j] > tmp){
				tmp = dist[j];
				u = j;
			}
		}

		visited[u] = true;
		for(int j = 1; j <= n; j++){
			if(!visited[j]  && min(dist[u],map[u][j]) > dist[j])
				dist[j] = min(dist[u], map[u][j]);
		}
	}
}

int main(){
	int tc, i, j, cs=1;
    printf("Please enter number of case: ");
	scanf("%d", &tc);

	while (tc--){
		int node, edge;
        printf ("Please enter nnumber of node & edge: ");
		scanf("%d %d", &node, &edge);

		for(i = 1; i <= node; i++)
			for(int j = 1; j <= node; j++)
				map[i][j] = 0;

		while(edge--){
			int src, des, value;
            printf("Please enter source, destination and weight: ");
			scanf("%d %d %d", &src, &des, &value);
			if(map[src][des] < value){
				map[src][des] = value;
				map[des][src] = value;
			}
		}
        puts ("");
		dijkstra(1, node);
		printf("Scenario #%d:\n\n", cs++);
		//for(int j=1;j<=n;j++)
			printf("The minimum cost is %d\n\n",dist[node]);
	}
	return 0;
}
*/



struct jora{
    int to;
    int weight;
    jora () {}
    jora(int t, int w) : to(t), weight(w) {}
    bool operator <(const jora &e)const{
        return weight > e.weight;
    }
};

//vector <int> graph[max];
int successor[max];
vector <jora> graph[max];
priority_queue <jora> frings;

jora e;

int UCS(int sr, int ds){
    int i, t, u, v, w, len;
    //memo (successor, -1);
    successor[sr] = 0;
    frings.push(jora (sr, 0));
    //frings.push(sr); frings.push(0);
    while (frings.empty() == false){
        e = frings.top(); frings.pop();
        u = e.to;
        len = graph[u].size();
        for (i = 0; i < len; i++){
            v = graph[u][i].to;
            w = graph[u][i].weight;
            if (successor[v] > successor[u] + w){
                successor[v] = successor[u] + w;
                frings.push (jora (v, successor[v]));
            }
        }
    }
    return successor[ds];
}

int main(){
    int tc, cs = 0, node, edge, S, T, src, des, weight, i, j, cost;
    printf("Please enter number of case: ");
    scanf ("%d", &tc);
    while (tc--){
        printf ("Please enter nnumber of node & edge: ");
        scanf ("%d %d", &node, &edge);
        for (i = 0; i < node; i++){
            successor[i] = inf;
            graph[i].clear();
        }
        //memo (successor, inf);
        for (i = 0; i < edge; i++){
            printf("Please enter source, destination and weight: ");
            scanf ("%d%d%d", &src, &des, &weight);
            graph[src].pb(jora (des, weight));
            graph[des].pb(jora (src, weight));
        }
        printf("Please enter source and destination which you want to find: ");
        scanf ("%d %d", &S, &T);
        cost = UCS(S, T);
        if (cost == inf) printf ("Case %d: Unreachable\n", ++cs);
        else printf ("Case %d: %d\n", ++cs, cost);
    }
    return 0;
}
