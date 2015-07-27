#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 100000+5
#define row 100
#define col 100
//#define pi acos (-1)

double pi = acos (-1.0);

int main(){
    int tc, cs=1, n, i, j;
    double Radi, redi, tmp, ans;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%lf %d", &Radi, &n);
        tmp = sin (pi / n);
        //printf ("tmp = %.3lf\n", tmp);
        ans = (tmp * Radi) / (tmp + 1);
        printf ("Scenario #%d:\n%.3lf\n\n", cs++, ans);
    }
    return 0;
}
