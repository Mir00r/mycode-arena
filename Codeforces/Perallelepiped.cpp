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
#define MAX 9990

int main(){
    int a, b, c, root, ans, i, j, cnt, tmp;
    while (scanf ("%d%d%d", &a, &b, &c) == 3){
        root = sqrt (a*b*c);
        ans = 4 * (root/a + root/b + root/c);
        printf ("%d\n", ans);
    }
    return 0;
}
