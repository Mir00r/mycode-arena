#include <stdio.h>

int main(){
    int s, n, count;
    while (scanf ("%d", &s) == 1){
        count = 0;
        n = s;
        while (n != 0){
            if (n % 2 != 0){
                if ((n+1) % 4 == 0 && n != 3){
                    n++;
                }
                else{
                    n--;
                }
                count++;
               // printf ("C1 = %d\n", count);
            }
            if (n != 0){
                n /= 2;
                count++;
                //printf ("C2 = %d\n", count);
            }
        }
        printf ("%d\n", count);
    }
    return 0;
}
