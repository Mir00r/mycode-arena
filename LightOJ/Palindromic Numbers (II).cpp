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

ll rev (ll n){
    ll reverse = 0;
    if (n == 0) return 0;
    else{
        while (n != 0){
            reverse *= 10;
            reverse += n%10;
            n /= 10;
        }
    }
    return reverse;
}

int main(){
    int tc, cs=1, i;
    ll n, ans, ulta_num;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%lld", &n);
        ulta_num = rev(n);
        if (n == ulta_num) printf ("Case %d: Yes\n", cs++);
        else printf ("Case %d: No\n", cs++);
    }
    return 0;
}
