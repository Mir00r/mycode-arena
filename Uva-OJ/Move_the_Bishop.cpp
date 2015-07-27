#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 99999


void bishop_move(int R1, int C1, int R2, int C2){
    if(R1 == R2 && C1 == C2) puts("0");
    else if (abs (R1-R2) == abs (C1-C2)) puts ("1");
    else if (abs (R1-R2) % 2 == abs (C1-C2) % 2) puts ("2");
    else puts ("no move");
}

int main(){
    int tc, query, n, i, j, r1, r2, c1, c2;
    bool blank = false;
    scanf ("%d", &tc);
    while (tc--){
//        if (blank == false){
//            puts (""); blank = true;
//        }
        scanf ("%d%d", &query, &n);
        for (i = 0; i < query; i++){
            scanf ("%d%d%d%d", &r1, &c1, &r2, &c2);
            bishop_move(r1, c1, r2, c2);
            //if (i != n) puts ("");
        }
        //bishop_move(r1, c1, r2, c2);
       // if (tc != 0) puts ("");
    }
    return 0;
}
