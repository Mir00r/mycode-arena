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
int parent[MAX], N1, N2;
//int graph[row][col];
int visit[row], frd_cnt[MAX];
vector <int> graph[MAX];

int find_representative(int r){
    if (parent[r] == r) return r;
    else return (parent[r] = find_representative(parent[r]));
}

void make_Union(int a, int b){
    int u, v;
    u = find_representative(a);
    v = find_representative(b);
    //if (u == v) N1++;
    //else{
        parent[u] = v;
        //N2++;
    //}
}

bool is_Union (int a, int b){
    return (find_representative(a) == find_representative(b));
}

void makset(int n){
    parent[n] = n;
}

int main(){
    int tc, cs=1, i, j, computer, tmp, cnt, ans, maxn, src, des;
    char input[MAX], ch;
    bool blank = true;
    scanf ("%d", &tc);
    //getchar();
    while (tc--){
        if (blank){
            puts (""); blank = false;
        }
        scanf ("%d", &computer);
        getchar ();
        for (i = 0; i < computer; i++) makset(i);
        N1 = N2 = 0;
        memset (input, 0, sizeof (input));
        while (gets(input)){
            if (input[0] == NULL) break;
            sscanf (input, "%c%d%d", &ch, &src, &des);
            //memset (input, 0, sizeof (input));
            if (ch == 'c'){
                if (is_Union(src, des) == false)
                    make_Union(src, des);
                // parent[u] = v;
            }
            else if (ch == 'q'){
                if (is_Union(src, des) == true)N1++;
                else N2++;
            }
        }
        printf ("%d,%d\n", N1, N2);
        if (tc) puts ("");
    }
    return 0;
}
