#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI  long long int
#define ULL unsigned long long
#define MAX 100005


int main(){
    LLI a, b, x, y, ans, i, j, tmp, cnt;
    while (scanf ("%lld %lld", &a, &b) == 2){
        if (a == 0 && b == 0)
            break;
        x = a / 5;
        y = b / 5;
        ans = y - x;
        printf ("%lld\n", ans+1);
    }
    return 0;
}
