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
    int tc, i, j, n, ans, tmp, mod, div;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        tmp = (((((n*567) / 9) + 7492) * 235) / 47) - 498;
        //printf ("Result = %d\n", tmp);
        if (tmp < 0) tmp *=-1;
        tmp = (tmp/10) % 10;
        printf ("%d\n", tmp);
    }
    return 0;
}
