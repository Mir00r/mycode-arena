#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 1000005

LLI arr[MAX], n;

int main(){
    LLI sum, i, j, ans, tmp, cnt;
    scanf ("%I64d", &n);
    for (i = 0; i < n; i++){
        scanf ("%I64d", &arr[i]);

    }

    sum = 0;
    for (i = 0; i < n; i++){
        if (arr[i] < 0) arr[i] *= (-1);
        sum ^= arr[i];
    }

    if (sum) puts ("first");
    else printf ("second");
    return 0;
}

