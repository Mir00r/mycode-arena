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
    int a, b, c, d, res, tmp;
    double ans, r;
    scanf ("%d%d%d%d", &a, &b, &c, &d);
    res = (a*b) - (c*d);
    printf ("DIFERENCA = %d\n", res);
    return 0;
}


