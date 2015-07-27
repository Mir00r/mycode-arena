#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 88888
#define row 500
#define col 500

int board[row][col];

int main(){
    int weight, height, num_board, tot_size, x1, x2, y1, y2, i, j, k, ans, cnt, tmp;
    while (scanf ("%d%d%d", &weight, &height, &num_board) == 3){
        if (weight == 0 && height == 0 && num_board == 0) break;
        for (i = 0; i < weight; i++)
            for (j = 0;  j < height; j++) board[i][j] = 1;
            cnt = 0;
            tot_size = weight*height;
            for (k = 0; k < num_board; k++){
                scanf ("%d%d%d%d", &x1, &y1, &x2, &y2);
                x1--, y1--, x2--, y2--;
                if (x1 > x2) swap (x1, x2);
                if (y1 > y2) swap (y1, y2);
                for (i = y1; i <= y2; i++)
                    for (j = x1; j <= x2; j++)
                        if (board[i][j] == 1)
                            board[i][j] = 0, tot_size--; //cnt++;
            }
           // ans = (weight*height) - cnt;
            if(tot_size)
                if(tot_size != 1) printf("There are %d empty spots.\n", tot_size);
                else
                    printf("There is one empty spot.\n");
            else
                printf("There is no empty spots.\n");
    }
    return 0;
}
