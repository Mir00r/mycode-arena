#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 100000+10

int main (){
    int cs=0, n, arr[MAX], i, j, k, count;
    l product, max_num;
    bool blank = false;
    while(scanf ("%d", &n) == 1){
       // if (blank) printf ("\n"); blank = true;
        for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
       // if (blank) printf ("\n"); blank = true;
            max_num = 0;
            //product = 1;
        for (i = 0; i < n; i++){
            //product = 1;
            for (j = i; j < n; j++){
                product = 1;
                for (k = i; k <= j; k++){
                    product *= arr[k];
                    //printf ("Product = %ld\n", product);
                    if (max_num < product) max_num = product;
                }
                //if (max_num < product) max_num = product;
            }
        }
        printf ("Case #%d: The maximum product is %ld.\n\n", ++cs, max_num);
    }
    return 0;
}
