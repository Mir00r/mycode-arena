#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define L unsigned int
#define LL unsigned long long int
#define MAX 30003

int main(){
    int t, n, pi[MAX], i, j, max_dis;
    scanf ("%d", &t);
    while(t--){
        max_dis = 0;
        scanf ("%d", &n);
        for (i = 0; i < n; i++)
            scanf ("%d", &pi[i]);
        sort(pi, pi+n);
        for (j = n-3; j >= 0; j -= 3) max_dis += pi[j];
        printf ("%d\n", max_dis);
    }
    return 0;
}

//int pi[MAX], n, i, j;
/*int max_value(int arr_pi[], int m){
    //if (m == 0)
      //  return 0;
    if (m == 1)
        return arr_pi[0];
    else{
        return max_value(arr_pi, m-1);
    }
}
int maximum(int ar[], int n){
    if (n == 1) {
        return ar[0];

    }else{
        int max = maximum(ar, n-1);
        //printf("Largest element : %d\n", max);
        //return n;
        return ar[n-1] > max ? ar[n-1] : max;
    }
}

int main(){
    int t, n, pi[MAX], i, result, tmp;
    scanf ("%d", &t);
    while(t--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++)
            scanf ("%d", &pi[i]);
        result = max_value(pi, n);
        printf ("%d\n", result);
    }
    return 0;
}*/
