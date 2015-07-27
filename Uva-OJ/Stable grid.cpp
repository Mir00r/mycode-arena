#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9999
#define row 101
#define col 102
#define eps 1e-11

bool flag;
int main(){
    int t, cs=1, i, j, n, ans, cnt, tmp;
    int grid[row][col], visit[MAX];
    scanf ("%d", &t);
    while (t--){
        scanf ("%d", &n);
        memset (visit, 0, sizeof (visit));
;       for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                scanf ("%d", &grid[i][j]);
                visit[grid[i][j]]++;
            }
            //printf ("Ok = %d\n\n", visit[i]);
        }
        flag = true;
        for (i = 0; i < 100; i++){
            if (visit[i] > n) flag = false;
        }
        if (flag == true) printf ("Case %d: yes\n", cs++);
        else printf ("Case %d: no\n", cs++);
    }
    return 0;
}

/*bool ans;
int main (){
    int tc, i, j, n, cs = 1;
    int table[row][col], visit[MAX];
    scanf ("%d", &tc);
    while (tc-- ){
        scanf ("%d", &n);
        memset (visit, 0, sizeof (visit));
        for (i = 0; i < n; i++ ){
            for (j = 0; j < n; j++ ){
                scanf ("%d", &table[i][j]);
                visit[table[i][j]]++;
            }
        }
        ans = true;
        for (i = 0; i < 101; i++){
            if (visit[i] > n) ans = false;
        }
        if (ans) printf ("Case %d: yes\n", cs++);
        else printf ("Case %d: no\n", cs++);
    }
    return 0;
}*/
