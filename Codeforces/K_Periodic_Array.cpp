#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 100+10
#define new_line printf ("\n")

int main(){
    int n, k, i, j, cnt, tmp, a[MAX], b[MAX], value[MAX];
    while (scanf ("%d%d", &n, &k) == 2){
        memset (a, 0, sizeof (a));
        memset (b, 0, sizeof (b));
        for (i = 0; i < n; i++){
            scanf ("%d", &value[i]);
            if (value[i] == 1){
                a[i%k]++; printf ("A = %d\n", a[i]);
            }else{
                b[i%k]++; printf ("B = %d\n", b[i]);
            }
        }
        //new_line;
        cnt = 0;
        for (i = 0; i < n; i++){
            if (a[i] < b[i]) cnt += a[i];
            else cnt += b[i];
        }
        printf ("%d\n", cnt);
    }
    return 0;
}
