#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define MAX 999999

int main(){
    int n, i, j, cnt, tmp, ans;
    while (scanf ("%d", &n) == 1){
        while (1){
            if (n % 10 == 1) n /= 10;
            else if (n % 100 == 14) n /= 100;
            else if (n % 1000 == 144) n /= 1000;
            else break;
        }
        if (n == false) puts ("YES");
        else puts ("NO");
    }
    return 0;
}
