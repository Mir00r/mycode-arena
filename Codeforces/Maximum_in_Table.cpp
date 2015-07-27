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

#define LLI long long int
#define ULL unsigned long long int
#define MAX 100000
#define row 15
#define col 15
#define pb push_back
#define inf (1 << 29)
#define mod 1000000007

int mat[row][col];


int cal (int r, int c){
    if (r == 1 || c == 1)
        return 1;
   // else
        return ( cal(r-1, c) + cal(r, c-1) );
}



void save_res (){
    int i, j;
    for (i = 1; i <= 10; i++){
        mat[i][1] = 1;
        mat[1][i] = 1;
    }

    for (i = 2; i <= 10; i++)
        for (j = 2; j <= 10; j++)
            mat[i][j] = mat[i-1][j] + mat[i][j-1];
}


int main(){
    save_res();
    int n, i, j, ans;
    scanf ("%d", &n);

    ans = cal (n, n);
    printf ("%d\n", ans);

   // printf ("%d\n", mat[n][n]);





//    if (n == 1) puts ("1");
//    else if (n == 2) puts ("2");
//    else if (n == 3) puts ("6");
//    else if (n == 4) puts ("20");
//    else if (n == 5) puts ("70");
//    else if (n == 6) puts ("252");
//    else if (n == 7) puts ("924");
//    else if (n == 8) puts ("3432");
//    else if (n == 9) puts ("12870");
//    else if (n == 10) puts ("48620");
    return 0;
}
