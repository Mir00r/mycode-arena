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

int main(){
    LLI cs, tc, a, b, ans, i, j, tmp, cnt;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld %lld", &a, &b);
        ans = 0;
        for (i = a; i <= b; i++){
            //ans = i;
            //ans &= (i+1);
            b = b & (a+1);
            b++;
        }
        printf("%lld\n", a);
    }
    return 0;
}

