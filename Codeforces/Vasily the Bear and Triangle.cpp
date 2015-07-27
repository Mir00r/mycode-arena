#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long  long int
#define MAX 9999

int main(){
    int x, y, cnt, tmp, ans, sum;
    while (scanf ("%d%d", &x, &y) == 2){
        sum = abs (x)+ abs(y);
        if (x > 0 && y > 0) printf ("0 %d %d 0\n", sum, sum);
        else if (x > 0 && y < 0) printf ("0 %d %d 0\n", -sum, sum);
        else if (x < 0 && y > 0) printf ("%d 0 0 %d\n", -sum, sum);
        else if (x < 0 && y < 0) printf ("%d 0 0 %d\n", -sum, -sum);
    }
    return 0;
}
