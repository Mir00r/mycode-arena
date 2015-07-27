#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 100005

int main (){
    int tc, n, x, a[MAX], i, j;
    double ans, tmp, y;
    while (scanf ("%d%lf", &x, &y) == 2){
        tmp = y - x - .50;
        //printf ("tmp = %.2lf\n", tmp);
        if (x % 5 == 0 && x + .50 <= y) printf ("%.2lf\n", tmp);
        else printf ("%.2lf\n", y);
    }
    return 0;
}

