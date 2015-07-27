#include <stdio.h>
#include <math.h>

int main(){
	long long int i, j, k, n, flag, flag_1, reverse, temp;
	while (scanf("%lld", &n) == 1){
	    flag = 0;
	    flag_1 = 0;
	    reverse = 0;
	    temp = 0;
	    temp = n;
        for (i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("%lld is not prime.\n", n);
        else if (flag == 0){
            while (n != 0){
                reverse = reverse * 10;
                reverse = reverse + n % 10;
                n = n / 10;
            }
            for (k = 2; k <= sqrt(reverse); k++){
                if (reverse % k == 0){
                    flag_1 = 1;
                    break;
                }
            }
            if (temp == reverse)
                printf ("%lld is prime.\n", temp);
            else if (flag_1 == 1)
                printf ("%lld is prime.\n", temp);
            else if (flag_1 == 0)
                printf("%lld is emirp.\n", temp);
        }
	}
	return 0;
}
