#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <map>


using namespace std;

#define LLI long long int
#define MAX 1000005

LLI gcd (LLI a, LLI b){
    if (b == 0) return a;
    else return gcd (a, b % a);
}

LLI lcm (LLI a, LLI b){
    return ((a / gcd(a, b)) * b);
}

int main(){
    LLI card, cnt, check, mod, ans, rem;
    while (scanf ("%lld", &card) == 1){
        cnt = check = 0;
        rem = 1;
        mod = card + 1;

        while (1){
            if (check && rem == 1) break;
            cnt++;
            check = 1;

            rem = (rem * 2) % mod;
            printf ("REM = %lld\n", rem);
        }
        printf ("%lld\n", cnt);
    }
    return 0;
}
