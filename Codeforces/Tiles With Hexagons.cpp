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
#define MAX 999

int main(){
    int tc, cs=1, a, b, c, i, j, ans;
    while (scanf ("%d%d%d", &a, &b ,&c) == 3){
        //ans = a * (b+c-1) + (b-1) * (c-1);
        ans = a*c + a * (b-1) + (b-1) * (c-1);
        printf ("%d", ans);
    }
    return 0;
}
