#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <set>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1005
#define LLI __int64

int main(){
    int a, b, c, i, j, cnt, tmp, check, ans;
    int m, n, k, arr[MAX], pos_1, pos_2, oper;
    scanf ("%d %d", &n, &k);
    int big_t = pos_1 = oper = 0;
    for (i = 1; i <= n; i++){
        scanf ("%d", &arr[i]);
        if (arr[i] > big_t){
            big_t = arr[i];
            pos_1 = i;
          //  printf ("Big = %d   pos = %d\n", big_t, pos_1);
        }
    }
    for (i = 1; i <= n; i++){
        //tmp = i;
        if (arr[i] == big_t) continue;
        else{
            a = big_t - arr[i];
            pos_2 = i;
            oper++;
            //printf ("A = %d\n", a);
        }
    }
    return 0;
}

