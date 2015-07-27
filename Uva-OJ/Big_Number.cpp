/*
    Auther: Abdur Razzak
    Reference Link:     http://www.algorithmist.com/index.php/UVa_1185
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 10000005

LLI digit[MAX];


void calcu (){
    LLI i;
    digit[1] = 0;
    double num = log10(1.0);
    //printf ("Num = %lf\n", num);
    for (i = 2; i < MAX; i++){
        num += log10(i);
        digit[i] = num;
    }
}

int main(){
    calcu();
    LLI n, ans, tc;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld", &n);
        ans = digit[n] + 1;
        printf ("%lld\n", ans);
    }
    return 0;
}
