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

int main(){
    double a, b, c, ans, tmp;
    scanf ("%lf%lf%lf", &a, &b, &c);
    ans = (a*2 + b*3 + c*5) / (2+3+5);
    printf ("MEDIA = %.1lf\n", ans);
    return 0;
}


