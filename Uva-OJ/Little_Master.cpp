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

int main(){
    int tc;
    double x, y, r, dist, SB, LB,ans;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%lf%lf%lf", &x, &y, &r);
        dist = sqrt ((x*x) + (y*y));
        SB = r - dist;
        LB = r + dist;
        printf ("%.2lf %.2lf\n", SB, LB);
    }
    return 0;
}
