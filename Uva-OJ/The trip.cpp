#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 200000
#define row 100+10
#define col 100+10

int main(){
    int n, i, j;
    double arr[MAX], ans, sum, avg, add1, add2, diff;
    while (scanf ("%d", &n) == 1 && n){
        sum = 0; avg = 0;
        for (i = 0; i < n; i++){
            scanf ("%lf", &arr[i]);
            sum += arr[i];
        }
        avg = sum / n;
        //printf ("AVG = %lf\n", avg);
        diff = 0; add1 = 0; add2 = 0;
       for (i = 0; i < n; i++){
            diff = (double)(long)((arr[i] - avg) * 100) / 100.0;
           // diff = (arr[j] - avg);
            if (diff < 0) add1 -= diff;
            else add2 += diff;
        }
        if (add1 > add2) printf ("$%.2lf\n", add1);
        else printf ("$%.2lf\n", add2);
    }
    return 0;
}

