
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
    int red, unit, i, j, cnt, tmp;
    double a, b, c, triangle, circle, radius, trapezium , square, rectangle;
    scanf ("%lf%lf%lf", &a, &b, &c);
    triangle = (a*c) / 2;
    circle = pi * (c*c);
    trapezium = (c * (a+b)) / 2;
    square = b*b;
    rectangle = a * b;
    printf ("TRIANGULO: %.3lf\n", triangle);
    printf ("CIRCULO: %.3lf\n", circle);
    printf ("TRAPEZIO: %.3lf\n", trapezium);
    printf ("QUADRADO: %.3lf\n", square);
    printf ("RETANGULO: %.3lf\n", rectangle);
    return 0;
}
