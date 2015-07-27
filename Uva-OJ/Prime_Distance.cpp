#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

#define l long int
#define ll long long int
#define L unsigned int
#define LL unsigned long long int
#define MAX 1000001
#define pi 3.1415926535897932384626433832795

int prime[MAX], c, i, j;
bool isprime[MAX];
void seive();

/*void seive(){
    int root = sqrt(MAX);
    for (i = 2; i < MAX; i++)
        isprime[i] = true;
    for (i = 2; i <= root; i++)
        for (j = i*i; j < MAX; j += i)
            if(isprime[j] == true)
                isprime[j] = false;

    c = 0;
    prime[c++] = 2;
    for (i = 3; i < MAX; i++)
        if (isprime[i] == true)
            prime[c++] = i;
}*/

void sieve(vector<int> v, int n){
  int i,j;
  for(i = 2; i <= n; i++){
        cout << i << " % ";
        for(j = 0; j <= n; j++){
              if(i % v[j] == 0)
                 cout << v[j] << endl;
           }
     }
}

int main(){
    int n;
    //sieve();
    vector<int> a;
    scanf ("%d", &n);
    sieve(a, n);
//    for (int i = 0; i < n; i++)
//    printf ("%d\n", prime[i]);
    return 0;
}

/*int main(){
    seive();
    low_limit, up_limit, result, tmp;
    while (scnaf ("%d%d", &low_limit, &up_limit) == 2){
        int max = -1, min = 999999, x, y;
        for (i = low_limit; ; i++){
            isprime[i - low_limit] = true;
            if (!seive(i))
                isprime[i - low_limit] = false;
        }
        x = y =- 1;
        for (j = low_limit; j <= up_limit; j++){
            if (isprime[j]){
                x = j;
                if (x != -1){
                    if (x-y < max)
                        max = x - y;
                    if (x-y > min)
                        min = x - y;
                }
            }
        }
        if (!max)
            printf ("There are no adjacent primes.\n");
        else
            printf ("%d,%d are closest, %d,%d are most distant.\n", );
    }
    //for (i = 0; i < c; i++)
      //  printf ("%d ", prime[i]);
    return 0;
}
*/
