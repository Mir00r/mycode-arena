#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 100005
#define row 100

int main(){
    double a, b, c, peri, area,  arr[MAX];
    while (scanf ("%lf %lf %lf", &a, &b, &c) == 3){
        peri = a + b + c;
        area = 0.5 * (a+b) * c;
        if (a+b > c && b+c > a && c+a > b)
            printf ("Perimetro = %.1lf\n", peri);
        else
            printf ("Area = %.1lf\n", area);
    }
    return 0;
}


