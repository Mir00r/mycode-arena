#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 50

int prime[MAX], cnt;

void prime_gen();
bool is_prime[MAX];
int deprime[MAX];

void prime_gen (){
    int root, i, j;
    for (i = 2; i < MAX; i++)
        is_prime[i] = true;

    root  = sqrt (MAX);
    for (i = 2; i < root; i++)
        for (j = i*i; j < MAX; j += i)
            if (is_prime[j] == true)
                is_prime[j] = false;
    cnt = 0;
    prime[cnt++] = 2;
    for (i = 3; i < MAX; i += 2)
        if (is_prime[i] == true)
            prime[cnt++] = i;
}


void store (){
    memset (deprime, 0, sizeof (deprime));
    LLI i, j;
    for (i = 2; i <= MAX; i += 2){
        deprime[i] += 2;
       // printf ("%d\n", deprime[i]);
    }
    for (i = 3; i <= MAX; i += 2){
        if (is_prime[i] == true){
            for (j = i; j <= MAX; j += i){
                deprime[j] += i;
                //printf ("Iner = %d\n", deprime[i]);
            }
        }
       // printf ("Outer = %d\n", deprime[i]);
    }
}

int main(){
    prime_gen();
    store();
    LLI a, b, i, j, count, ans;
    while (scanf ("%lld%lld", &a, &b) == 2){
        if (a == 0 || b == 0) break;
        count = 0;
        for (i = a; i <= b; i++){
            if (is_prime[deprime[i]] == true)
                count++;
        }
        printf ("%lld\n", count);
    }
    return 0;
}



/*vector<int>primes;
bool prime[MAX];
LLI ans[MAX];


void sieve(){
    LLI i,j,sq = sqrt(MAX);
    prime[0]= prime[1] =true;
    primes.push_back(2);
    for(i = 4; i < MAX; i += 2)
        prime[i] = true;

    for(i = 3; i <= sq; i++){
        if(prime[i] == false){
            primes.push_back(i);
            for(j = i*i; j < MAX; j += 2*i)
                prime[j] = true;
        }
    }
    while(i < MAX){
        if(prime[i] == false)
            primes.push_back(i);
            i += 2;
    }
}

int list[MAX], prime[MAX], list_size, cnt;


void prime_facto(int n){
    int i;
    list_size = 0;
    for (i = 0; prime[i] < n; i++){
        if (n % prime[i] == 0){
            while (n % prime[i] == 0){
                n /= prime[i];
                list[list_size] = prime[i];
                list_size++;
            }
        }
    }
}

int main(){
    //sieve();
    prime_facto(20);
    int i;
    for (i = 0; i < list_size; i++) printf ("%d ", list[i]);
    //for (i = 0; i < cnt; i++)
    //cout << primes[i] << endl;
    return 0;
}
*/
