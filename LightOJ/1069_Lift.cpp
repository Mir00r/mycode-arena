#include <stdio.h>

int main(){
    int t, i, mepos, liftpos, temp, sum, lud, base;
    scanf ("%d", &t);
    for (i = 0; i < t; i++){
        scanf ("%d%d", &mepos, &liftpos);
        if (mepos < liftpos){
            temp = liftpos - mepos;
            lud = (temp * 4) + 6 + 5;
            base = (mepos * 4) + 3 + 5;
            sum = lud + base;
            printf ("Case %d: %d\n", i+1, sum);
        }
        else if (mepos > liftpos){
            temp = mepos - liftpos;
            lud = (temp * 4) + 6 + 5;
            base = (mepos * 4) + 3 + 5;
            sum = lud + base;
            printf ("Case %d: %d\n", i+1, sum);
        }
        else if (mepos == liftpos){
            temp = liftpos - mepos;
            lud = (temp * 4) + 6 + 5;
            base = (liftpos * 4) + 3 + 5;
            sum = lud + base;
            printf ("Case %d: %d\n", i+1, sum);
        }
    }
    return 0;
}
