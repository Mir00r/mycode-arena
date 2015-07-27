#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 100000+100

set <int> s;

int main(){
    int n, m, arr[MAX], l[MAX], i, j, x, ans, cnt, tmp;
    while (scanf ("%d%d", &n, &m) == 2){
        for (i = 1; i <= n; i++) scanf ("%d", &arr[i]);
        for (i = n; i >= 1; i--){
            s.insert(arr[i]);
            l[i] = s.size();
        }
       // printf ("%d\n", s.size ());
        for (i = 0; i < m; i++){
            scanf ("%d", &x);
            printf ("%d", l[x]);
            printf ("\n");
        }
    }
    return 0;
}
