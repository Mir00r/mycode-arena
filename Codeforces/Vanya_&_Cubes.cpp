#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 105

int main(){
    LLI n, i, j, sum, ans, cnt, tmp, check;
    scanf ("%I64d", &n);
    sum = cnt = 0;
    if (n == 1) puts ("1");
    else{
        for (i = 1; i <= n; i++){
            sum += i;
            if (n >= sum){
                n -= sum;
                cnt++;
            }
        }
        printf ("%I64d\n", cnt);
    }

    return 0;
}
