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
#define MAX 201

    int cs=1, r, c, ans;

void knights_move(int a, int b){
    int res;
    res = ((a*b)+1) / 2;
    printf ("Case %d: %d\n", cs++, res);
}

void spcl_move (int a, int b){
    int res, maxn, tmp;
    maxn = max (a, b);
    res = maxn / 2;
    if (maxn % 4 != 0) res++;
    res *= 2;
    printf ("Case %d: %d\n", cs++, res);
}

int main(){
    int tc;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &r, &c);
        if (r == 1 || c == 1) printf ("Case %d: %d\n", cs++, r*c);
        else if (r < 3 || c < 3) spcl_move(r, c);
        else knights_move(r, c);
    }
    return 0;
}
