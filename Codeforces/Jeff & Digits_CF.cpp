#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999

int main(){
    int n, a, five, zero, i, j, cnt, tmp, res;
    while (scanf ("%d", &n) == 1){
        five = zero = 0;
        for (i = 0; i < n; i++){
            scanf ("%d", &a);
            if (a == 5) five++;
            else zero++;
        }
        if (zero == 0) printf ("-1\n");
        else if (five < 9) printf ("0\n");
        else{
            five /= 9;
            while (five--) printf ("555555555");
            while (zero--) printf ("0");
            printf ("\n");
        }
    }
    return 0;
}
