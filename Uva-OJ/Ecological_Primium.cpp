#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define eps 1e-11
#define MAX 999

int gun_kor(int x, int y){
    return x*y;
}
int main(){
    int t, c = 0, farmar, farmar_size, animal, far_env, i, j, k, sum, tmp;
    scanf ("%d", &t);
    while (t--){
        sum = 0;
        scanf ("%d", &farmar);
        for (i = 0; i < farmar; i++){
            scanf ("%d%d%d", &farmar_size, &animal, &far_env);
            tmp = gun_kor(farmar_size, far_env);
            sum += tmp;
        }
        printf ("%d\n", sum);
    }
    return 0;
}

