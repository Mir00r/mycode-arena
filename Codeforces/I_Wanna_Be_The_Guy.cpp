#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 105


int main (){
    int n, x, y, p, q, lavel[MAX],i, j, cnt, tmp, ans, check;
    scanf ("%d%d", &n, &x);
    for (i = 0; i < x; i++){
        scanf ("%d", &p);
        lavel[p] = 1;
        printf ("%d ", lavel[i]);
    }
    puts ("");
    scanf ("%d", &y);
    for (i = 0; i < y; i++){
        scanf ("%d", &q);
        lavel[q] = 1;
        printf ("%d ", lavel[i]);
    }
    puts ("");
    cnt = tmp = check = 0;
    for (j = 1; j <= n; j++){
        //if (p[j] == q[j]) cnt++;
        //else cnt = 0;
        if (lavel[j] != 1){
            //check = 1;
            //break;
            puts ("Oh, my keyboard!");
            return 0;
        }
    }
    ans = (x+y) - cnt;
//    printf ("CNT = %d\nANS = %d\n", cnt, ans);
//    if (ans == n) puts ("I become the guy.");
//    else puts ("Oh, my keyboard!");
    puts ("I become the guy.");
    return 0;
}

/*int main (){
    int n, x, y, p[MAX], q[MAX], i, j, cnt, tmp, ans;
    scanf ("%d", &n);
    scanf ("%d", &x);
    for (i = 0; i < x; i++) scanf ("%d", &p[i]);
    scanf ("%d", &y);
    for (i = 0; i < y; i++) scanf ("%d", &q[i]);
    cnt = tmp = 0;
    for (j = 0; j < n; j++){
        if (p[j] == q[j]) cnt++;
        //else cnt = 0;
        break;
    }
    ans = (x+y) - cnt;
    printf ("CNT = %d\nANS = %d\n", cnt, ans);
    if (ans == n) puts ("I become the guy.");
    else puts ("Oh, my keyboard!");
    return 0;
}
*/
