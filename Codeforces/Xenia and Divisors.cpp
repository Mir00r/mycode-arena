#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999

int main(){
    int n, arr[MAX], i, j, inp, ans, tmp, a, b, c;
    while (scanf ("%d", &n) == 1){
        for (i = 0; i < n; i++){
            //scanf ("%d", &arr[i]);
            scanf("%d", &inp);
            arr[inp]++;
        }
        //sort (arr, arr+n);
        a = arr[4];
        b = arr[2] - arr[4];
        c = n/3 - arr[2];
        if (arr[5] == 0 && arr[7] == 0 && arr[1] == n/3 &&
            (arr[2]+arr[3]) == n/3 && (arr[4]+arr[6]) == n/3 && arr[2] >= arr[4]){
            for (i = 0; i < a; i++) printf ("1 2 4\n");
            for (i = 0; i < b; i++) printf ("1 2 6\n");
            for (i = 0; i < c; i++) printf ("1 3 6\n");
            //printf ("\n");
        }
        else printf ("-1\n");
    }
    return 0;
}
