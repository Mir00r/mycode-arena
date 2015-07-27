#include <stdio.h>

long long int rev(long long int x){
    long long int reverse;
        reverse = 0;
    if (x == 0) return 0;
    else{
        while (x != 0){
            reverse = reverse * 10;
            reverse = reverse + x%10;
            x = x/10;
        }
    }
    return reverse;
}

int main(){
    long long int num, i, t, count;
    scanf ("%lld", &t);
    for (i = 0; i < t; i++){
        count = 1;
        scanf("%lld", &num);
        while (num != rev(num)){
            num = num + rev(num);
            if (num == rev(num)) break;
            count++;
        }
        printf("%lld %lld\n", count, num);
    }
    return 0;
}
