#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <set>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1005
#define LLI __int64

/*int main(){
    int a, b, c, i, j, cnt, tmp, check, ans;
    int m, n, o, p, q, res[MAX];
    scanf ("%d %d %d", &a, &b, &c);
    res[0] = a + b * c;
    res[1] = a * (b + c);
    res[2] = (a + b) * c;
    res[3] = a * b * c;
    res[4] = a + b + c;
    sort (res, res+5);
//    for (i = 0; i < 5; i++)
//        printf ("%d\n", res[i]);
    printf ("%d\n", res[5-1]);
    return 0;
}
*/

int main(){
    int a, b, ans;
    while (scanf ("%d %d", &a, &b) == 2){
        ans = a | b;
        printf ("%d\n", ans);
    }
    return 0;
}
