#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 10000

bool check (LLI num){
    LLI a = 1, b = 1;
    int flag = 0;

    while (1){
        if (flag == 0){
            a = b + 1;
            b *= 9;
            if (a <= num && num <= b) return true;
            flag = 1;
        }
        else{
            a = b + 1;
            b *= 2;
            if (a <= num && num <= b) return false;
            flag = 0;
        }
    }
}


int main (){
    LLI n , ans, tmp;
    while (scanf ("%lld", &n) == 1){
        if (check(n)) puts ("Stan wins.");
        else puts ("Ollie wins.");
    }
    return 0;
}
