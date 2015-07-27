#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 2000
#define base 1000

unsigned int factorial[MAX];

int main (){
    unsigned int res, len, tmp;
    int tc, cs = 1, i, j, k, n;
    factorial[0] = 1;
    len = 1, res = 0;
    //for (i = 1; i <= 100; i++) factorial[i] = ((factorial[i-1])*(i));
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        //if (n <= 33) printf ("%llu\n",factorial[n]);
        //else printf ("0\n");
       // printf ("%llu\n", factorial[n]);
        for (i = 2; i <= n; i++){
            tmp = 0;
            for (j = 0; j < len; j++){
                res = factorial[j] * i + tmp;
                factorial[j] = res % base;
                tmp = res / base;
            }
            while (tmp != 0){
                factorial[len++] = tmp % base;
                tmp /= base;
            }
        }
        printf ("%d", factorial[len-1]);
        for (j = len-2; j >= 0; j--)
            printf ("%.3d", factorial[j]);
        puts ("");
    }
    return 0;
}


