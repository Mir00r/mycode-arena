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

int main(){
    int t, k = 0, Cornar, Bike, arr_cornar[MAX], arr_bike[MAX], i, j, tmp, ans;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d", &Cornar);
        for (i = 0; i < Cornar; i++) scanf ("%d", &arr_cornar[i]);
        scanf ("%d", &Bike);
        for (j = 0; j < Bike; j++) scanf ("%d", &arr_bike[j]);
    }

    return 0;
}
