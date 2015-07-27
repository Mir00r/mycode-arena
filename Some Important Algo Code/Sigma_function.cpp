#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <list>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define unsinged int
#define II __int64
#define pf printf
#define sc scanf
#define MAX 99

void seive();
int prime[MAX], c;
bool isprime[MAX];
int phi[MAX];

void seive(){
    int root, i, j;
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

/*int euler_phi (int n){
    int res, root, i;
    res = n;
    root = sqrt (n);
    for (i = 0; prime[i] <= root; i++){
        if (n % prime[i] == 0){
            res = res - (res / prime[i]);
            n /= prime[i];
        }
    }
    if (n > 1)
        res = res - (res / n);
    return res;
}*/


/*
int phi (int n) {
    int i, res;
	int res = n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			res -= res / i;
		}
	if (n > 1)
		res -= res / n;
	return res;
}

*/

void euler_phi (){
    int i, j;
    phi[1] = 1;
    for (i = 2; i < MAX; i++){
        if (!phi[i]){
            phi[i] = i - 1;
            for (j = i*i; j < MAX; j += i){
                if (!phi[j])
                    phi[j] = j;
                phi[j] = phi[j] / i * (i-1);
            }
        }
    }
}

int main(){
    seive();
    euler_phi();
    int i, a, b;
    scanf ("%d%d", &a, &b);
    printf ("A = %d     B = %d      res = %d\n", phi[a-1], phi[b], phi[b] - phi[a-1]);
//    for (i = 0; i < c; i++)
//        printf ("%d ", prime[i]);
//    for (i = 1; i <= 8; i++)
//        printf ("Phi = %d\n", phi[i]);
        //printf ("Phi = %d\n", euler_phi(i));
    return 0;
}
