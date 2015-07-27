#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define MAX 10000+5

LLI prime[MAX], pri_len, n, c;
bool isprime[MAX];
LLI res[MAX];

void prime_gen(){
    LLI root, i, j;
    for (i = 2; i < MAX; i++)
        isprime[i] = true;
    root = sqrt(MAX);
    for (i = 3; i <= root; i++)
        for (j = i*i; j < MAX; j += i)
            if (isprime[j] == true)
                isprime[j] = false;
    pri_len = 0;
    prime[pri_len++] = 2;
    for (i = 3; i < MAX; i += 2)
        if (isprime[i] == true)
            prime[pri_len++] = i;
}


void cal_sum (){
    LLI i, j, sum, tmp;
    for (i = 0; i < pri_len-1; i++){
        sum = 0;
        for (j = i; j < pri_len-1; j++){
            //printf ("Befor_Sum = %lld\n", sum);

            sum += prime[j];
            //printf ("Sum = %lld\n", sum);

            if (sum >= MAX) break;
            else
                res[sum]++;
        }
    }
}

int main(){
    prime_gen ();
    cal_sum ();
    LLI i, ans;
    //for (i = 0; i < pri_len; i++) printf ("%lld ", prime[i]);
    while (scanf ("%lld", &n) == 1){
        if (n == 0) break;
//        for (i = 0; i < pri_len; i++){
//            printf ("%lld ", res[i]);
//        }puts ("");
        ans = res[n];
        printf ("%lld\n", ans);
    }
    return 0;
}
