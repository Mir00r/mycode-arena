#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 100
#define row 60
#define col 60
#define memo(y) memset(y ,0 ,sizeof(y))


int main(){
    int n, x, l, r, t, i, j, ans, cnt, tmp;
    scanf ("%d %d", &n, &x);
    t = 1;
    ans = cnt = tmp = 0;

    for (i = 0; i < n; i++){
        scanf ("%d %d", &l, &r);
        while (t+x <= l) t += x;

        ans = ans + (r-t) + 1;
        t = r + 1;
    }

    printf ("%d\n", ans);
    return 0;
}
