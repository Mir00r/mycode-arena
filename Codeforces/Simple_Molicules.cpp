#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 10000

int main(){
    int a, b, c, x, y, z, p, q, r;
    scanf ("%d %d %d", &a, &b, &c);
    x = a + b - c;
    y = b + c - a;
    z = a + c - b;
    p = x / 2;
    q = y / 2;
    r = z / 2;
    if ((a+b+c) % 2 == 0){
        if (x < 0 || y < 0 || z < 0) puts ("Impossible");
        else
            printf ("%d %d %d\n", p, q, r);
    }
    else
        puts ("Impossible");
    return 0;
}
