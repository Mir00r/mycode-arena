/*
    Auther: Abdur Razzak
    Daffodil International University
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 1000005

int arr[MAX], n;
vector <int> brr[MAX];

void pre_cal (){
    int i, j, sum, tmp;
    for (i = MAX; i > 0; i--){
        sum = tmp = i;
        while (tmp > 0){
            sum += tmp % 10;
           // printf ("Sum = %d\n", sum);
            tmp /= 10;
          //  printf ("tmp = %d\n", tmp);

        }
        arr[sum] = i;
        //printf ("%d ", arr[sum]);
    }
    //puts ("");
}


int main(){
    pre_cal();

    int tc, ans;

    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        ans = arr[n];
        printf ("%d\n", ans);
    }
    return 0;
}
