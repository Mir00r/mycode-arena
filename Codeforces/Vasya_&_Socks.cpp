#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 100000

/*int main (){
    int n, m, i, j, cnt, ans, div, mod, tmp;
    scanf ("%d%d", &n, &m);
    div = mod = cnt = tmp = ans = 0;
    tmp = n;
    while (n > m-1){
        div = n / m;
        mod = n % m;
        tmp += div;
        n = div + mod;
    }
    printf ("%d\n", tmp);
    return 0;
}
*/
int main (){
    int a[MAX], n, m, i, j, cnt, ans, tmp, w;
    scanf ("%d%d%d", &n, &m, &w);
    for (i = 0; i < n; i++) scanf ("%d", &a[i]);
    sort (a, a+n);
    for (i = 0; i < m-1; i++){
        for (j = 0; j < w; j++){
            a[j] += 1;
            //ans = a[j];
        }
    }
    //ans = min (a[0], a[n-1]);
    printf ("%d\n", a[0]);
    return 0;
}
