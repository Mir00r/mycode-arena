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

// bool check_bicolor;
vector <int> adj_list[max];
int color[max];

bool fnd_bicol_by_BFS(){
    int s, t, len, i;
    queue <int> Q;
    Q.push(0);
    //memo (color, -1);
    color[0] = 1;
    while(Q.empty() == false){
        s = Q.front(); Q.pop();
        len = adj_list[s].size();
        for(i = 0; i < len; i++){
            t = adj_list[s][i];
            if(color[t]){
                if(color[t] == color[s]) return false;
            }
            else{
                color[t] = 1 - color[s];
                Q.push(t);
            }
            /*if (color[t] == -1){
                color[t] = 1 - color[s];
                Q.push(t);
            }
            else if (color[t] == color[s]){
                //check_bicolor = false;
                //break;
                return false;
            }*/
        }
    }
    return true;
}

int main(){
   int node, src, des, i, j, edge;
   while(scanf ("%d", &node) && node){
       scanf ("%d", &edge);
       for(i = 0; i < node; i++) adj_list[i].clear(),
       color[i] = 0;
        for(i = 0; i < edge; i++){
            scanf ("%d%d", &src, &des);
            adj_list[src].push_back(des);
           // adj_list[des].push_back(src);
          // printf ("%d ", adj_list[i]);
        }
        if(fnd_bicol_by_BFS() == true) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");
   }
   return 0;
}




/*int node, edge;
int visit_list[row][col], color[max], prev[max];
vector <int> adj_list[max];
bool check_bicolor;

void fnd_bicol_by_BFS (){
    int s, i, t, len;
    queue <int> Q;
    Q.push(0);
    //memo (color, -1);
    color[0] = 1;
//    check_bicolor = true;
    while (Q.empty() == false){
        s = Q.front(); Q.pop();
        len = adj_list[s].size();
        for (i = 0; i < len; i++){
            t = adj_list[s][i];
            if (color[t]){
                if (color[t] == color[s]){
                    check_bicolor = false;
                    break;
                }
            }
            else{
                color[t] = 1 - color[s];
                Q.push(t);
            }
        }
    }
    //return true;
    //if (check_bicolor) printf ("BICOLORABLE.\n");
    //else printf ("NOT BICOLORABLE.\n");
}

int main(){
    int i, j, ans, tmp, src, des;
    while (scanf ("%d", &node) && node){
        for (i = 0; i < node; i++)
            adj_list[i].clear(), color[i] = 0;
        scanf ("%d", &edge);
        //memo (color, 0);
        //adj_list.clear();
        for (i = 0; i < edge; i++){
            scanf ("%d%d", &src, &des);
            adj_list[src].push_back(des);
        }
        fnd_bicol_by_BFS();
        if (check_bicolor) printf ("BICOLORABLE.\n");
        else printf ("NOT BICOLORABLE.\n");
    }
    return 0;
}*/
