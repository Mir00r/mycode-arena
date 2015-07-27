#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 100000

int gcd (int x, int y){
    if (y == 0) return x;
    else return gcd (y, x%y);
}

int lcm (int x, int y){
    return (x / gcd(x, y)*y);
}

int main(){
    int a, c, tc, cs=1, d, ans, i, j, tmp, cnt;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &a, &c);
        d = c/a;
        if (c%a) puts ("NO SOLUTION");
        else{
            for (i = d; i <= c; i += d){
                tmp = lcm (a, i);
                if (tmp == c){
                    printf ("%d\n", i);
                    break;
                }
            }
        }
    }
    return 0;
}
