#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999+10

int prime[MAX], i, j, c;
void prime_gen();
bool isprime[MAX];

void prime_gen(){
    int root;
    for (i = 2; i < MAX; i++)
        isprime[i] = true;
    root = sqrt(MAX);
    for (i = 2; i <= root; i++)
        for (j = i*i; j < MAX; j += i)
            if (isprime[j] == true)
                isprime[j] = false;
    c = 0;
    prime[c++] = 2;
    for (i = 3; i < MAX; i += 2)
        if (isprime[i] == true)
            prime[c++] = i;
}

ll num_div_cnt(ll n){
    ll rem = 0;
    ll tmp = sqrt(n);
    while (n % 2 == 0) n /= 2;
    for (i = 1; prime[i] < tmp; i < c; i++){
        if (n % prime[i] == 0){
            ll cnt = 0;
            while (n % prime[i] == 0){
                cnt++;
                n /= prime[i];
            }
            rem *= cnt;
        }
    }
    if (i == c) return 1;
    if (n > 1) return rem *= 2;
    return rem;
}

int main(){
    prime_gen();
    ll n;
    while (scanf ("%lld", &n) == 1){
        if (n < 3) printf ("1\n");
        else printf ("%lld\n", num_div_cnt(n));
    }
    /*for (i = 0; i < c; i++)
        printf ("%d ", prime[i]);*/
    return 0;
}
// Simple Thinking Code
/*int main(){
    ll n , front = 0, tail = 0, s = 0, t = 0, ans = 0;
    while(scanf ("%lld", &n) == 1){
        s = 0; front = 1; tail = 1; ans = 0; t = n/2;
        while(front <= t){
            if(s < n){
                s += tail;
                tail++;
            }else if(s > n){
                s -= front;
                front++;
            }else{
                ans++;
                s += tail;
                tail++;
            }
        }
        printf ("%lld\n", ans+1);
    }
    return 0;
}*/

