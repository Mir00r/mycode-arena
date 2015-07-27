#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 100

int main(){
    LLI a, b, ans;
    while (scanf ("%lld %lld", &a, &b) == 2){
        ans = abs (a-b);
        printf ("%lld\n", ans);
    }
    return 0;
}
