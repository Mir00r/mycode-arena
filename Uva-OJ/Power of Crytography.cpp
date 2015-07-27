#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 89999

int main(){
    double n, p, ans;
    while (scanf ("%lf%lf", &n, &p) == 2){
        ans = pow (p, 1/n);
        printf ("%.0lf\n", ans);
    }
    return 0;
}
