#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 10000

int main (){
    int n, ans;
    scanf ("%d", &n);
    ans = (3*n) * (n+1);
    printf ("%d\n", ans+1);
    return 0;
}
