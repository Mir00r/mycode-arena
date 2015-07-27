#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9999

int main(){
    int n, d, taka, overtime, morning[MAX], evening[MAX], i, j, tmp, cnt;
    while (scanf ("%d%d%d", &n, &d, &taka) == 3){
        if (n == 0 && d == 0 && taka == 0) break;
        for (i = 0; i < n; i++) scanf ("%d", &morning[i]);
        for (i = 0; i < n; i++) scanf ("%d", &evening[i]);
        sort (morning, morning+n);
        sort (evening, evening+n);
        overtime = 0;
        for (i = 0; i < n; i++){
            tmp = morning[i] + evening[n-i-1];
            if (tmp > d) overtime += taka * (tmp-d);
        }
        printf ("%d\n", overtime);
    }
    return 0;
}
