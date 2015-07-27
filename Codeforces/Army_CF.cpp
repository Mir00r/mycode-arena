#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 200

int main(){
    int n, a, b, year[MAX], i, j, ans, cnt, tmp;
    while (scanf ("%d", &n) == 1){
        for (i = 1; i < n; i++) scanf ("%d", &year[i]);
        scanf ("%d%d", &a, &b);
        ans = 0;
        for (i = a; i < b; i++) ans += year[i];
        printf ("%d\n", ans);
    }
    return 0;
}


/*int main(){
    int n, a, b, year[MAX], i, j, ans, cnt, tmp;
    scanf ("%d", &n);
    for (i = 1; i < n; i++) scanf ("%d", &year[i]);
        scanf ("%d%d", &a, &b);
        ans = 0;
        for (j = a; j < b; j++){
            ans += year[j];
        }
        printf ("%d\n", ans);
    return 0;
}*/
