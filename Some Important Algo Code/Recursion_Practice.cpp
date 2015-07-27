#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll  long long int
#define MAX 1000

int arr[MAX], i, j, t, n, tmp, c=0, x, y, z, a, b;

//Solution 1
/*void rev_arr(int j, int n, int *arr){
    if (j < n){
        rev_arr(j+1, n, arr);
        printf ("%d ", arr[j]);
    }
}

int main(){
    scanf ("%d", &t);
    while (t--){
        scanf ("%d", &n);
        tmp_fun(0, n);*/
        //for (i = 0; i < n; i++)
            //scanf ("%d", &arr[i]);
        /*sort(arr, arr+n);
        for (i = 0; i < n; i++)
            printf ("%d ", arr[i]);
                printf ("\n");*/
        /*rev_arr(0, n, arr);
        printf ("\n");
    }
    return 0;
}*/

// Solution 2
void print_arr(int j, int n, int *arr){
    if (j <= n){
        printf ("%d %d\n", arr[j], arr[n]);
        print_arr(j+1, n-1, arr);
    }
}

int main(){
    scanf ("%d", &t);
    while (t--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++)
            scanf ("%d", &arr[i]);
        print_arr(0, n-1, arr);
        printf ("\n");
    }
    return 0;
}
// Solution 3
/*void print_even_num(int i, int j, int *n, int *arr){
    if (i == *n){
        *n = j;  // resize n
        return;
    }
    if (arr[i] % 2 == 0)
        arr[j++] = arr[i];
    print_even_num(i+1, j, n, arr);
}

int main(){
    scanf ("%d", &t);
    while(t--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++)
            scanf ("%d", &arr[i]);
        print_even_num(0, 0, &n, arr);
        for (i = 0; i < n; i++)
            printf ("%d ", arr[i]);
            printf ("\n");
    }
    return 0;
}*/


// Soluiton 4
/*void print_polynomial_series(int i, int n){
    if (i < n){
        if (i == 0) printf ("1");
        else{
            printf ("+ x");
            if (i > 1) printf ("^%d", i);
        }
        print_polynomial_series(i+1, n);
    }
}
int main(){
    scanf ("%d", &t);
    while (t--){
        scanf ("%d", &n);
        print_polynomial_series(0, n);
        printf ("\n");
    }
    return 0;
}*/

// Solution 5

/*int sum_polynomial_series(int i, int x, int n){
    if (n == 0) return 1;
    if (i < n)
        return pow(x, i) + sum_polynomial_series(i+1, x, n);
    return 0;
}

int main(){
    scanf ("%d", &t);
    while (t--){
        scanf ("%d%d", &x, &n);
        int res = sum_polynomial_series(0, x, n);
        printf ("%d\n", res);
    }
    return 0;
}*/
