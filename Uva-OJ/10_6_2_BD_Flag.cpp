#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define MAX 99999
#define Pi acos(-1.0)
#define pi 3.1415926535897932384626433832795

int main(){
    int tc;
    double length, width, redius, rect_area, circle_area, rect_value;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%lf", &length);
        width = (length*6) / 10;
        redius = length / 5;
        rect_area = width * length;
        circle_area = Pi * redius * redius;
        rect_value = rect_area - circle_area;
        //printf ("%.2lf %.2lf\n", rect_area, rect_value);
        printf ("%.2lf %.2lf\n", circle_area, rect_value);

    }
    return 0;
}
