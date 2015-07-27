#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 1005
#define row 20
#define col 20
#define eps 1e-9


int main(){
    int coin[MAX], sum , cnt, tmp, i, j, ans;
    for (i = 0; i < 5; i++) scanf ("%d", &coin[i]);
    sum = cnt = tmp = 0;
    for (i = 0; i < 5; i++)
        sum += coin[i];
    if (sum == 0) puts ("-1");
    else if (sum % 5 == 0) printf ("%d\n", sum/5);
    else puts ("-1");
    return 0;
}
