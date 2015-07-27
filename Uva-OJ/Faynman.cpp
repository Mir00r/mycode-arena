#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long lont int
#define MAX 99999

int main(){
    int n, i, j, sum, cnt, tmp, sqr_cnt;
    while (scanf ("%d", &n) == 1){
        if (n == 0) break;
        sqr_cnt = 0;
        for (i = 1; i <= n; i++){
            tmp = i*i;
            //printf ("Tmp res = %d\n\n", tmp);
            sqr_cnt += tmp;
           // printf ("Square = %d\n\n", sqr_cnt);
        }
        printf ("%d\n", sqr_cnt);
    }
    return 0;
}

