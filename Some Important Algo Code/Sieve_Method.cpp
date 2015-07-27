/*#include <stdio.h>
#include <math.h>

const int size = 40;
int ara[size];
void print_ara(){
    int i;
    for(i = 2; i < size; i++){
        printf("%4d", ara[i]);
    }
    printf("\n");
    for(i = 2; i < size; i++){
        printf("----");
    }
    printf("\n");
    for(i = 2; i < size; i++){
        printf("%4d", i);
    }
    printf("\n\n\n");
}
void sieve(){
    int i, j, root;
    for(i = 2; i < size; i++){
        ara[i] = 1;
    }
    root = sqrt(size);
    print_ara();
    for(i = 2; i <= root; i++){
        if(ara[i] == 1) {
            for(j = 2; i * j <= size; j++){
                ara[i * j] = 0;
            }
            print_ara();
        }
    }
}
int is_prime(int n){
    int i;
    if(n < 2){
        return 0;
    }
    return ara[n];
}
int main(){
    int n, m;
    sieve();
    while(1){
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        if(n >= size){
            printf("The number should be less than %d\n", size);
            continue;
        }
        if(1 == is_prime(n))
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }
    return 0;
}*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <queue>
#include <stack>
#include <map>
#include <list>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

#define l long int
#define ll long long int
#define llu unsigned int
#define MAX 10000000
bool isPrime[MAX];
void sieve(){
    int i, k, j, root;
    root = sqrt(MAX);
    for(i = 2; i < MAX; i++)
        isPrime[i] = 1;
    for(i = 1; i <= root; i++){
        for(j = k+k; j < MAX; j = j+k)
            isPrime[j] = 0;
            for(k = k+1; !isPrime[k]; k++);
    }
}

int main(){
    ll i, j;
    sieve();
    char str[256];
    int p_str[256], temp;
    while(scanf("%s", str)!=EOF){
		if(strcmp("0",str)==0)
            break;
        int len = strlen(str);
        for(i=0; i<len; i++)
            p_str[i] = str[i] - '0';
        int max = 0;
        for(i=0; i<len; i++){
            temp = 0;
            for(j=i; j<len; j++){
                temp = temp*10+p_str[j];
				if(temp>100000) break;
                    if(isPrime[temp] == true)
                        if(temp > max) max = temp;
            }
        }
        printf ("%d\n", max);
    }
    return 0;
}


/*#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define MAXN  100000000  /* maximum value of N */
//#define P1    1562501    /* = ceil(MAXN/64) */
//#define P2    50000000   /* = ceil(MAXN/2) */
//#define P3    5000      /* = ceil(ceil(sqrt(MAXN))/2) */

/*uint32_t sieve[P1];

#define GET(b) ((sieve[(b)>>5]>>((b)&31))&1)

void make()
{
    uint32_t i, j, k;
    memset(sieve, 0, sizeof(sieve));
    for (k = 1; k <= P3; k++)
        if (GET(k)==0) for(j=2*k+1,i=2*k*(k+1);i<P2;i+=j) sieve[i>>5]|=1<<(i&31);
}

int isprime(int p) { return p==2 || (p>2 && (p&1)==1 && (GET((p-1)>>1)==0)); }

int main()
{
    int i, n;
    make();
    for (n = 0, i = 0; i <= MAXN; i++)
        if (isprime(i)) n++;
    printf("The number of primes below 10^8 is %d.\n", n);
    return 0;
}*/
