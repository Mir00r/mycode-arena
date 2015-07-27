#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 10000


LLI calcu (LLI a, LLI x, LLI b, LLI y, LLI c){
    return (a*x + b*y + c);
}

int main (){
    LLI x1, y1, x2, y2, a, b, c, n, ans, p, q;
    scanf ("%I64d %I64d %I64d %I64d", &x1, &y1, &x2, &y2);
    scanf ("%I64d", &n);
    ans = 0;
    while (n--){
        scanf ("%I64d %I64d %I64d", &a, &b, &c);
        p = calcu(a, x1, b, y1, c);
        q = calcu(a, x2, b, y2, c);
        //prLLIf ("home = %d Univer = %d\n", p, q);
        if (p > 0 != q > 0) ans++;
    }
    printf ("%I64d\n", ans);
    return 0;
}
