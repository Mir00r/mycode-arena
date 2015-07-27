#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <map>


using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 100005

LLI height;

LLI cal_pascal (LLI a){
    LLI power, res;

    a = a - 1;
    power = pow (2, a);
    res = power % 1000;

    return res;
}

int main(){
    LLI tc, ans, tmp;
    scanf ("%lld", &tc);

    while (tc--){
        scanf ("%lld", &height);
        ans = cal_pascal(height);

        printf ("%lld\n", ans);
    }
}
