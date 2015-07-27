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
#define max 99999
#define eps 1e-11
#define memo(array, value) memset(array, value, sizeof(array))

/*typedef pair<int,int> jora;
typedef vector <int> vii;
typedef vector <int> vi;
priority_queue <jora, vector <jora>, greater <jora> > PQ;*/


struct jora{
    int to;
    int weight;
    jora () {}
    jora(int t, int w) : to(t), weight(w) {}
    bool operator <(const jora &e)const{
        return weight > e.weight;
    }
};

//vector <int> adj_list[max];
int visit[max];
vector <jora> adj_list[max];
priority_queue <jora> PQ;
jora e;

int dijkstra(int sr, int ds){
    int i, t, u, v, w, len;
    //memo (visit, -1);
    visit[sr] = 0;
    PQ.push(jora (sr, 0));
    //PQ.push(sr); PQ.push(0);
    while (PQ.empty() == false){
        e = PQ.top(); PQ.pop();
        u = e.to;
        len = adj_list[u].size();
        for (i = 0; i < len; i++){
            v = adj_list[u][i].to;
            w = adj_list[u][i].weight;
            if (visit[v] > visit[u] + w){
                visit[v] = visit[u] + w;
                PQ.push (jora (v, visit[v]));
            }
        }
    }
    return visit[ds];
}

int main(){
    int t, c = 0, n, m, S, T, src, des, latency, i, j, cost, tmp;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d%d%d%d", &n, &m, &S, &T);
        for (i = 0; i < n; i++){
            visit[i] = inf;
            adj_list[i].clear();
        }
        //memo (visit, inf);
        for (i = 0; i < m; i++){
            scanf ("%d%d%d", &src, &des, &latency);
            adj_list[src].push_back(jora (des, latency));
            adj_list[des].push_back(jora (src, latency));
        }
        cost = dijkstra(S, T);
        if (cost == inf) printf ("Case #%d: unreachable\n", ++c);
        else printf ("Case #%d: %d\n", ++c, cost);
    }
    return 0;
}
