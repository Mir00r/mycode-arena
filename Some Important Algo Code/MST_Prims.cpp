/*
    How to implement the above algorithm?

        We use a boolean array mstSet[] to represent the set of vertices included in MST.
        If a value mstSet[v] is true, then vertex v is included in MST, otherwise not.
        Array key[] is used to store key values of all vertices. Another array parent[]
        to store indexes of parent nodes in MST. The parent array is the output array
        which is used to show the constructed MST.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 20
#define row 20
#define col 20
#define eps 1e-9
#define ver 5
//int ver;


// A utility function to find the vertex with minimum key value, from
// the set of vertices not yet included in MST

int min_key(int key[], bool mstset[]){
    int i, minx = 9999, minx_indx;
    for (i = 0; i < ver; i++){
        if (mstset[i] == false && key[i] < minx){
            minx = key[i];
            minx_indx = i;
        }
    }
    return minx_indx;
}

// A utility function to print the constructed MST stored in parent[]

void print_mst(int paren[], int V, int graph[ver][ver]){
    printf ("Edge   weight\n\n");
    for (int i = 1; i < ver; i++)
        printf ("%d - %d    %d\n", paren[i], i, graph[i][paren[i]]);
}


// Function to construct and print MST for a graph represented using adjacency
// matrix representation

void prims_mst(int graph[ver][ver]){
    int key[ver];       // Array to store constructed MST
    int parent[ver];    // Key values used to pick minimum weight edge in cut
    bool mstset[ver];   // To represent set of vertices not yet included in MST
    int i, j, u, v, cnt;

    // Initialize all keys as INFINITE
    for (i = 0; i < ver; i++){
        key[i] = 99999;
        mstset[i] = false;
    }

    key[0] = 0;         // Make key 0 so that this vertex is picked as first vertex
    parent[0] = -1;     // First node is always root of MST

    // The MST will have Ver vertices

    for (i = 0; i < ver-1; i++){

        // Pick thd minimum key vertex from the set of vertices
        // not yet included in MST

        u = min_key(key, mstset);

        mstset[i] = true;   // Add the picked vertex to the MST Set

        // Update key value and parent index of the adjacent vertices of
        // the picked vertex. Consider only those vertices which are not yet
        // included in MST

        for (v = 0; v < ver; v++){
            // graph[u][v] is non zero only for adjacent vertices of m
           // mstSet[v] is false for vertices not yet included in MST
           // Update the key only if graph[u][v] is smaller than key[v]

            if (graph[u][v] && mstset[v] == false && graph[u][v] < key[v]){
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    print_mst(parent, ver, graph);
}


int main (){
    /* Let us create the following graph
          2    3
      (0)--(1)--(2)
       |   / \   |
      6| 8/   \5 |7
       | /     \ |
      (3)-------(4)
            9          */
   int graph[ver][ver] = {{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };
//    int chitro[ver][ver]{
//                            {1, 0, 1, 0},
//                            {2, 0, 2, 0},
//                            {2, 0, 4, 0}
//                        };

    // Print the solution
    prims_mst(graph);
    return 0;
}

/*
int a, b, u, v, n, i, j, count = 1;
int visited[10] = {0}, min, min_cost = 0, cost[10][10];
int main(){
    int t, k;
    scanf ("%d", &t);
    for (k = 1; k <= t; k++){
        printf("\n Enter the number of nodes:");
        scanf("%d",&n);
        printf("\n Enter the adjacency matrix:\n");
        for(i = 1; i <= n; i++)
            for(j = 1; j <= n; j++){
                scanf("%d",&cost[i][j]);
                if(cost[i][j] == 0)
                    cost[i][j] = 999;
            }
            visited[1] = 1;
            printf("\n");
            while(count < n){
                for(i = 1, min = 999; i <= n; i++)
                    for(j = 1; j <= n; j++)
                        if(cost[i][j] < min)
                            if(visited[i] != 0){
                                min = cost[i][j];
                                a = u = i;
                                b = v = j;
                            }
                    if(visited[u] == 0 || visited[v] == 0){
                        printf("\n Edge %d:(%d %d) cost:%d", count++, a, b, min);
                        min_cost += min;
                        visited[b] = 1;
                    }
                    cost[a][b] = cost[b][a] = 999;
            }
            printf("\n Minimun cost = %d", min_cost);
    }
    return 0;
}*/
