#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 105


//LLI square(LLI s){
//    return s*s;
//}
//
//bool bigmod(LLI b, LLI mod){
//
//    return square(bigmod(b, mod)) % mod;
//    return false;
//}

int main(){
    LLI a, m, ans, check, i, j, tmp;
    scanf ("%I64d %I64d", &a, &m);

    while (m % 2 == 0){
        m /= 2;
        //puts ("Loop Ok");
        //printf ("M = %I64d\n", m);
    }

    if (a % m == 0) puts ("Yes");
    else puts ("No");


    /*if (a == 1) puts ("No");
    else if (m % a == 0) puts ("Yes");
    else puts ("No");
    if (bigmod(a, m) == true) puts ("Yes");
    else puts ("No");
    tmp = a % m;
    printf ("tmp = %I64d\n", tmp);
    if (tmp == 1) puts ("No");
    else if (m % tmp == 0) puts ("Yes");
    else puts ("No");
    for (i = 1; i <= tmp; i++){
        if (i % m == 0){
            puts ("Yes");
            return 0;
        }
    }
    puts ("No");*/
    return 0;
}
