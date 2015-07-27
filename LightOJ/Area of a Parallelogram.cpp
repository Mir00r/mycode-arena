#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9999

int main(){
    double ax, ay, bx, by, cx, cy, dx, dy, ab, bc, ca, s, abc, abcd;
    int tc, cs=1, i, j, cnt;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%lf%lf%lf%lf%lf%lf", &ax, &ay, &bx, &by, &cx, &cy);
       // ab = sqrt ((bx-ax) * (bx-ax) + (by-ay) * (by-ay));
                ab = sqrt (pow (bx-ax, 2) + pow(by-ay, 2));
       // printf ("AB = %.0lf\n", ab);
       // bc = sqrt ((cx-bx) * (cx-bx) + (cy-by) * (cy-by));
               bc = sqrt (pow(cx-bx, 2) + pow(cy-by, 2));

        //printf ("BC = %.0lf\n", bc);
        //ca = sqrt ((cx-ax) * (cx-ax) + (cy*ay) * (cy*ay));
                ca = sqrt (pow(cx-ax, 2) + pow(cy-ay, 2));

       // printf ("CA = %.0lf\n", ca);
        s = (ab+bc+ca) / 2.0;
       // printf ("S = %.0lf\n", s);
        abc = sqrt (s * (s-ab) * (s-bc) * (s-ca));
       // printf ("ABC = %.0lf\n", abc);
        abcd = 2 * abc;
        dx = ax + cx - bx;
        dy = ay + cy - by;
        printf ("Case %d: %.0lf %.0lf %.0lf\n", cs++, dx, dy, abcd);
    }
    return 0;
}
