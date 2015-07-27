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
#define eps 1e-6

int main(){
    double L, C, R1, R2, x1, x2, y1, y2, tmp, str, dis;
    while (scanf ("%lf%lf%lf%lf", &L, &C, &R1, &R2) == 4){
        if (L+C+R1+R2 == 0) break;
        x1 = R1; y1 = R1;
        x2 = L-R2; y2 = C-R2;
        tmp = R1; str = R2;
        dis = sqrt (pow((x1-x2), 2) + pow ((y1-y2), 2));
        if (tmp+str <= dis+eps && R1+R1 <= L && R1+R1 <= C && R2+R2 <= L && R2+R2 <= C) puts ("S");
       // if (R1+R2 <= dis+eps && R1+R2 <= L) puts ("S");
        else puts ("N");
    }
    return 0;
}

/*Put one cylinder against the upper/left walls and another one against the lower/right walls.
Calculate the distance between the centers.*/
