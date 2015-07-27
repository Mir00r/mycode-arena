#include <stdio.h>
#include <math.h>

long long H(int n){
      long long res = 0;
      int i, root;
      root = sqrt(n);
     for(i = 1; i <= root; i++){
            res = (res + n/i);
      }
     return res * 2 - root*root;
}

int main(){
    int i, t;
    long long int n, result;
    scanf ("%d", &t);
    for (i = 1; i <= t; i++){
        scanf("%lld", &n);
        result = H(n);
        printf ("%lld\n", result);
    }
    return 0;
}
