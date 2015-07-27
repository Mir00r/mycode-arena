#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9999


long square(long s){
    return s*s;
}


long bigmod (long b, long p, long m){

    if(p == 0)
        return 1;
    else if (p % 2 == 0)
        return square (bigmod(b, p/2, m)) % m;
    else
        return((b % m) * bigmod(b, p-1, m)) % m;
}


int main(){
    long sum, b, p, m;

    while (scanf("%ld %ld %ld", &b, &p, &m) == 3){
        sum = bigmod(b, p, m);
        printf ("%ld\n", sum);
    }
    return 0;
}
