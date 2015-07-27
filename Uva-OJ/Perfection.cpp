#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX  60000 + 10

int main(){
    ll i, j, n, cs=1, sum, tmp, cnt, arr[MAX];
    printf ("PERFECTION OUTPUT\n");
    while (scanf ("%lld", &n) == 1){
        sum = cnt = 0;
        memset (arr, 0, sizeof (arr));
        if (n == 0) printf ("END OF OUTPUT\n");
        else{
            //sum = cnt = 0;
            //memset (arr, 0, sizeof (arr));
            for (i = 1; i < n; i++){
                if (n % i == 0){
                    arr[cnt] = i;
                    cnt++;
                }
            }
            for (j = 0; j < cnt; j++) sum += arr[j];
            if (sum == n) printf ("%5d  PERFECT\n", n);
            else if (sum < n) printf ("%5d  DEFICIENT\n", n);
            else printf ("%5d  ABUNDANT\n", n);
        }
    }
    //printf ("END OF OUTPUT\n");
    return 0;
}

/*int main(){
    ll i, j, n, cs=1, sum, tmp, cnt, arr[MAX];
    printf ("PERFECTION OUTPUT\n");
    while (scanf ("%lld", &n) == 1 && n){
        sum = cnt = 0;
        //memset (arr, 0, sizeof (arr));
        for (i = 1; i <= n/2; i++){
            if (n % i == 0){
                sum += i;
                printf ("%d", sum);
            }
        }
        if (sum == n) printf ("%5d  PERFECT\n", n);
        else if (sum < n) printf ("%5d  DEFICIENT\n", n);
        else printf ("%5d  ABUNDANT\n", n);
    }
    printf ("END OF OUTPUT\n");
    return 0;
}*/

