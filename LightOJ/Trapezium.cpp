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
    double a, b, c, d, height, area, f, e;
    int tc, cs=1, i, j;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%lf%lf%lf%lf", &a, &c, &b, &d);
        e = sqrt ((-a+b+c+d) * (a-b+c+d) * (a-b-c+d) * (a-b+c-d));
        f = 2 * fabs(a-b);
        height = e/f;
        area = 0.5 * (a+b) * height;
        printf ("Case %d: %.10lf\n", cs++, area);
    }
    return 0;
}
