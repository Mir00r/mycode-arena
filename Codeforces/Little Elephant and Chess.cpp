#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long
#define LL __int64
#define ULL unsigned long long
#define row 20
#define col 20
#define MAX 100000+6
#define jora pair <LLI, LLI>
#define ff first
#define ss second
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


int main(){
    int i, j, ans = 0;
//    char board[row][col];
    bool check = true;

    char board[row];

//    for (i = 0; i < 8; i++)
//        scanf ("%s", board);


    for (i = 0; i < 8; i++){
        scanf ("%s", board);

        for (j = 0; j < 7; j++)
            if (board[j] == board[j + 1])
                check = false;
    }


    if (check)
        puts ("YES");
    else
        puts ("NO");

    return 0;
}


/*
//        black = false;
//        white = true;

        for (i = 1; i <= 8; i++){
            for (j = 1; j <= 8; j++){
                if (board[i][j] == 'W')
                    white = 1;
                   // ans  = 1;


                if (board[i][j] == 'B')
                    black = 0;
                   // ans = 0;

                    if (white + black != 1){
                        puts ("NO");
                        return 0;
                    }

//                if (white == false && black == true){
//                    ans = 1;
//                    continue;
//                }
//                else{
//                    puts ("NO");
//                    return 0;
//                }
            }
        }

//        if (ans)
            puts ("YES");



*/
