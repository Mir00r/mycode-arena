#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9999

int main(){
    int tc, i, j,a, cs=1, b, ans;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &a, &b);
        ans = a+b;
        printf ("Case %d: %d\n", cs++, ans);
    }
    return 0;
}

