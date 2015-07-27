#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 1000002

int set_of_H_prime[MAX], H_semi_prime[MAX];
vector <int> count_h_prime;
int main(){
    int n, i, j;
    //int count_h_prime[MAX];
    memset (set_of_H_prime, 0, sizeof (set_of_H_prime));
    //set_of_H_prime.clear();
    //int c = 0;
    // one way to calculate the H-primes with the sieve
    for (i = 1; i < MAX; i += 4) set_of_H_prime[i] = true;
    for (i = 5; i < MAX; i++)
        if (set_of_H_prime[i] == true){
            //count_h_prime[c++] = set_of_H_prime[i];
            count_h_prime.push_back(i);
            for (j = i; j < MAX; j += i)  set_of_H_prime[j] = false;
        }
    // And here we calculate the H-semi-prime
    for (i = 0; i < count_h_prime.size(); i++){
        for (j = i; j < count_h_prime.size(); j++){
            ll p = count_h_prime[i];
            ll q = count_h_prime[j];
            if (p*q < MAX) H_semi_prime[p*q] = true;
            else break;
        }
    }
    for (i = 1; i < MAX; i++)
        H_semi_prime[i] += H_semi_prime[i-1];

    while(scanf("%d",&n)!=EOF){
        if(n == 0) break;
        printf("%d %d\n", n, H_semi_prime[n]);
    }
    return 0;
}
