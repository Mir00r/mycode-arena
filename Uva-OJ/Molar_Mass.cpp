#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 100

int main (){
   // puts ("Hello Lenovo");
    int tc, i, j, len, cnt, check, ans;
    double res, tr, sum, tmp, mole;
    char atom[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s", atom);
        len = strlen (atom);
        sum = res = mole = tmp = 0.0;
        for (i = 0; i < len; i++){
            if (atom[i] == 'C') mole = 12.010;
            if (atom[i] == 'H') mole = 1.008;
            if (atom[i] == 'O') mole = 16.000;
            if (atom[i] == 'N') mole = 14.010;
            sum += atom[i];
        }
        printf ("%.3lf\n", sum);
    }
    return 0;
}
