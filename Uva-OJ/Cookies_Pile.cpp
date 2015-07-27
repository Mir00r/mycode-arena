#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 105
#define row 20
#define col 20
#define eps 1e-9

int main(){
    int tc, cs=1, n, a, d, i, j, cnt, sum, tmp, arr[MAX], ans, check;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d%d", &n, &a, &d);
        sum = cnt = tmp = 0;
        //arr[0] = a;
        for (i = 0; i < n; i++){
//            tmp = a+d;
//            if (tmp - a == d) arr[i] = tmp;
//            sum += arr[i];
            sum += a;
            a += d;
            //printf ("Sum = %d   A = %d\n", sum, a);
        }
        printf ("%d\n", sum);
    }
    return 0;
}
