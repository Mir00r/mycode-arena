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
#define MAX 10005
#define row 20
#define col 20
#define eps 1e-9

int main(){
    int tc, cs=1, n, m, i, j, tmp, cnt, ans, a[MAX], b[MAX], minx;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &n, &m);
        //b[0] = 0;
        cnt = tmp = minx = 0;
        for (i = 1; i <= n; i++){
            scanf ("%d", &a[i]);
        }
        sort (a, a+n);
        int last = a[n-1];
        //printf ("Last = %d\n", last);
        for (i = 1; i <= n; i++){
            //tmp = b[i] - a[i];
            tmp = last - a[i];
            //printf ("Tmp = %d\n", tmp);
            m -= tmp;
            //printf ("M = %d\n", m);
        }
        if (m % n == 0) puts ("Yes");
        else puts ("No");
    }
    return 0;
}


/*
int main(){
    int tc, cs=1, n, m, i, j, tmp, cnt, ans, a[MAX], b[MAX], minx;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &n, &m);
        //b[0] = 0;
        cnt = tmp = minx = 0;
        for (i = 1; i <= n; i++){
            scanf ("%d", &a[i]);
            //if (a[i] > b[0]) b[i] = a[i];
            //printf ("%d ", b[i]);
            //puts ("");
            if (a[i] > minx) minx = a[i];
            //printf ("Max = %d\n\n", minx);
        }
        for (i = 1; i <= n; i++){
            //tmp = b[i] - a[i];
            tmp = minx - a[i];
            //printf ("Tmp = %d\n", tmp);
            m -= tmp;
            //printf ("M = %d\n", m);
        }
        if (m % n == 0) puts ("Yes");
        else puts ("No");
    }
    return 0;
}


*/
