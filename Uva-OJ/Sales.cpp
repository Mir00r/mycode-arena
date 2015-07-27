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
    int tc, n, arr[MAX], i, j, k, tmp, cnt;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
        cnt = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < i; j++)
                if (arr[j] <= arr[i]) cnt++;
        printf ("%d\n", cnt);
    }
    return 0;
}
