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
    double a, b, c, R1, R2, delta, ans, tmp;
    scanf ("%lf%lf%lf", &a, &b, &c);
    delta = (b*b) - 4*c*a;
    if (a == 0 || delta < 0) puts ("Impossivel calcular");
    R1 = (-b + sqrt(delta)) / (2*a);
    R2 = (-b - sqrt(delta)) / (2*a);
    printf ("R1 = %.5lf\n", R1);
    printf ("R2 = %.5lf\n", R2);
    return 0;
}
