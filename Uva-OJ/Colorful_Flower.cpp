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
#define eps 1e9
#define pi 3.1415926535897932384626433832795

int main(){
    int a, b, c;
    double Area, S, R, radius, SF_regions, V_regions, Ross_regions;
    while (scanf ("%d%d%d", &a, &b, &c) == 3){
        S = (a+b+c) / 2.0;
        //printf ("S = %.4lf\n", S);
        Area = sqrt (S*(S-a) * (S-b) * (S-c));
        //printf ("Area = %.4lf\n", Area);
        R = (a*b*c) / (4*Area);
        //printf ("R = %.4lf\n", R);
        radius = Area / S;
        //printf ("Radius = %.4lf\n", radius);
        SF_regions = (pi*R*R) - Area; V_regions = Area - (pi*radius*radius);
        Ross_regions = pi*radius*radius;
        printf ("%.4lf %.4lf %.4lf", SF_regions, V_regions, Ross_regions);
        printf ("\n");
    }
    return 0;
}
