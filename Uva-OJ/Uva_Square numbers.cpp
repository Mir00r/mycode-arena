#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c, i, count, y, x;
    scanf ("%d%d", &a, &b);
    if (a>0 && b>0 && a<=b && b<=100000){
        while (a != 0 && b != 0 ){
            count = 0;
            for (i = a; i <= b; i++){
                x = (int)sqrt(i);
                if ((x*x) == i)
                    count++;
            }
        printf ("%d\n", count);
        scanf ("%d%d", &a, &b);
        }
    }
    return 0;
}
