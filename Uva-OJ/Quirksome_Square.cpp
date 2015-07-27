#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 10000
#define row 100
#define col 100
#define memo (array, value) memset (array, value, sizeof (array))

int main(){
    int n, i, j, mul, gun, tmp, cnt, ans, a, b, x, y;
    while (scanf ("%d", &n) == 1){
        mul = gun = 1;
        tmp = n / 2;
        for (i = 0; i < n; i++){
            mul *= 10;
            //printf ("Mul = %d\n", mul);
        }
        for (i = 0; i < tmp; i++){
            gun *= 10;
            //printf ("Gun = %d\n", gun);
        }
        for (i = 0; i < mul; i++){
            x = i / gun;
           // printf ("X = %d\n", x);
            y = i % gun;
           // printf ("Y = %d\n", y);
            if ((x+y) * (x+y) == i){
                if (n == 2) printf ("%01d%01d\n", x, y);
                if (n == 4) printf ("%02d%02d\n", x, y);
                if (n == 6) printf ("%03d%03d\n", x, y);
                if (n == 8) printf ("%04d%04d\n", x, y);
            }
        }
    }
    return 0;
}
