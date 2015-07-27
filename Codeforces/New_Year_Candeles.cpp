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
#define MAX 999

int main(){
    int a, b, i, j, cnt, tmp, res;
    while (scanf ("%d%d", &a, &b) == 2){
        /*int sum = a + b;
        if (sum % 2 == 0) printf ("%d\n", sum+1);
        else printf ("%d\n", sum-1);*/
        res = ((a*b) - 1) / (b - 1);
        printf ("%d\n", res);
    }
    return 0;
}
