#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 99999

/*int rook_kemne_jai(int r1, int c1, int r2, int c2){
    if (abs (r1-r2) != abs (c1-c2)) move = 1;
    else if (abs (r1-r1) == abs (c1-c2)) move = 2;
    else move = 0;
    return move;
}*/



int rook_kemne_jai(int r1, int c1, int r2, int c2){
    int move = 0;
    if (r1 == r2 || c1 == c2) move = 1;
    else move = 2;
    return move;
}

int bishop_kemne_jai(int r1, int c1, int r2, int c2){
    int move = 0;
    if (abs (r1-r2) == abs (c1-c2)) move = 1;
    else if (abs (r1-r2) % 2 == abs (c1-c2) % 2) move = 2;
    else move = 0;
    return move;
}

int king_kemne_jai(int r1, int c1, int r2, int c2){
    int maxn = 0;
    maxn = max (abs(r1-r2), abs (c1-c2));
    return maxn;
}

int main(){
    int r1, c1, r2, c2, rook, bishop, king;
    while (scanf ("%d%d%d%d", &r1, &c1, &r2, &c2) == 4){
        rook = rook_kemne_jai (r1, c1, r2, c2);
        bishop = bishop_kemne_jai (r1, c1, r2, c2);
        king = king_kemne_jai (r1, c1, r2, c2);
        printf ("%d %d %d\n", rook, bishop, king);
    }
    return 0;
}
