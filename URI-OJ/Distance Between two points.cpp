
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 999999
#define row 100
#define col 100
#define eps 1e-9
#define Pi 3.1415926535897932384626433832795
#define pi 3.14159

int main(){
    int x1, x2, y1, y2, cnt, tmp;
    double distance;
    scanf ("%d%d%d%d", &x1, &y1, &x2, &y2);
    distance = sqrt (pow(x2-x1, 2) + pow(y2-y1, 2));
    printf ("%.4lf\n", distance);
    return 0;
}
