#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 105
#define row 102
#define col 101

int main(){
    int n, i, j, cross_cnt, ans, tmp, check, sum;
    char board[row][col];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) scanf ("%s", board[i]);
    check = cross_cnt = 0 ;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (board[i][j] == '#' && board[i][j+1] == '#' && board[i+1][j] == '#'
                && board[i][j-1] == '#' && board[i-1][j] == '#'){
//                    check = 1;
//                    break;
                board[i][j] = '.'; board[i][j+1] = '.'; board[i+1][j] = '.';
                board[i][j-1] = '.'; board[i-1][j] = '.';
            }
        }
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (board[i][j] == '#') cross_cnt++;
    if (!cross_cnt) puts ("YES");
    else puts ("NO");
    return 0;
}
