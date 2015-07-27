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
#define row 5
#define col 5
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007


int n, m, p;

vector <int> graph[MAX];
map <string, int> mp;

int visit[MAX], level[MAX], cost[MAX];


int bfs (int src, int des){
    int i, len, v, u, top;

    memset (visit, 0, sizeof (visit));
    memset (level, 0, sizeof (level));

    queue <int> Q;

    Q.push (src);
    visit[src] = 1;

    while (Q.empty () == false){
        top = Q.front ();
        Q.pop ();
        len = graph[top].size ();

        for (i = 0; i < len; i++){
            v = graph[top][i];

            if (visit[v] == 0){
                Q.push (v);
                level[v] = level[top] + 1;
                visit[v] = 1;

                if (v == des)
                    return level[v];
            }
        }
    }
   return -1;
}


void input (){
    int i , j, indx=1, src, des;
    char name[row], pt1[row], pt2[row];

    scanf ("%d %d %d", &n, &m, &p);

    for (i = 0; i < n; i++){
         scanf (" %s", &name);

         mp[name] = indx++;

//        if (mp.find(name) == mp.end()){
//            mp[name] = indx++;
//        }
    }

    for (j = 0; j < m; j++){
        scanf (" %s%s", &pt1, &pt2);
        src = mp[pt1];
        des = mp[pt2];

        graph[src].pb (des);
        graph[des].pb (src);
    }

}



void cal (){
    int val, i, x, y, ans=0, cnt=0;
    char sr[row], ds[row];

    for (i = 0; i < p; i++){
        scanf ("%d %s %s", &val, &sr, &ds);

        x = mp[sr];
        y = mp[ds];

        ans = bfs (x, y);
        cost[cnt++] = val * ans  * 100;
    }
}



int main(){
    int tc, cs=1, i, j, k, ans, indx=1, src, des;

    int blank = 0;
    scanf ("%d", &tc);

        puts ("SHIPPING ROUTES OUTPUT");
        NL;

    while (tc--){

        mp.clear ();
        for (i = 0; i < n; i++)
            graph[i].clear ();

            input ();
            cal ();

            if (blank++){
                NL;
              //  blank = 1;
            }

            printf ("DATA SET  %d", cs++);
            NL;
            NL;

            for (k = 0; k < p; k++){
                if (cost[k] < 0)
                    puts ("NO SHIPMENT POSSIBLE");
                else
                    printf ("$%d\n", cost[k]);
            }
           // NL;

        }

        NL;
        puts ("END OF OUTPUT");

    return 0;
}




/*
//        puts ("SHIPPING ROUTES OUTPUT");
//        NL;

//
//        for (i = 0; i < n; i++){
//            scanf (" %s", &name);
//
//            if (mp.find(name) == mp.end()){
//                mp[name] = indx++;
//            }
//
//            for (j = 0; j < m; j++){
//                scanf (" %s%s", &pt1, &pt2);
//                src = mp[pt1];
//                des = mp[pt2];
//
//                graph[src].pb (des);
//                graph[des].pb (src);
//            }

*/
