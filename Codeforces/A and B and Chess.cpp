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
#define MAX 105
#define row 70
#define col 70
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


char board[row][col];


int main(){
    int i , j, ans, sum, tmp, black, white;

    for (i = 0; i < 8; i++)
        scanf ("%s", board[i]);

    black = white = 0;

    for (i = 0; i < 8; i++){
        for (j = 0; j < 8; j++){
            if (board[i][j] >= 'A' && board[i][j] <= 'Z'){
                if (board[i][j] == 'Q')
                    white += 9;
                else if (board[i][j] == 'R')
                    white += 5;
                else if (board[i][j] == 'B')
                    white += 3;
                else if (board[i][j] == 'N')
                    white += 3;
                else if (board[i][j] == 'P')
                    white += 1;
            }

            else if (board[i][j] >= 'a' && board[i][j] <= 'z'){
                if (board[i][j] == 'q')
                    black += 9;
                else if (board[i][j] == 'r')
                    black += 5;
                else if (board[i][j] == 'b')
                    black += 3;
                else if (board[i][j] == 'n')
                    black += 3;
                else if (board[i][j] == 'p')
                    black += 1;
            }

        }
    }
   // printf ("%d %d\n", white, black);

    if (white == black) puts ("Draw");
    else if (white > black) puts ("White");
    else puts ("Black");

    return 0;
}
