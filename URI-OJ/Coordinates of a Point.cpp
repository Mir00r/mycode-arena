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
#define MAX 10000005
#define row 100

int main(){
    double x, y, ans;
    while (scanf ("%lf %lf", &x, &y) == 2){
        if (x == 0.0 && y == 0.0) puts ("Origem");
        else if (x == 0.0 && y != 0.0) puts ("Eixo Y");
        else if (x != 0.0 && y == 0.0) puts ("Eixo X");
        else if (x > 0.0 && y > 0.0) puts ("Q1");
        else if (x < 0.0 && y < 0.0) puts ("Q3");
        else if (x > 0.0 && y < 0.0) puts ("Q4");
        else puts ("Q2");
    }
    return 0;
}
