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
    ll i, j;
    isPrime[1] = false;
    for(i = 2; i <= MAX; i++)
        isPrime[i] = true;
            for(i = 2; i <= MAX; i++)
                if(isPrime[i] == true)
                    for(j = 2*i; j <= MAX; j += i)
                        isPrime[j] = false;
}

int main(){
    sieve();
    char str[256];
    ll i, j, p_str[256], temp, len, max;
    while(scanf("%s", str) == 1){
		if(strcmp("0",str) == 0)
            break;
        max = 0;
        int len = strlen(str);
        for(i = 0; i < len; i++)
            p_str[i] = str[i] - '0';
        for(i = 0; i < len; i++){
            temp = 0;
            for(j = i; j < len; j++){
                temp = temp * 10 + p_str[j];
				if(temp > 100000)
                    break;
                    if(isPrime[temp] == true)
                        if(temp > max)
                            max = temp;
            }
        }
        printf ("%lld\n", max);
    }
    return 0;
}

/*bool isPrime[MAX];
void seive(){
    ll i, j;
    isPrime[1] = false;
    for (i = 2; i <= MAX; i++)
        isPrime[i] == true;
    for (i = 2; i <= MAX; i++)
        if (isPrime[i] == true)
            for (j = 2*i; j <= MAX; j += i)
                isPrime[j] = false;
}
int main(){
    ll i, j, k, max, p_str[258], len, temp;
        seive();
    char str[258];
    while (scanf ("%s", str) == 1){
        if (strcmp ("0", str) == 0)
            break;
        len = strlen(str);
        for (i = 0; i < len; i++)
            p_str[i] = str[i] - '0';
        max = 0;
        for (i = 1; i < len; i++){
            temp = 0;
            for (j = i; j < len; j++){
                temp = temp*10+p_str[j];
                if (temp > 100000)
                    break;
                if (isPrime[temp] == true)
                    if (temp > max)
                        max = temp;
            }
        }
        printf ("%lld\n", max);
    }
    return 0;
}*/
