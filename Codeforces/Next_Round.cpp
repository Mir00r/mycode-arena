#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 160

int main(){
    int n, k, a[MAX], tmp, pass, i, j;
    scanf ("%d%d", &k, &n);
    for (i = 0; i < k; i++) scanf ("%d", &a[i]);
    tmp = a[n-1];
    pass = 0;
    for (i = 0; i < k; i++)
        if (a[i] >= tmp && a[i] > 0) pass++;
    printf ("%d\n", pass);
    return 0;
}
