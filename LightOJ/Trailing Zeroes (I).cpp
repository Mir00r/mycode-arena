#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define ul unsigned long int
#define ull unsigned long long int
#define MAX 99999

int arr[MAX];

ll convert_bin(ll x){
    ll num = 0, count = 0, mod, tmp;
    tmp = x;
    while (tmp > 0){
        mod = tmp % 2;
        arr[num] = mod;
        tmp /= 2;
        num++;
        if (mod == 0) count++;
    }
    return count;
}
int main(){
    int t, c = 0;
    ll n, ans;
    scanf ("%d", &t);
    while (t--){
        scanf ("%lld", &n);
        ans = convert_bin(n);
        printf ("Case %d: %lld\n", ++c, ans);
    }
    return 0;
}
