#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 4000

int n, i, j, res, cnt, tmp, arr[MAX];

int main(){
    //int n, i, j, res, cnt, tmp, arr[MAX];
    while (scanf ("%d", &n) == 1){
        for (i = 2; i <= n; i++){
            if (arr[i] > 0) continue;
            for (j = i; j <= n; j += i) arr[j]++;
        }
        for (i = 1; i <= n; i++)
            if (arr[i] == 2) cnt++;
        printf ("%d\n", cnt);
    }
    return 0;
}

/*This is a straightforward implementation problem: factor every number from 1 to n into product of primes and count
the number of distinct prime divisors.
*/
