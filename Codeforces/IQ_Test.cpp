#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 105

int main (){
    int n, i, j, odd, even, o_indx, e_indx, a[MAX];
    scanf ("%d", &n);
    odd = even = o_indx = e_indx = 0;
    for (i = 1; i <= n; i++){
        scanf ("%d", &a[i]);
        if (a[i] % 2 == 0){
            even += 1;
            e_indx = i;
            //printf ("EVEN = %d\n", even);
        }else{
            odd += 1;
            o_indx = i;
            //printf ("ODD = %d\n", odd);
        }
    }
    if (even == 1) printf ("%d\n", e_indx);
    else printf ("%d\n", o_indx);
    return 0;
}
