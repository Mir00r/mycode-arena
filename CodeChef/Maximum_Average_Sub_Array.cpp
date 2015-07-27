#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 100005

int main (){
    int tc, n, a[MAX], i, j, maxn, tmp, cnt, ans;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++) scanf ("%d", &a[i]);
        maxn = cnt = tmp = 0;
        sort (a, a+n);
        for (i = 0; i < n; i++){
            if (a[i] > maxn) maxn = a[i];
        }
        printf ("%d\n", maxn);
    }
    return 0;
}
