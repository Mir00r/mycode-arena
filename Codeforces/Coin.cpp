#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 5
#define col 5
#define MAX 1006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777

//char coin[row][col], res[row];

char coin[row];
int mark[row];


int main(){
    int i, j, k, tmp, cnt, ans;

    for (i = 0; i < 3; i++){
        scanf ("%s", coin);
        if (coin[1] == '<'){
           // puts ("oka");
            mark[coin[2] ]++;
        }
        else{
           // puts ("boka");
            mark[coin[0] ]++;
        }
    }

    if (mark['A'] && mark['B'] && mark['C'])
        puts ("Impossible");
    else{
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                if (mark['A' + j] == i){
                  //  printf ("I = %d     J = %d\n", i, j);
                    printf ("%c", 'A' + j);
                }
            }
        }
    }
    NL;
    return 0;
}







/*int main(){
    int len, i, j, k, tmp, cnt, ans;

    for (i = 0; i < 3; i++)
        scanf ("%s", coin[i]);

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (coin[i][j] == '>'){
                //res[0] = coin[i][j-1];
                //res[1] = coin[i][j+1];
                for (k = 0; k < 3; k++){
                    if (k == 0){
                        if (coin[i][j+1] - res[k] == 0)
                            res[k] = coin[i][j+1];
                        else
                            res[k] = coin[i][j+1];
                    }
                    else if (k == 1){

                    }
                }
            }
        }
    }

    return 0;
}

*/
