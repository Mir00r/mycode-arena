#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 100005


int main(){
    int n, t, i, j, cnt, tmp, arr[MAX], ans;
    bool brr[MAX], check;
    scanf ("%d %d", &n, &t);

    //for (i = 1; i <= n-1; i++) brr[i] = false;
    check = false;
    for (i = 1; i <= n-1; i++) scanf ("%d", &arr[i]);
    cnt = tmp = ans = 0;
    i = 1;
    while (i < t){
        //brr[i + arr[i]] = true;
        i += arr[i];
        //printf ("I = %d\n", i);
        if (i == t){
            check = true;
            break;
        }
    }

    if (check == true) puts ("YES");
    else puts ("NO");
    return 0;
}
