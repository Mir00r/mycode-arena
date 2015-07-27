/*#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

bool sievePrimes[10005];
int primes[1250];

// Sieve Algorithm to Calculate Next Prime
void sieve()
{
    memset(sievePrimes, true, 10005);
    memset(primes, 0, 1250);
    sievePrimes[0] = false;
    sievePrimes[1] = false;
    int m = sqrt(10000);
    for(int i = 2; i <= m; i++)
        if(sievePrimes[i])
            for(int k = i * i; k <= 10004; k += i)
                sievePrimes[k] = false;
    for(int j = 2, i = 0; j <= 10000; j++)
        if(sievePrimes[j])
            primes[i++] = j;
}

int main()
{
    sieve();
    int T, N, i;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &N);
        for(i = 0; i < 1250; i++)
            if(primes[i] <= N && (2 * primes[i]) > N)
                break;
        printf("%d\n", primes[i]);
    }
    return 0;
}*/




#include <stdio.h>
#define MAX 10000

int ver[MAX+3]={0};
int primes[MAX+3];

int gen(){
    int i, j, k=0;
    for (i=2 ; i<=MAX ; i++){
        if (!ver[i]){
            primes[k++]=i;
            for (j=2 ; i*j<=MAX ; j++)
                ver[i*j]=1;
        }
    }
    return k;
}

int main(){
    int q=gen(), high, low, t, p, i, x, n, max, res;
    scanf("%d",&t);
    while (t--){
        max = -1;
        res = -1;
        scanf("%d",&n);
        for (i=0 ; i<q && primes[i]<=n ; i++){
            x = primes[i];
            low = (n-x)/x;
            high = n/x;
            for (p=low ; p<=high ; p++){
                if (max<(n-p*x)){
                    max = n-p*x;
                    res = x;
                }
            }
        }
        printf("%d\n",res);
    }
    return 0;
}



/*#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
#define MAX 10001
char isPrime[MAX];

void sieve(){
    int i, k, j;
    for(i = 2; i < MAX; i++)
        isPrime[i] = 1;
    for(i = 1; i <= sqrt(MAX); i++){
        for(j = k+k; j < MAX; j = j+k)
            isPrime[j] = 0;
            for(k = k+1; !isPrime[k]; k++);
    }
}
int main(){
    sieve();
    int t, i, j, N;
    scanf ("%d", &t);
    for(i = 1; i <= t; i++){
        scanf ("%d", &N);
        for(j = 2; j <= N; j++){
            if(isPrime[j]){
                if(2*isPrime[j] > N){
                    printf ("%d\n", isPrime[j]);
                    break;
                }
            }
        }
    }
    return 0;
}*/

