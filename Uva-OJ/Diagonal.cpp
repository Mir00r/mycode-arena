#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 999999

int main(){
    ll n, cs=1, i, j, ans;
    while (scanf ("%lld", &n) == 1 && n){
        ans = ceil((sqrt(8*n + 9) + 3) / 2);
        printf ("Case %lld: %lld\n", cs++, ans);
    }
    return 0;
}


/*
First, we need to know how many diagonals an n-gon has. Each vertex connects to every other vertex except itself and its neighbours.
Also, each diagonal is shared between two vertices. Putting it together, the number of diagonals in an n-gon is n(n-3)/2.

Given N = n(n-3)/2, we can rearrange it into quadratic form:

n^2 - 3n - 2N = 0

Solving the quadratic equation:

n = (sqrt(8N + 9) + 3) / 2

We only take the positive root because the negative one always gives us a negative answer, which we obviously can't use.
The final answer is the ceiling of the above formula, because it might not be integral.
*/
