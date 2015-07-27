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

#define LLI long long int
#define ULL unsigned long long int
#define MAX 100005
#define alpa 26
#define row 2005
#define col 2005
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)


int main (){
    int tc, i, cs=1;
    double r, x, A1, A2, A3;
    double pi = 2*acos(0.0);
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%lf", &r);
        x = 2 * r;
        A1 = x * x;
        A2 = pi * (r * r);
        A3 = A1 - A2;
        printf ("Case %d: %.2lf\n", cs++, A3);
    }

    return 0;
}
