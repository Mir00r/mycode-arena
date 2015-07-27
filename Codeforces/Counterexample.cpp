#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 5000005

LLI gcd (LLI a, LLI b){
    LLI x;
    while (b){
        x = a % b;
        a = b;
        b = x;
    }
    return a;
}


/*unsigned int gcd (unsigned int a, unsigned int b){
    unsigned int x;
    while (b){
        x = a % b;
        a = b;
        b = x;
    }
    return a;
}*/


int main(){
    LLI l, r, a, b, c, tmp, cnt, i, j, k, ans, diff;
    scanf ("%I64d %I64d", &l, &r);
    a = b = c = tmp = 0;
    for (i = l; i <= r; i++){
        for (j = i+1; j <= r; j++){
            if (gcd (i, j) == 1){
                for (k = j+1; k <= r; k++){
                    if (gcd (j, k) == 1 && gcd (i, k) != 1){
                        printf ("%I64d %I64d %I64d\n", i, j, k);
                        return 0;
                    }
                }
            }
        }
    }
    puts ("-1");
    /*diff = l - r;

    if (gcd (l, r) > 1){
        a = l;
        b = a + 1;
        c = b + 1;
        printf ("%I64d %I64d %I64d\n", a, b, c);
        //tmp = l;
        printf ("%I64d ", tmp);
        for (i = l; i <= r; i++){
            if (gcd (i, r) > 1) continue;
            else{
                tmp = i;
                b = i;
                //printf ("%I64d ", i);
            }
            printf ("%I64d %I64d ", l, tmp);
        }
        //printf ("%I64d %I64d %I64d\n", l, tmp, b);
    }
    else puts ("-1");*/
    return 0;
}
