#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 5000005

int price[MAX];

int main(){
    int n, i, j, cnt, ans, sum , tmp;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) scanf ("%d", &price[i]);
    sum = cnt = tmp = ans = 0;
    sort (price, price+n);
    for (i = 0; i < n; i++){
        if (sum <= price[n-1]){
            sum += price[i];
            cnt++;
        }
    }
    printf ("%d\n", cnt);
    return 0;
}
