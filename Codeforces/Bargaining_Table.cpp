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
#define MAX 100002
#define row 30
#define col 30
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int r, c;
char ract[row][col];

bool isoka(int r1, int r2, int c1, int c2){
    int i, j;
    for (i = r1; i < r2; i++)
        for (j = c1; j < c2; j++)
            if (ract[i][j] == '1')
                return false;
    return true;
}


int find_table (int x, int y){
    int i , j, res=0;
    //bool check = false;

    for (i = x+1; i <= r; i++){
        for (j = y+1; j <= c; j++){
            if (isoka(x, i, y, j)){
                res = max (res, (i - x + j - y) * 2);
            }
        }
    }
    return res;
}



int main (){
    int i, j, ans, tmp;
    scanf ("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        //for (j = 0; j < c; j++)
        scanf ("%s", ract[i]);
    ans = 0;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (ract[i][j] == '0')
                ans = max (ans, find_table (i, j));

    printf ("%d\n", ans);
    return 0;
}
