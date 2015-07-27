#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 10000005

int prime[MAX], i, j, c;
void seive();
//bool isprime[MAX];

bool primes[10000005];//this to get the primes up to 1000000
void sieve (int n){
  for(int i = 0; i < 10000000; i++)
      primes[i] = 1;//here we first set the primes array to one

  //in the next two loops we let the prime numbers and set the un primes to zero
  for(int i = 2; i < sqrt(n); i++)
      if(primes[i]){
          for(int j = i+i; j < n; j+=i)
              primes[j] = 0;
      }
}
bool isprime(int n){
    if(n <= 10000000) return primes[n];
    int sq = sqrt(n);
    for(int i = 3; i < sq; i+=2)
        if(n % i == 0) return 0;
    return 1;
}

/*void seive(){
    int root = sqrt(MAX);
    for (i = 2; i < MAX; i++)
        isprime[i] = true;
    for (i = 2; i < root; i++)
        for (j = i*i; j < MAX; j += i)
            if (isprime[j] == true)
                isprime[j] = false;
    c = 0;
    prime[c++] = 2;
    for (i = 3; i < MAX; i += 2)
        if (isprime[i] == true)
            prime[c++] = i;
}*/

int main(){
    seive(10000000);
    ll n, num, ans, perfect_num;
    scanf ("%lld", &n);
    while (n != 0){
        if (prime[n]){
            num = pow (2, n) - 1;
            if (isprime[num]){
                perfect_num = pow (2, n-1) * num;
                printf ("Perfect: %lld!\n", perfect_num);
            }
            else
                //printf ("Given number is NOT prime! NO perfect number is available.\n");
                printf ("Given number is prime. But, NO perfect number is available.\n");
        }
        else
            //printf ("Given number is prime. But, NO perfect number is available.\n");
            printf ("Given number is NOT prime! NO perfect number is available.\n");
        scanf ("%lld", &n);
    }
    return 0;
}


/*int main(){
    long long data;
    int input;
    bool flag;
    int prime[] = {2, 3, 5, 7, 13, 17, 19, 31};
    int notPerfect[] = {11, 23, 29};
    while (cin >> input){
        if (input == 0) break;
        data = ( pow (2 ,(input - 1)) ) * (( pow(2, input))-1);
        flag = false;
        for (int i = 0; i < 8; ++i){
            if (prime[i] == input){
                cout << "Perfect: " << data << "!" << endl;
                flag = true;
            }
        }
        if (flag) continue;
        if (notPerfect[0] == input || notPerfect[1] == input || notPerfect[2] == input){
            cout << "Given number is prime. But, NO perfect number is available." << endl;
        }
        else
        cout << "Given number is NOT prime! NO perfect number is available." << endl;
    }
    return 0;
}*/
