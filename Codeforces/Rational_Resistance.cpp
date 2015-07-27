#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 10000



LLI gcd (LLI x, LLI y){
    LLI div = x / y;
    LLI res = 0;
    if (y == 0) return x;
    else{
        //res = div + gcd (y, x % y);
       // return res;
        return div + gcd (y, x%y);
    }
    //return res;
}

int main(){
    LLI a, b, c, check, ans;
    scanf ("%I64d %I64d", &a, &b);
//    if (a == b) puts ("1");
//    else if (a < b || a > b)
//        printf ("%I64d\n", max (a, b));
    //LLI div = a / b;
    //res = 0;
    ans = gcd (a, b);
//    while (b){
//        ans = gcd (a, b);
//        res++;
//    }

    printf ("%I64d\n", ans);
    return 0;
}
