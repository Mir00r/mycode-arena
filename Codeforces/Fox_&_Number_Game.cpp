#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 105

int gcd (int a, int b){
    if (b == 0) return a;
    else return gcd (b, a%b);
}

int main (){
    int n, sum, cnt, i, j, k, check, arr[MAX], ans;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
    j = arr[0];
    for (i = 1; i < n; i++){
        j = gcd (j, arr[i]);
    }
    printf ("%d\n", j*n);
    //printf ("%d\n", 2%1);
    return 0;
}


/*int main (){
    int n, sum, cnt, i, j, tmp, check, x, y, arr[MAX], ans;
    scanf ("%d%d", &n, &x);
    for (i = 1; i < n; i++){
        scanf ("%d", &y);
        x = gcd (x,y);
    }
    printf ("%d\n", x*n);
    return 0;
}*/


/*
int main(){
    int n, i, j, cnt, tmp, ans, sum, arr[MAX];
    scanf ("%d", &n);
//    cnt = sum = 0;
    for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
    //sort (arr, arr+n);
        cnt = sum = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            if (arr[i] > arr[j]){
                arr[i] = arr[i] - arr[j];
                //sum += arr[i] - arr[j];
                //printf ("Arr = %d\n", arr[i]);
            }

        sum += arr[i];
        //printf ("Sum = %d\n", sum);
    }
    //for (i = 0; i < n; i++) sum = arr[i];
    printf ("%d\n", sum);
    return 0;
}




/*int main(){
    int n, i, j, cnt, tmp, ans, sum, arr;
    scanf ("%d", &n);
//    cnt = sum = 0;
    for (i = 0; i < n; i++) scanf ("%d", &arr);
    //sort (arr, arr+n);
        cnt = sum = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i > j){
                arr += arr - j;
                //sum += arr[i] - arr[j];
                //printf ("Arr = %d\n", arr[i]);
            }
        }
        //sum = arr[i];
        //printf ("Sum = %d\n", sum);
    }
    //for (i = 0; i < n; i++) sum = arr[i];
    printf ("%d\n", arr);
    return 0;
}
*/




/*int main (){
    int n, sum, cnt, i, j, check, arr[MAX], ans;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
    check = 0;
    while (check == 0){
        check = 1; //printf ("Che_1 = %d\n", check);
        sort (arr, arr+n);
        for (i = 1; i < n; i++){
            if (arr[i] > arr[i-1]){
                arr[i] = arr[i] - arr[i-1];
                check = 0;
                //printf ("Che_2 = %d\n", check);
            }
           // printf ("Che_3 = %d\n", check);
        }
       // printf ("Che_4 = %d\n", check);
    }
    sum = 0;
    for (i = 0; i < n; i++) sum += arr[i];
    printf ("%d\n", sum);
    return 0;
}
*/
