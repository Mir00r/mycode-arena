#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define unsigned int
#define MAX 10000001

bool arr[MAX];

int main(){
    int i, j, tmp, flag, sum, digit;
    sum = digit = flag = 0;
    for (i = 1; i <= MAX; i++){
        sum = digit = i;
        while (digit > 0){
            sum = sum + digit % 10;
           // printf ("Summation = %d\n\n", sum);
            digit = digit / 10;
            //printf ("Digit = %d\n\n", digit);
        }
        if (sum < MAX)
            arr[sum] = true;
    }
    for (j = 1; j < MAX; j++){
        if (arr[j] == false)
            printf ("%d\n", j);
    }
    return 0;
}
