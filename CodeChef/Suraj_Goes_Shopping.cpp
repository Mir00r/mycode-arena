#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 100005
#define row 100


int main(){
    int tc, cs, n, price[MAX], i, j, ans, tmp;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++) scanf ("%d", &price[i]);
        ans = 0;
        sort (price, price+n);
        for (i = n-1; i >= 0; i-=4){
            if (i == 0)
                ans += price[i];
            else
                ans += (price[i] + price[i-1]);
        }
        printf ("%d\n", ans);
    }
    return 0;
}
