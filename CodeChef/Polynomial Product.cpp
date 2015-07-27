#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long int
#define MAX 100005
#define row 70
#define col 70
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001

int main(){
    int m, n, i, j, k, ans, tmp, cnt;
    int arr[MAX], brr[MAX], crr[MAX];

    while (scanf ("%d %d", &m, &n) == 2){
        for (i = 0; i < m; i++)
            scanf ("%d", &arr[i]);
        for (i = 0; i < n; i++)
            scanf ("%d", &brr[i]);

        CLR (crr);

        for (i = m-1; i >= 0; i--){
            for (j = n-1; j >= 0; j--){
                //printf ("ij = %d\n", i+j);
                crr[i+j] += (arr[i] * brr[j]);
             //   printf ("Crr = %d\n", crr[i+j]);
            }
        }

        printf ("%d ", crr[0]);

        for (i = 1; i < m+n-1; i++)
            printf ("+ %dx^%d ", crr[i], i);
        NL;
    }

    return 0;
}
