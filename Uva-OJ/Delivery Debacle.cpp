#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 999

int main(){
    int tc, i, j;
    ll n, func[MAX];
    scanf ("%d", &tc);
    func[0] = 1; func[1] = 1; func[2] = 5;
    for (i = 3; i <= 40; i++)
        func[i] = func[i-1] + 4*func[i-2] + 2*func[i-3];
    while (tc--){
            scanf ("%lld", &n);
            printf ("%lld\n", func[n]);
    }
    return 0;
}



/*Algorithms Used: math
Solution Description: 	This is a third order reccurence:

a[n] = a[n-1] + 4*a[n-2] + 2*a[n-3]

The first part means adding a column of 2 single-cell cakes to the right of the previous term.

The second part means adding an L-cake/single-cell cake combo to the right of the 2nd previous term, in four different rotations.

The third part means adding two interlocking L-cakes to the 3rd previous term, in two rotations.

With a bound of 10^18, you can use signed longs to hold the sequence.*/

