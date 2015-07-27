#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define LL long long
#define MAX 5




/*LL cal_dis (LL x1, LL y1, LL x2, LL y2){
    LL dis, res;
    dis = ( (x1 - x2) * (x1 - x2)) + ( (y1 - y2) *  (y1 - y2));
    res = sqrt (dis);
    return res;
}
*/

int main(){
    LL n, x1, y1, x2, y2, i, j, ans, tmp;
    scanf ("%I64d", &n);
    LL x_axis[n], y_axis[n];
   /* for (i = 0; i < n; i++){
        scanf ("%I64d %I64d %I64d %I64d", x1, y1, x2, y2);
        tmp = cal_dis(x1, y1, x2, y2);
        printf ("TMp = %I64d\n", tmp);
        ans = tmp * tmp;
    }
        printf ("%I64d\n", ans);*/
    for (i = 0; i < n; i++)
        scanf ("%I64d %I64d", &x_axis[i], &y_axis[i]);
    sort (x_axis, x_axis+n);
    sort (y_axis, y_axis+n);

    x1 = x_axis[0];
    x2 = x_axis[n-1];

    y1 = y_axis[0];
    y2 = y_axis[n-1];

    //tmp = cal_dis(x1, y1, x2, y2);
    LL ax = abs (x1 - x2);
    LL bx = abs (y1 - y2);
    tmp = max ( ax, bx);
   // printf ("TMp = %I64d\n", tmp);

    ans = tmp * tmp;
    printf ("%I64d\n", ans);
    return 0;
}
