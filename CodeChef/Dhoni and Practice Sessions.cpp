#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 100005
#define inf 1000000009

int main(){
//    #ifdef Mir00r
//        freopen ("input.txt", "r", stdin);
//        //freopen ("output.txt", "w", stdout);
//    #endif

    int tc, i, j;
    double s, area, a, b, c, redius, tmp;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%lf %lf %lf", &a, &b, &c);
        tmp = a * b * c;
        s = (a+b+c)/ 2;
        //area = sqrt (s * (s-a) * (s-b) * (s-c));
        area = sqrt ((b+c-a) * (c+a-b) * (a+b-c) * (a+b+c));
        printf ("S = %.2lf  Area = %.2lf\n", s, area);
        redius = tmp / area;
        printf ("%.2lf\n", redius);
    }
    return 0;
}


