#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define LLu unsigned long long
#define MAX 1000+10
#define row 100
#define col 100

void seive();
int prime_list[MAX];
bool is_prime[MAX];
int i, j, cnt;


void seive(){
    int root;
    for (i = 2; i <= MAX; i++)
        is_prime[i] = true;
    root = sqrt(MAX);
    for (i = 3; i <= root; i++)
        for (j = i*i; j < MAX; j += i)
            if (is_prime[j] == true)
                is_prime[j] = false;
    cnt = 0;
    prime_list[cnt++] = 2;
    for (i = 3; i < MAX; i += 2)
        if (is_prime[i] == true)
            prime_list[cnt++] = i;
}

int div_cnt(int x){
    int divisor = 1;
    for (i = 0; i < cnt; i++){
        if (x % prime_list[i] == 0){
            int count = 1;
            while (x % prime_list[i] == 0){
                x /= prime_list[i];
                count++;
            }
            divisor *= count;
        }
    }
    return divisor;
}


int main(){
    int n, ans;
    seive();
    for (i = 0; i < 100; i++)
        printf ("%d\n", div_cnt(i));
    return 0;
}
