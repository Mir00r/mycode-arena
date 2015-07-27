#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9999

int main(){
    int a, b, c, d, degree, sum, ans, tmp, cnt;
    while (scanf ("%d%d%d%d", &a, &b, &c, &d) == 4){
        if (a == 0 && b == 0 && c == 0 && d == 0) break;
        degree = 1080;
        if (a < b) degree += (40-b+a) * 9;
        else degree += (a-b) * 9;
        if (b > c) degree += (40-b+c) *9;
        else degree += (c-b) * 9;
        if (c < d) degree += (40-d+c) * 9;
        else degree += (c-d) * 9;
        printf ("%d\n", degree);
    }
    return 0;
}
