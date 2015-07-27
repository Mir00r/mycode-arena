#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 1000

int main(){
    int n, i, p, array[MAX] = {0};
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        int b;
        scanf("%d", &b);
        if(b == 0)
        printf("0 0\n");
        else if(b == 20)
            printf("10 10\n");
        else if(b < 11)
            printf("%d %d\n", array[b], abs(b-array[b]));
        else{
            p = 10 - array[b];
            printf("%d %d\n", p, abs(b-p));
        }
        array[b]++;
    }
    return 0;
 }
