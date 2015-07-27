
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long int
#define MAX 1005
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)


struct cordi{
    int x, d;
}pos[MAX];


int main(){
    int n, cnt=0, ans, i, j;
    bool check;

    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d %d", &pos[i].x, &pos[i].d);

    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            if ((pos[i].x + pos[i].d == pos[j].x) && (pos[j].x + pos[j].d == pos[i].x)){
                puts ("YES");
                return 0;
            }
        }
    }
    puts ("NO");

    return 0;
}
