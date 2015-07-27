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

void Knights (int a, int b){
    int res;
    res = ((a*b)+1) / 2;
    printf ("%d knights may be placed on a %d row %d column board.\n", res, a, b);
}

void spcl_case (int a, int b){
    int ans, maxn;
    maxn = max (a, b);
    ans = maxn / 2;
    if(maxn % 4 != 0) ans++;
    ans *= 2;
    printf ("%d knights may be placed on a %d row %d column board.\n", ans, a, b);
}

int main(){
    int r, c;
    while (scanf ("%d%d", &r, &c) == 2){
        if (r == 0 && c == 0) break;
        if (r == 1 || c == 1)
            printf ("%d knights may be placed on a %d row %d column board.\n", r*c, r, c);
        else if (r < 3 || c < 3) spcl_case(r, c);
        else Knights(r, c);
    }
    return 0;
}
