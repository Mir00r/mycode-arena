#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 10000

bool find_leap_yr (int y){
    if ( y % 400 == 0) return true;
    else if (y % 4 == 0) return true;
    else if (y % 100 == 0) return false;
    else return false;
}

int main(){
    int tc, cs=1, i, j, n, yr, cnt, tmp, ans, a, b;
    while (scanf ("%d %d", &a, &b) == 1){
//        if (find_leap_yr(yr) == true) puts ("This year is leap year");
//        else puts ("This year is not a leap year");
        cnt = 0;
        for (i = a; i <= b; i++)
            if (find_leap_yr(i) == true) cnt++;
        printf ("%d\n", cnt);
    }
    return 0;
}
