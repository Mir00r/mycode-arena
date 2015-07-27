#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 1000000

LLI fibo[MAX];
//bool is_fibo[MAX];

LLI fibo_gen (){
    LLI i, indx = 0;
    fibo[0] = 1;
    fibo[1] = 2;

    for (i = 2; i <= 100; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
        //is_fibo[indx++] = fibo[i];
    }
}


int main(){
    fibo_gen();
    LLI a, b, i, j, ans, cnt, tmp;
    while (scanf ("%lld %lld", &a, &b) == 2){
        if (a == 0 && b == 0) break;
        cnt = tmp = 0;
        for (i = a; i <= b; i++){
            //if (is_fibo[i]) cnt++;
            if (fibo[i] >= a && fibo[i] <= b) cnt++;
        }
        printf ("%lld\n", cnt);
    }
    return 0;
}
