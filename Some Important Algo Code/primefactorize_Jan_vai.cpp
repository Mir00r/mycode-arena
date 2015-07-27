#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int list [128];
int list_size, prime[100];

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

int main (){
    int i;
    primefactorize(40);
    for (i = 0; i <= list_size; i++){
        printf ("%d", list[i]);
    }
    return 0;
}
