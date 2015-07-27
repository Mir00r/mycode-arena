#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 10000005
#define row 100

int main(){
    double x, y, ans;
    while (scanf ("%lf %lf", &x, &y) == 2){
        if (x == 1) ans = y * 4.00;
        else if (x == 2) ans = y * 4.50;
        else if (x == 3) ans = y * 5.00;
        else if (x == 4) ans = y * 2.00;
        else ans = y * 1.50;

        printf ("Total: R$ %.2lf\n", ans);
    }
    return 0;
}
