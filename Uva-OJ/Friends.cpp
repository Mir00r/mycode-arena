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

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 500000+10
#define row 100
#define col 100

int X_arr[] = {0, 1, -1, 0};
int Y_arr[] = {-1, 0, 0, 1};
int parent[MAX], m, n;
//int graph[row][col];
int visit[row], frd_cnt[MAX];
vector <int> graph[MAX];

int find_representative(int r){
    if (parent[r] == r) return r;
    //else return (find_representative(parent[r]));
    else return (parent[r] = find_representative(parent[r]));
}

// kon node gula kar parent ogula ber kore parent array te rakhsy
void Union (int a, int b){
    int u, v;
    u = find_representative(a);
    v = find_representative(b);
    //if (u == v) puts ("");else
    parent[u] = v;
}

void makset(int n){
    parent[n] = n; // at first every element is parent of itself
}

int main(){
    int tc, cs=1, i, j, cnt, ans, src, des, maxn, par;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &n, &m);
        //memset (graph, 0, sizeof (graph));
        //memset (visit, 0, sizeof (visit));
        //memset (parent, 0, sizeof (parent));
        for (i = 0; i < n; i++) makset(i);
        memset (frd_cnt, 0, sizeof (frd_cnt));
        maxn = 0;
        for (i = 0; i < m; i++){
            scanf ("%d%d", &src, &des);
            //graph[src][des] = 1; graph[des][src] = 1;
            //graph[src].push_back(des); graph[des].push_back(src);
            Union(src, des);
        }
        for (i = 0; i < n; i++){
            par = find_representative(i);
            frd_cnt[par]++;
            maxn = max (maxn, frd_cnt[par]);
        }
        printf ("%d\n", maxn);
    }
    return 0;
}
