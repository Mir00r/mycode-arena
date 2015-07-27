#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 32
#define col 32
#define MAX 3000006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
//#define mod 7477777



int prime[MAX], cnt;

void prime_gen();
bool is_prime[MAX];

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


bool prm_fact (int n ){
    int root, i, j, tmp;

    root = sqrt (n);

    for (i = 0; prime[i] <= root; i++ ){
        if (n % prime[i] == 0){

           // printf ("Prime_Num = %d\n", prime[i]);

           if (prime[i] % 10 != 3)
                return false;

            while (n % prime[i] == 0){
                n /= prime[i];
            }
        }
    }

    if (n > 1)
        if (n % 10 != 3)
            return false;
    return true;
}




int main (){
    int i, n;
    prime_gen ();

//    for (i = 0 ; i < cnt; i++)
//        printf ("%d ", prime[i]);
//    NL;

    while (scanf ("%d", &n) == 1 ){
        if (n < 0)
            break;

        if (n < 3)
            printf ("%d NO\n", n);

        if (prm_fact (n))
            printf ("%d YES\n", n);
        else
            printf ("%d NO\n", n);
    }

    return 0;
}



/*

void primefactorize(int n){
    int i;
    list_size = 0;
    for (i = 0; prime[i] <= n; i++){
        if (n % prime[i] == 0){
            while (n % prime[i] == 0){
                n /= prime[i];
                list[list_size] = prime[i];
                list_size++;
            }
        }
    }
}

*/
