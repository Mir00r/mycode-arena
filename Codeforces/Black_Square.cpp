#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 100005



int main (){
    int a[5], b[MAX];
    char str[MAX];
    int m, n, o, p, i, j, cnt, sum, len, tmp, check;
    //for (i = 1; i <= 4; i++) scanf ("%d", &a[i]);
    scanf ("%d%d%d%d", &m, &n, &o, &p);
    scanf ("%s", str);
    //gets (str);
    len = strlen (str);
    //printf ("Len = %d\n", len);
    memset (b, 0, sizeof (b));
    cnt = sum = tmp = check = 0;
    for (i = 0; i < len; i++){
        if (str[i] == '1'){
            b[i] = m;
            //sum += b[i];
           //sum += m;
            //printf ("X = %d\n", sum);
        }
         if (str[i] == '2'){
            b[i] = n;
            //sum += b[i];
//            sum += n;
           //printf ("Y = %d\n", b[i]);
        }
         if (str[i] == '3'){
            b[i] = o;
            //sum += b[i];
//            sum += o;
            //printf ("Z = %d\n", b[i]);
        }
         if (str[i] == '4'){
            b[i] = p;
            //sum += b[i];
//            sum += p;
           //printf ("XX = %d\n", b[i]);
        }
        sum += b[i];
    }
//    for (i = 0; i < len; i++){
//        sum += b[i];
//        printf ("%d ", b[i]);
//    }
    printf ("%d\n", sum);
    return 0;
}
