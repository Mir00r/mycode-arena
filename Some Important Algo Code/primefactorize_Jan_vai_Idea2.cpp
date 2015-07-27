#include <stdio.h>
#include <math.h>

int list[120], prime[120];
int list_size;

void primefactorize(int n){
    int N, i;
    int sqrtN = sqrt(n);
    for (i = 0; prime[i] <= sqrtN; i++){
        if (n % prime[i] == 0){
            while (n % prime[i] == 0){
                n /= prime[i];
                list[list_size] = prime[i];
                list_size++;
            }
        }
    }
    if (n > 1){
        list[list_size] = n;
        list_size++;
    }
}

int main (){
    int i;
    primefactorize(114);
    for (i = 0; i <= list_size; i++)
        printf ("%d ", list[i]);
    return 0;
}
