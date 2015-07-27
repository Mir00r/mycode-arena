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
#define row 100+10
#define col 100+10
#define MAX 1000+10

//vector <int> adj_list[MAX];
typedef vector <int> vi;

int main(){
    vi ler_unit;
    vector <vi> adj_list;
    int tc, i, j, u, v, lu, len, cs=1, tot_ler, curr_node, max_ler, max_node;
    bool blank = false;
    scanf ("%d", &tc);
    while (tc--){
        if (blank) printf ("\n"); blank = true;
        int n, m;
        scanf ("%d%d", &n, &m);
;        for (i = 0; i < n; i++){
            scanf ("%d", &lu);
            ler_unit.push_back(lu);
            adj_list.push_back(vi());
        }
;       for (i = 0; i < m; i++){
            scanf ("%d%d", &u, &v);
            adj_list[u].push_back(v);
        }
        tot_ler = 0;
        curr_node = 0;
        //len = adj_list[curr_node].size();
        while (adj_list[curr_node].size() > 0){
            max_ler = 0;
            max_node = -1;
            len = adj_list[curr_node].size();
            for (j = 0; j < len; j++){
                if (max_ler < ler_unit[adj_list[curr_node][j]]){
                    max_ler = ler_unit[adj_list[curr_node][j]];
                    max_node = adj_list[curr_node][j];
                }
            }
            curr_node = max_node;
            tot_ler += max_ler;
            //curr_node = max_ler;
        }
        printf("Case %d: %d %d\n", cs++, tot_ler, curr_node);
        ler_unit.clear();
        adj_list.clear();
    }
    return 0;
}


/*int main(){
    int tc, n, m, u, v, i, j, tmp, cnt, cs=1;
    int ler_unit[MAX], len, max_ler_unit, max_node, tot_ler_unit, curr_node;
    bool blank = false;
    scanf ("%d", &tc);
    while (tc--){
        if (blank) printf ("\n"); blank = true;
        scanf ("%d%d", &m, &n);
        for (i = 0; i < m; i++){
            scanf ("%d", &ler_unit[i]);
            adj_list[i].push_back(ler_unit[i]);
        }
        for (i = 0; i < n; i++) adj_list[i].clear();
        for (i = 0; i < n; i++){
            scanf ("%d%d", &u, &v);
            adj_list[u].push_back(v);
        }
        tot_ler_unit = 0; curr_node = 0;
        memset(ler_unit, 0, sizeof (ler_unit));
        //len = adj_list[curr_node].size();
        while (adj_list[curr_node].size() > 0){
            max_ler_unit = 0;
            max_node = -1;
            len = adj_list[curr_node].size();
            for (j = 0; j < len; j++){
                if(max_ler_unit < ler_unit[adj_list[curr_node][j]]){
                    max_ler_unit = ler_unit[adj_list[curr_node][j]];
                    max_node = adj_list[curr_node][j];
                }
            }
            //tot_ler_unit += max_ler_unit;
            curr_node = max_node;
            tot_ler_unit += max_ler_unit;
        }
        printf ("Case %d: %d %d\n", cs++, tot_ler_unit, curr_node);
        //adj_list.clear();
    }
    return 0;
}*/

