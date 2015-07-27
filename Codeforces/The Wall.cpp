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

int GCD (int c, int d){
    if (d == 0) return c;
    else return GCD (d, c%d);
}

int main(){
    int a, b, x, y, both_col_cnt, i, j, ans, lcm, tmp;
    while (scanf ("%d%d%d%d", &x, &y, &a, &b) == 4){
        both_col_cnt = 0;
        /*for (i = a; i <= b; i++)
            if (i % x == 0 && i % y == 0) both_col_cnt++;
        printf ("%d\n", both_col_cnt);*/
        //printf ("GCD = %d\n", GCD(x, y));
        lcm = x / GCD(x, y)*y;
        //printf ("LCM = %d\n", lcm);
        ans = b / lcm - (a-1)/lcm;
        printf ("%d\n", ans);
    }
    return 0;
}
