#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 100000+10
#define eps 1e-11

int n, a[MAX];

int find_swep(int n, int *a){
    int i, j, tmp, cnt = 0, b[MAX];
    for (i = 0; i < n; i++) b[i] = a[i];
    for (i = 0; i < n; i++){
        for (j = 0; j < n-1; j++){
            if (b[j] > b[j+1]){
                tmp = b[j];
                b[j] = b[j+1];
                b[j+1] = tmp;
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    int t, i, c = 0, ans;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d", &n);
        //for (i = 0; i < n; i++) scanf ("%d", &a[i]);
        ans = find_swep(n, a);
        printf ("Case %d: %d\n", ++c, ans);
    }
    return 0;
}
