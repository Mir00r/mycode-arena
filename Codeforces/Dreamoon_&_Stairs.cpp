#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 10005

int main(){
    int n, m, i, j, cnt, sum, tmp, ans, check;
    scanf ("%d%d", &n, &m);
//    sum = n + m;
//    if (sum % m == 0) printf ("%d\n", sum/m);
//    else puts ("-1");
    //int a[MAX];
    cnt = check = 0;
    if (n > m){
        tmp = n; i = 0;
        while (tmp > 0){
            if (m % 2 == 0) tmp -= 2;
            //a[i++] = 2;
            //if (tmp % m == 0)
            cnt++;
        }
        //for (j = 0; j < cnt; j++) printf ("%d ", a[j]);
        printf ("%d\n", cnt+1);
    }else puts ("-1");
    return 0;
}
