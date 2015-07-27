#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1005
#define LLI __int64

bool is_digit (LLI n){
    LLI tmp = 0, i, res;
    if (n < 0) n *= (-1);
    while (n > 0) {
        tmp = n % 10;
        n = n / 10;
        if (tmp == 8) return true;
    }

    return false;
}


int main(){
    LLI a, b, i, j, ans, tmp, num, digit, sum, len;
    char str[MAX];
    scanf ("%I64d", &a);
    b = tmp = ans = sum = digit = num = 0;
    digit = a;
    num = digit - a;
    //printf ("digit = %I64d\n", digit);
    while (1){
        a += 1;
        //printf ("A = %I64d\n", a);
        if (a < 0 || a > 0){
            if (is_digit(a) == true){
                //printf ("Inner_A = %I64d\n", a);
//                if (digit < 0){
//                    ans = digit + (a+num);
//                }
//                else
                    ans = a - digit;
                printf ("%I64d\n", ans);
                return 0;
            }
        }
    }
//    if (d)
//    ans =  - digit;
//    printf ("%I64d\n", ans);
    return 0;
}
