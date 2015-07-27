#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 1000000+10
#define row 100
#define col 100

void seive ();
int prime[MAX], cnt;
bool is_prime[MAX];

/*void seive(){
    int i, j, root;
    for (i = 2; i <= MAX; i++) is_prime[i] = true;
    root = sqrt (MAX);
    for (i = 3; i < root; i++)
        for (j = i*i; j < MAX; j += i)
            if (is_prime[j] == true) is_prime[j] = false;
    cnt = 0;
    prime[cnt++] = 2;
    for (i = 3; i < MAX; i += 2)
        if (is_prime[i] == true)
            prime[cnt++] = i;
}*/

bool isprime(int x){
    int root, i;
    root = sqrt(x);
    for(i = 2; i <= root; i++){
        if((x%i) == false) return false;
    }
    return true;
}

int main(){
    //seive();
    //for (i = 0; i < cnt; i++) printf ("%d ", prime[i]);
    int n, i, j, baki, tmp, ans;
    while (scanf ("%d", &n) == 1 && n){
        //bool check = true;
        if (n % 2){
            if (isprime(n-2)) printf ("%d:\n%d+%d\n", n, 2, n-2);
            else printf ("%d:\nNO WAY!\n", n);
        }
        else{
            for (i = 3; i <= n; i++){
                if (isprime(i) && isprime(n-i)){
                    printf ("%d:\n%d+%d\n", n, i, n-i);
                    //check = false;
                    break;
                }
            }
            //if (check) printf ("%d:\nNO WAY!\n", n);
        }
    }
    return 0;
}


/*int main(){
    seive();
    //for (i = 0; i < cnt; i++) printf ("%d ", prime[i]);
    int n, baki, tmp, ans;
    while (scanf ("%d", &n) == 1 && n){
        if (n % 2 == 0) baki = n-1;
        else baki = n-2;
        if (prime[n-2]){
            printf ("%d:\n%d+%d\n", n, 2, n-2);
            continue;
        }
        tmp = n - baki;
        bool check = true;
        while (tmp <= baki){
            if (prime[baki] && prime[tmp]){
                printf ("%d:\n%d+%d\n", n, tmp, baki);
                check = false; break;
            }
            baki -= 2;
        }
        if (check) printf ("%d:\nNO WAY!", n);
    }
    return 0;
}*/


