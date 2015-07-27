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



int main(){
    double x, y;
    double ax, ay, bx, by, cx, cy, dx, dy;

    while (scanf ("%lf %lf %lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy) == 8){
        if (ax == bx && ay == by){
            x = cx + dx - ax;
            y = cy + dy - ay;
        }
        else if (ax == cx && ay == cy){
            x = bx + dx - ax;
            y = by + dy - ay;
        }
        else if (ax == dx && ay == dy){
            x = bx + cx - ax;
            y = by + cy - ay;
        }
        else if (bx == cx && by == cy ){
            x = ax + dx - bx;
            y = ay + dy - by;
        }
        else if (bx == dx && by == dy ){
            x = ax + cx - bx;
            y = ay + cy - by;
        }
        else if (cx == dx && cy == dy ){
            x = ax + bx - cx;
            y = ay + by - cy;
        }
        printf ("%.3lf %.3lf\n", x, y);
    }
    return 0;
}
