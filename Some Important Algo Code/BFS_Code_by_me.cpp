#include <stdio.h>
#include <queue>

using namespace std;

#define row 100
#define col 100
#define White 0
#define Gray 1
#define Black 2
#define Nil -1
#define Inf 2147482647

int adj_mat[row][col], destination[row], parant[row], color[row];

void BFS(int vartex, int edge, int source, int dest){
    int i, j;
    for (i = 1; i <= vartex; i++){
        color[i] = White;
        parant[i] = Nil;
        destination[i] = Inf;
    }
    color[source] = Gray;
    destination[source] = 0;
    parant[source] = Nil;

    queue <int> Q;
    Q.push(source);
    while (! Q.empty()){
        i = Q.front();
        Q.pop();
        for (j = 1; j <= vartex; j++){
            if (adj_mat[i][j] == 1){
                if (color[j] == White){
                    color[j] = Gray;
                    destination[j] = destination[i] + 1;
                    parant [j] = i;
                    Q.push(j);
                }
            }
            color[j] = Black;
        }
    }
    for (i = 1; i <= vartex; i++)
    printf ("%d to %d distance %d\n", source, i, destination[i]);
}

void Print_path(int s, int v){
    if (s == v)
        printf ("%d ", s);
    else if (parant[v] == Nil)
        printf ("No path");
    else{
        Print_path(s, parant[v]);
        printf ("%d ", v);
    }
}

int main(){
    int vartex, edge, source, dest, u, v, i, j;
    printf ("Please enter number of vartex & edge: ");
    scanf ("%d%d", &vartex, &edge);
    for (i = 1; i <= edge; i++){
        printf ("Enter tarminal nodes: ");
        scanf ("%d%d", &u, &v);
        adj_mat[u][v] = 1;
    }
    printf ("Enter source to destination: ");
    scanf ("%d%d", &source, &dest);
    BFS (vartex, edge, source, dest);
    Print_path(source, dest);
    return 0;
}
