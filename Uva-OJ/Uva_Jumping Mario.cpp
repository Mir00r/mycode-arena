#include <stdio.h>

int main (){
    int t, n, i, j, k, a[100], hj, lj;
    scanf ("%d", &t);
    for (i = 0; i < t; i++){
        hj = 0;
        lj = 0;
        scanf ("%d", &n);
        if (n > 0 && n < 50)
        for (j = 0; j < n; j++) scanf ("%d", &a[j]);
            for (k = 0; k < n - 1; k++){
                if (a[k] == a[k + 1]) continue;
                else if (a[k] < a[k + 1]) hj++;
                else if (a[k] > a[k + 1]) lj++ ;
            }
        printf ("Case %d: %d %d\n", i+1, hj, lj);
    }
    return 0;
}
