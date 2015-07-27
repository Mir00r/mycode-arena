#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999
#define pi 3.1415926535897932384626433832795

int main(){
    int tc, cs=1, i, j, r1, r2, h, p;
    double ans, R, tmp, vol1, vol2, vol;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d%d%d", &r1, &r2, &h, &p);
        /*vol1 = 2*pi * r1 * h;
        vol2 = 2*pi * r2 * p;
        ans = vol1 - vol2;*/
        R = r2 + (r1-r2) * p/h;
        vol = 1/3 * h * pi * (R*R + r2*R + r2*r2);
        printf ("Case %d: %lf\n", cs++, vol);
    }
    return 0;
}
