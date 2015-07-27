#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long int
#define MAX 2005
#define row 30
#define col 30
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001



double perimeter (double x, double y, double z){
    double s;
    s = (x+y+z) / 2;
    return s;
}

double tri_area (double s, double x, double y, double z){
    double area;
    area = sqrt (s*(s-x) * (s-y) * (s-z));
    return area;
}


int main(){
    double redi, ans;
    double a, b, c;
    double peri, area;
    while (scanf ("%lf %lf %lf", &a, &b, &c) == 3){
        //redi = 0.0;

        peri = perimeter (a, b, c);
        area = tri_area(peri, a, b, c);
        //printf ("Peri = %.3lf   Area = %.3lf\n", peri, area);

        redi = area / peri;
        if (a == 0.0 || b == 0.0 || c == 0.0)
            printf ("The radius of the round table is: 0.000\n");
        else
            printf ("The radius of the round table is: %.3lf\n", redi);
    }

    return 0;
}
