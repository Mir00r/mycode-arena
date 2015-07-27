#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 100005

int n , a[MAX], b[MAX];

int main(){
    int i, j, cnt, tmp, ans, pos, neg, check;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) scanf ("%d", &a[i]);
    cnt = check = pos = neg = ans = 0;
    memset (b, 0, sizeof (b));
    for (i = 0; i < n; i++){
        if (a[i] > 0) pos += a[i];
        else if (a[i] < 0){
            if (pos > 0) pos--;
            else cnt++;
        }
    }
    printf ("%d\n", cnt);
    return 0;
}
