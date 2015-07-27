#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <set>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1005
#define LLI __int64

//LLI pos_dhara (LLI a){
//    LLI res;
//    res = a * (a+1) / 2;
//    return res;
//}
//
//LLI neg_dhara (LLI a){
//    LLI res;
//    res = a * (a-1) / 2;
//    return res+1;
//}

int main(){
    LLI n, ans, x, y, tmp;
    scanf ("%I64d", &n);
    /*if (n == 1) ans = -1;
    else if (n % 2 == 0){
        x = pos_dhara(n);
        tmp = n / 2;
        ans = x - tmp*n;
    }
    else{
        x = pos_dhara(n);
        tmp = n / 2;
        ans = x - ((tmp+1) * (n-1));
        ans *= (-1);
    }*/

    if (n % 2 == 0)
        ans = n / 2;
    else{
        ans = n / 2 + 1;
        ans *= (-1);
    }

    //ans = n / 2 - n * (n % 2);

    printf ("%I64d\n", ans);
    return 0;
}
