#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 100005
#define row 100

int gx, gy, wx, wy, redi, len;

int distance (int p, int q, int m, int n){
    int a, b, dis;
    a = m - p;
    b = n - q;
    dis = sqrt (a*a + b*b);
    return dis;
}

int cal_equ (int d, int p, int q, int m, int n){
    int k, a, b, x, y;

    a = m - p;
    b = n - q;


    k = (d*d + redi*redi - len*len) / 2 *d;
    x = gx + a*k / d + b/d * sqrt (redi*redi - k*k);
    y = gy + b*k / d - a/d * sqrt (redi*redi - k*k);
    printf ("X = %d     Y = %d\n", x, y);

}


int main (){
    int tc, cs=1, ans, i, j;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d %d %d %d %d %d", &gx, &gy, &redi, &wx, &wy, &len);
        int dista = distance(gx, gy, wx, wy);
        printf ("Distance = %d\n", dista);
        int tmp = cal_equ(dista, gx, gy, wx, wy);
        printf ("Tmp = %d\n", tmp);
    }
    return 0;
}
