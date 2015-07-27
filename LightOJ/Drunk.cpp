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
#define MAX 20
#define row 25
#define col 25
#define white 0
#define gray 1
#define black 2
#define eps 1e-9

//stack <int> topo;
char drink_list[row][col], str1, str2;
//vector <int> visit_list[MAX];
int adj_list[row][col], visit_list[row][col];
map <char, int> topo;
int dfs_num[MAX], dfs_vis[MAX];

void dfs(int src){

}

int main(){
    int t, i, j, num_of_drink, ans, tmp, cnt;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d", &num_of_drink);
        for (i = 0; i < num_of_drink; i++) scanf ("%s%s", str1, str2);
        memset (dfs_vis, -1, sizeof (dfs_vis));

    }
    return 0;
}
