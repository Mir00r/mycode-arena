#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long LLI
#define MAX 10005+5
#define row 55
#define col 55
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007

    // Finding Shortest Path problem

//vector <int> grid[MAX];
int NC, TTL, src, des, node, edge, tmp;
//int visit[MAX], level[MAX];


//vector <int> graph;

map <int, vector<int> > graph;
map <int, int> visit;
map <int, int>::iterator it;


void bfs (int node){
    int top, len, u, v, i;
    queue <int> Q;

    Q.push (node);

    visit[node] = 0;

    while (Q.empty () == false){
        top = Q.front ();
        Q.pop ();

        len = graph[top].size ();

        for (i = 0; i < len; i++){
            v = graph[top][i];

            if (!visit.count (v)){
                visit[v] = visit[top] + 1;
                Q.push (v);
            }
        }
    }

}



int main(){
    int i, j, ans, cs=1, cnt;
    while (scanf ("%d", &NC) == 1 && NC){

     //   for (i = 0; i < MAX; i++) grid[i].clear();
        graph.clear ();
        for (i = 0; i < NC; i++){
            scanf ("%d %d", &src, &des);
            //grid[src].pb(des);
            //grid[des].pb(src);

            graph[src].pb (des);
            graph[des].pb (src);
        }

      //  ans = 0;

        while (scanf ("%d %d", &node, &edge) == 2){
           // ans = bfs (node, edge);

            if (node == 0  && edge == 0) break;

            cnt = 0;
            visit.clear ();

            bfs (node);
            for (it = visit.begin (); it != visit.end (); it++){

                if (it->second <= edge)
                    cnt++;

//                if (it->second > edge)
//                     ans++;
            }

//            ans += (graph.size () - visit.size() );

            ans = graph.size() - visit.size();

            ans += visit.size() - cnt;

      //      printf ("Visit = %d graph = %d  Cnt = %d\n", visit.size(), graph.size(), cnt);

            printf ("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", cs++, ans, node, edge);

        }
//        graph.clear ();

      //  printf ("%d\n", ans);
    }
    return 0;
}





/*
int bfs (int nod, int edg){
    int i, j, s, v, len, cnt=1;
    queue <int> Q;
    Q.push(nod);
    Q.push(edg);

   // CLR (visit);
    //CLR (level);

    memset (visit, 0, sizeof (visit));
    memset (level, 0, sizeof (level));

    visit[node] = 1;

    while (Q.empty() == false){
        s = Q.front();
        Q.pop();

        len = grid[s].size();
        for (i = 0; i < len; i++){
            v = grid[s][i];

            if (! visit[v]){
                cnt++;
                visit[v] = 1;
                level[v] = level[s] + 1;
                Q.push (v);
            }

        }
    }

    return cnt;
}



//                if ((*it).second > edge)
//                    ans++;
*/
