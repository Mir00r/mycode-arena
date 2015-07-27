#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 1000000+10

/*int main(){
    int tc, cs=1, r1, r2, c1, c2, ans;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d%d%d", &r1, &c1, &r2, &c2);
        if (abs(r1-r2) == abs(c1-c2)) printf ("Case %d: 1\n", cs++);
        else if (abs(r1-r2) % 2 == abs (c1-c2) % 2) printf ("Case %d: 2\n", cs++);
        else printf ("Case %d: impossible\n", cs++);
    }
    return 0;
}*/
int tc;
l i, j, n, res, base;
double f[MAX];

int main(){
    scanf("%d", &tc);
    for(i = 1; i <= 1000000; i++)
        f[i] = log10(i) + f[i-1];
    //printf ("%ld\n", f[i]);
    for(j = 1; j <= tc; j++){
        scanf("%ld%ld", &n, &base);
        res = (f[n] / (f[base] - f[base-1])) + 1;
        printf("Case %d: %ld\n", j, res);
    }
    return 0;
}
