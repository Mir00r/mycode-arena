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
#define MAX 300
#define row 200
#define col 200
#define ctoi(char) ((char) - 'A')

//vector <int> graph[MAX];
/*bool graph[row][col];
bool visit[MAX];

void dfs (int src){
    if (visit[src]) return;
    visit[src] = true;
    for (char i = 'A'; i <= 'Z'; i++)
        if(graph[src][i]) dfs(i);
}

int main(){
    char ch, str[3];
    int tc, n, j, kount, cnt, tmp, ans, a, b;
    bool blank = false;
    scanf ("%d", &tc);
    getchar();
    for (int i = 0; i < tc; i++){
        scanf ("\n%c", &str);
        getchar();
        n = ctoi(str[0]) + 1;
        if (i) printf ("\n");
        cnt = 0;
        //ch = str[0];
        //n = ctoi(ch) + 1;
        memset (visit, 0, sizeof (visit));
        memset (graph, 0, sizeof (graph));
       // for (j = 0; j < n; j++) graph[j].clear();
        while (gets(str) && strlen(str)){
            a = ctoi(str[0]); b = ctoi(str[1]);
            graph[a][b] = true;
            graph[b][a] = true;
        }
        for (char i = 'A'; i <= n; i++){
            if (visit[i]) continue;
                dfs(i);
                cnt++;
        }
        printf ("%d\n", cnt);
    }
    return 0;
}*/


bool graph[row][col], visit[MAX];

void dfs(int src){
    if(visit[src] == true) return;
    visit[src] = true;
    for(char i = 'A'; i <= 'Z' ;i++)
        if(graph[src][i] == true) dfs(i);
}

int main(){
    int tc, cnt, x, y;
    char ch, str[3];
    scanf ("%d", &tc);
    getchar();
    for(int i = 0; i < tc; i++){
        scanf ("\n%c", &str);
        getchar();
        memset(visit, 0, sizeof(visit));
        memset(graph, 0, sizeof(graph));
        cnt = 0;
        if(i) printf("\n");
            ch = str[0];
        while(gets(str) && strlen(str))
            graph[str[0]][str[1]] = graph[str[1]][str[0]] = true;
        for(char i = 'A'; i <= ch; i++){
            if(visit[i] == true) continue;
                dfs(i); cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
